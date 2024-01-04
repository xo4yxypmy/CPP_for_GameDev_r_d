#include <iostream>

bool binarySearch(int arr[], int size, int x)
{
    int l = 0;                                  //time complexity
    int r = size - 1;                           //main operatin binarySearch
                                                // O(logCOLUMNS) + O(logROWS)
    while (l <= r) {
        const int m = l + (r - l) / 2;          //space complexity
                                                //array arr has rows and columns
        if (arr[m] == x)                        // O(ROWS * COLUMNS)
            return true;                        //local variables 'l', 'r', 'm', 'toFind', 'i' use constant amount of memory
                                                //they can be ignored
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return false;
}

int main()
{
    const int ROWS = 20;
    const int COLUMNS = 30;
    int arr[ROWS][COLUMNS] = {};
    const int toFind = 0;

    for (int i = 0; i < ROWS; i++)
    {
        if (binarySearch(arr[i], COLUMNS, toFind))
        {
            std::cout << "FOUND";
            break;
        }
    }
}