#include <iostream>
#include <vector>

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SwapVec(std::vector<int>& vec, int* arr)
{
    for (int i = 0; i < vec.size(); i++)
    {
        Swap(&vec[i], arr + i);
    }
}

void PrintVector(std::vector<int>& vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}

void PrintArray(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << "\n";
}


int main() {

    std::vector<int> vec = {1, 2, 3, 4, 5};
    int arr[] = {5, 6, 7, 8, 9};

    std::cout << "Before swap vector and array:\n";
    std::cout << "Vector:\t";
    PrintVector(vec);
    std::cout << "Array:\t";
    PrintArray(arr, 5);

    SwapVec(vec, arr);

    std::cout << "After swap vector and array:\n";
    std::cout << "Vector:\t";
    PrintVector(vec);
    std::cout << "Array:\t";
    PrintArray(arr, 5);

    return 0;
}
