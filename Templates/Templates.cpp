#include <iostream>
#include "Array.h"

template <typename T> void bubbleSort(T arr[], int n);
template <typename T> T myMax(T x, T y);
template <class T, int max> int arrMin(T arr[], int n);

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    cout << myMax<int>(4, 3) << endl;
    cout << myMax<double>(3.0, 7.0) << endl;
    cout << myMax<char>('a', 'v') << endl;

    int a[5] = { 10, 50, 30, 40, 20 };
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort<int>(a, n);
    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> array(arr, 5);
    array.print();

    int arr1[] = { 10, 20, 15, 12 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = { 1, 2, 3 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << arrMin<int, 10000>(arr1, n1) << endl;
    cout << arrMin<char, 256>(arr2, n2);

    return 0;
}


template <typename T>
T myMax(T x, T y) {
    return (x > y)? x:y;
}

template <class T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
}

template <class T, int max>
int arrMin(T arr[], int n) {
    int maximum = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < maximum)
            maximum = arr[i];
    return maximum;
}
