#include <iostream>
#include <array>
using namespace std;

#define NUM_OF_ELEMENTS 6

int main() {
    cout << "Welcome To Arrays!" << endl;

    array<int, NUM_OF_ELEMENTS> arr {1, 2, 3, 4, 5, 6};
    array<int, NUM_OF_ELEMENTS> swapArr {7, 8, 9, 10, 11, 12};

    cout << "[1] The array elements are (using at()) :\t";
    for (int i = 0; i < NUM_OF_ELEMENTS; i++)
        cout << arr.at(i) << "\t";
    cout << endl;

    cout << "[2] The array elements are (using get()) :\t";
    cout << get<0>(arr) << "\t" << get<1>(arr) << endl;

    cout << "[3] The array elements are (using operator[]) :\t";
    for ( int i=0; i<NUM_OF_ELEMENTS; i++)
        cout << arr[i] << "\t";
    cout << endl;

    cout << "[4] First element of array is :\t" << arr.front() << endl;
    cout << "[5] Last element of array is :\t" << arr.back() << endl;

    cout << "[6] The number of array elements is :\t" << arr.size() << endl;
    cout << "[7] Maximum elements array can hold is :\t" << arr.max_size() << endl;

    arr.swap(swapArr);
    cout << "[8] The first array elements after swapping are :\t";
    for(int element : arr)
         cout << element << "\t";
    cout << endl;

    array<int, 0> empArray {};
    empArray.empty()? cout << "[9] Array is empty": cout << "[9] Array is not empty";
    cout << endl;

    array<int, NUM_OF_ELEMENTS> zeroArray {};
    zeroArray.fill(0);
    cout << "[10] Array after filling operation is :\t";
    for ( int i=0; i<6; i++)
        cout << zeroArray[i] << "\t";
    cout << endl;
    return 0;
}
