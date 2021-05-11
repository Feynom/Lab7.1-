#include <iostream>
#include <array>

using namespace std;

void Create(array<int, 100>& arr, int n);
void Print(array<int, 100>& arr, int n);
int IndexOfMinOddElement(array<int, 100>& arr, int n);

int main()
{
    srand((unsigned int)time(NULL));

    int n;
    cout << "Enter a size of array: "; cin >> n;

    array<int, 100> arr = { 0 };

    Create(arr, n);
    Print(arr, n);
    cout << "Index of min odd element in array: " << IndexOfMinOddElement(arr, n) << endl;

    return 0;
}

void Create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}
void Print(array<int, 100> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int IndexOfMinOddElement(array<int, 100>& arr, int n)
{
    double minOddElem;
    unsigned int minOddElemIndex = -1; //If there is no min odd element

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            minOddElem = arr[i];
            minOddElemIndex = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] < minOddElem)
        {
            minOddElem = arr[i];
            minOddElemIndex = i;
        }
    }

    return minOddElemIndex;
}