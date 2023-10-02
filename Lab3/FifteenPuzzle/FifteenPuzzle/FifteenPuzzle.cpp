#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>

using namespace sf;

int main()
{
    srand(time(0));

    RenderWindow window(VideoMode(512, 512), "15-Puzzle!");
    window.setFramerateLimit(60);

    Texture texture;
    int a = rand() % 5 + 1;
    std::string texturePath;

    switch (a)
    {
    case 1:
        texturePath = "C:/Paint/Paint/Pro/1.png";
        break;
    case 2:
        texturePath = "C:/Paint/Paint/Pro/2.png";
        break;
    case 3:
        texturePath = "C:/Paint/Paint/Pro/3.png";
        break;
    case 4:
        texturePath = "C:/Paint/Paint/Pro/4.png";
        break;
    case 5:
        texturePath = "C:/Paint/Paint/Pro/5.png";
        break;
    }

    if (!texture.loadFromFile(texturePath)) {
        // Обработка ошибки загрузки текстуры
        std::cerr << "Ошибка загрузки текстуры" << std::endl;
    }

    Sprite sprite[17];
    int w = 128;
    int grid[6][6] = { 0 };
    int n = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            n++;
            sprite[n].setTexture(texture);
            sprite[n].setTextureRect(IntRect(i * w, j * w, w, w)); // Устанавливаем текстурные координаты
            grid[i + 1][j + 1] = n;
        }

    float speed = 16; // Скорость анимации
    Clock clock;

    // Главный цикл приложения: выполняется, пока открыто окно
    while (window.isOpen())
    {
        float deltaTime = clock.restart().asSeconds(); // Время прошедшее с последнего кадра

        // Обрабатываем события в цикле
        Event event;
        while (window.pollEvent(event))
        {
            // Пользователь нажал на «крестик» и хочет закрыть окно?
            if (event.type == Event::Closed)
            {
                // тогда закрываем его
                window.close();
            }

            // Проверяем событие нажатия кнопки мыши
            if (event.type == Event::MouseButtonPressed)
            {
                if (event.key.code == Mouse::Left)
                {
                    Vector2i pos = Mouse::getPosition(window);

                    int x = pos.x / w + 1;
                    int y = pos.y / w + 1;

                    int dx = 0;
                    int dy = 0;

                    int b;
                    if (a != 2 && a != 5)
                        b = 16;
                    else if (a == 2 || a == 5)
                        b = 4;

                    if (grid[x + 1][y] == b)
                    {
                        dx = 1;
                    }
                    else if (grid[x - 1][y] == b)
                    {
                        dx = -1;
                    }
                    else if (grid[x][y - 1] == b)
                    {
                        dy = -1;
                    }
                    else if (grid[x][y + 1] == b)
                    {
                        dy = 1;
                    }

                    if (dx != 0 || dy != 0)
                    {
                        n = grid[x][y];
                        grid[x][y] = b;
                        grid[x + dx][y + dy] = n;

                        // Анимация движения
                        sprite[b].move(-dx * w, -dy * w);
                        float speed = 16;
                        for (int i = 0; i < w; i += speed) {
                            sprite[n].move(speed * dx, speed * dy);
                            window.draw(sprite[b]);
                            window.draw(sprite[n]);
                            window.display();
                        }
                        
                    }

                }
            }
        }

        // Устанавливаем цвет фона - белый
        window.clear(Color::White);
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++) {
                n = grid[i + 1][j + 1];
                sprite[n].setPosition(i * w, j * w);
                // Отрисовка спрайта
                window.draw(sprite[n]);
            }

        // Отрисовка окна
        window.display();
    }

    return 0;
}
