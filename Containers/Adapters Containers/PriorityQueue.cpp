#include <iostream>
#include <queue>

using namespace std;

#define NUM_OF_ELEMENTS 6

template <typename T> void print_array(T arr[], int arr_size);
template <typename T> void print_max_priority_queue(priority_queue<T> pq);
template <typename T> void print_min_priority_queue(priority_queue<T, vector<T>, greater<T>> pq);

int main()
{
    int arr[] = { 10, 2, 4, 8, 6, 9 };

    priority_queue<int> max_pq ;
    priority_queue<int, vector<int>, greater<int>> min_pq;

    for (int element : arr) {
        max_pq.push(element);
        min_pq.push(element);
    }

    max_pq.pop();
    cout << "max_pq.size() : " << max_pq.size() << endl;
    cout << "max_pq.top() : " << max_pq.top() << endl;
    max_pq.emplace(6);

    print_array(arr, NUM_OF_ELEMENTS);
    print_max_priority_queue(max_pq);
    print_min_priority_queue(min_pq);

    priority_queue<int>::value_type AnInt;
    priority_queue<char>::value_type AChar;

    priority_queue<int> int_pq;
    priority_queue<char> char_pq;

    AnInt = 20;
    int_pq.push(AnInt);
    AnInt = 30;
    int_pq.push(AnInt);
    cout << "Top element of the integer priority_queue is: " << int_pq.top() << endl;

    AChar = 'B';
    char_pq.push(AChar);
    AChar = 'A';
    char_pq.push(AChar);
    AChar = 'C';
    char_pq.push(AChar);
    cout << "Top element of the char priority_queue is: " << char_pq.top() << endl;

    return 0;
}

template <typename T>
void print_max_priority_queue(priority_queue<T> pq)
{
    cout << "Max Priority Queue Elements:\t";
    while (!pq.empty()) {
        cout << pq.top() << '\t';
        pq.pop();
    }
    cout << endl;
}

template <typename T>
void print_min_priority_queue(priority_queue<T, vector<T>, greater<T>> pq) {
    cout << "Min Priority Queue Elements:\t";
    while (!pq.empty()) {
        cout << pq.top() << '\t';
        pq.pop();
    }
    cout << endl;
}

template <typename T>
void print_array(T arr[], int arr_size) {
    cout << "\nArray Elements:\t";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << '\t';
    }
    cout << endl;
}
