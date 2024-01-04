#include <iostream>
#include <iomanip>

constexpr unsigned int ROWS = 4;
constexpr unsigned int COLUMNS = 6;

//task 1
bool find(int arr_2d[ROWS][COLUMNS], int toFind)
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (arr_2d[i][j] == toFind) return true;
        }
    }
    return false;
}

//task 2
enum class SortingDirection
{
    Ascending,
    Descending
};

bool isSorted(const int* arr, int size, SortingDirection direction)
{
    if (size <= 1) return true;
    
    if (direction == SortingDirection::Ascending) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) return false;
        }
    }
    else if (direction == SortingDirection::Descending) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] < arr[i + 1]) return false;
        }
    }

    return true;
}

//task 3
void traverseTopDownRightLeftByColumns(int arr_2d[ROWS][COLUMNS])
{
    for (int i = COLUMNS - 1; i >= 0; i--) {
        for (int j = 0; j < ROWS; j++) {
            std::cout << arr_2d[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

void traverseLeftRightDownTopSwitchingByRows(int arr_2d[ROWS][COLUMNS])
{
    for (int i = ROWS - 1; i >= 0; i--) {
        if (i % 2 == ROWS % 2) {
            for (int j = COLUMNS - 1; j >= 0; j--) {
                std::cout << arr_2d[i][j] << " ";
            }
        }
        else {
            for (int j = 0; j < COLUMNS; j++) {
                std::cout << arr_2d[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    int arr_2d[ROWS][COLUMNS] = {
      {11, 12, 13, 14, 15, 16 },
      {21, 22, 23, 24, 25, 26 },
      {31, 32, 33, 34, 35, 36 },
      {41, 42, 43, 44, 45, 46 }
    };

    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 5, 4, 3, 2, 1 };
    int arr3[] = { 1, 2, 5, 4, 3 };

    std::cout << std::boolalpha << find(arr_2d, 24) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Ascending (arr1): " << std::boolalpha << isSorted(arr1, 5, SortingDirection::Ascending) << std::endl;
    std::cout << "Descending (arr1): " << std::boolalpha << isSorted(arr1, 5, SortingDirection::Descending) << std::endl;

    std::cout << "Ascending (arr2): " << std::boolalpha << isSorted(arr2, 5, SortingDirection::Ascending) << std::endl;
    std::cout << "Descending (arr2): " << std::boolalpha << isSorted(arr2, 5, SortingDirection::Descending) << std::endl;

    std::cout << "Ascending (arr3): " << std::boolalpha << isSorted(arr3, 5, SortingDirection::Ascending) << std::endl;
    std::cout << "Descending (arr3): " << std::boolalpha << isSorted(arr3, 5, SortingDirection::Descending) << std::endl;
    std::cout << std::endl;

    traverseTopDownRightLeftByColumns(arr_2d);
    std::cout << std::endl;
    traverseLeftRightDownTopSwitchingByRows(arr_2d);
    std::cout << std::endl;

    return 0;
}