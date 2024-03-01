#include <iostream>
#include <algorithm>
#include "Comparator.h"

using namespace std;

struct Interval {
    int start, end;
};

bool compareInterval(Interval i1, Interval i2);
template <typename T> bool funComparator(T x1, T x2);
template <typename T> void print_array(T a[], int array_size);

int main()
{
    cout << "Welcome To Algorithms"<< endl;

    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int arr_size = sizeof(a) / sizeof(int);

    cout << "The array before sorting is:\t";
    print_array<int>(a, arr_size);

    cout << endl << "The array after sorting is(asc):\t";
    sort(a, a + arr_size);
    print_array<int>(a, arr_size);

    cout << endl << "The array after sorting is(desc):\t";
    sort(a, a + arr_size, greater<int>());
    print_array<int>(a, arr_size);

    cout << endl << "The array after sorting is(asc but using comparator class):\t";
    sort(a, a + arr_size, Comparator<int>());
    print_array<int>(a, arr_size);

    cout << endl << "The array after sorting is(asc but using comparator function):\t";
    sort(a, a + arr_size, funComparator<int>);
    print_array<int>(a, arr_size);

    Interval interval_arr[] = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
    int interval_arr_size = sizeof(interval_arr) / sizeof(interval_arr[0]);
    sort(interval_arr, interval_arr + interval_arr_size, compareInterval);
    cout << "Intervals sorted by start time: ";
    for (int i = 0; i < interval_arr_size; i++)
        cout << "[" << interval_arr[i].start << "," << interval_arr[i].end << "] ";

    return 0;
}

bool compareInterval(Interval i1, Interval i2){
    return i1.start < i2.start;
}

template <typename T>
bool funComparator(T x1, T x2) {
    return x1 <= x2;
}

template <typename T>
void print_array(T arr[], int array_size) {
    for (int i = 0; i < array_size; i++)
        cout << arr[i] << "\t";
}