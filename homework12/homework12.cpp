#include <iostream>
#include <algorithm>

void bubbleSort(int arr[], int size)
{
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
            }
        }
    }
}

constexpr unsigned int ROWS = 5;
constexpr unsigned int COLUMNS = 6;

enum class SortingDirection
{
    ByRows,
    ByColumns
};

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

void print2DArray(int arr[ROWS][COLUMNS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void sort(int arr[ROWS][COLUMNS], SortingDirection direction)
{
    if (direction == SortingDirection::ByRows) {
        for (int i = 0; i < ROWS; ++i) {
            std::sort(arr[i], arr[i] + COLUMNS);
        }
    } else if (direction == SortingDirection::ByColumns) {
        for (int j = 0; j < COLUMNS; ++j) {
            int column[ROWS];
            for (int i = 0; i < ROWS; ++i) {
                column[i] = arr[i][j];
            }
            std::sort(column, column + ROWS);
            for (int i = 0; i < ROWS; ++i) {
                arr[i][j] = column[i];
            }
        }
    }
}


int main()
{
    const int size = 5;
    int arr[size] = { 5, 1, 9, 7, 3 };
    
    int arr_1[ROWS][COLUMNS] = {
        {5, 1, 6, 4, 8, 15},
        {1, 9, 11, 7, 10, 5},
        {3, 4, 2, 1, 6, 9},
        {7, 12, 3, 5, 4, 1},
        {10, 5, 7, 11, 13, 2}
    };
    int arr_2[ROWS][COLUMNS] = {
        {5, 1, 6, 4, 8, 15},
        {1, 9, 11, 7, 10, 5},
        {3, 4, 2, 1, 6, 9},
        {7, 12, 3, 5, 4, 1},
        {10, 5, 7, 11, 13, 2}
    };
    
    std::cout << "Original array:" << std::endl;
    printArray(arr, size);
    bubbleSort(arr, size);
    std::cout << std::endl;

    std::cout << "Sorted array:" << std::endl;
    printArray(arr, size);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Original array:" << std::endl;
    print2DArray(arr_1);
    std::cout << std::endl;
    sort(arr_1, SortingDirection::ByRows);
    std::cout << "Sorted array by rows:" << std::endl;
    print2DArray(arr_1);
    std::cout << std::endl;
    sort(arr_2, SortingDirection::ByColumns);
    std::cout << "Sorted array by columns:" << std::endl;
    print2DArray(arr_2);
    
    return 0;
}