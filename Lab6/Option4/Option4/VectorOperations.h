#pragma once
#include <vector>

class VectorOperations {
public:
    // ����������� �����
    VectorOperations();

    // ����� ��� ��������� ����� VECTOR
    void PrintVector();

    // ����� ��� ���������� VECTOR
    void SortVector();

    // ����� ��� ��������� ������ VECTOR �� ������� �����
    void PrintSizeOnEachStep();

    // ����� ��� ��������� �������� �� ������ ������� � VECTOR
    void InsertElement(int value, size_t position);

    // ����� ��� ��������� �������� � ������ ������� � VECTOR
    void EraseElement(size_t position);

private:
    std::vector<int> vector_;
};
