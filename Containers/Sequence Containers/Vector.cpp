#include <iostream>
#include <vector>

using namespace std;

#define NUM_OF_ELEMENTS 5

int main() {
    cout << "Welcome To Vectors!!" << endl;

    vector<int> vec;
    for (int i = 0; i < NUM_OF_ELEMENTS; i++)
        vec.push_back(i);

    cout << "Output of begin and end using [Pointers]:\t";
    for (auto i = vec.begin(); i != vec.end(); ++i)
        cout << *i << "\t";

    cout << "\nOutput of begin and end using [range-based loop]:\t";
    for (int element : vec)
        cout << element << "\t";

    cout << "\nOutput of cbegin and cend:\t";
    for (auto i = vec.cbegin(); i != vec.cend(); ++i)
        cout << *i << "\t";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = vec.rbegin(); ir != vec.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = vec.crbegin(); ir != vec.crend(); ++ir)
        cout << *ir << " ";

    cout << "\nSize : " << vec.size();
    cout << "\nCapacity : " << vec.capacity();
    cout << "\nMax_Size : " << vec.max_size();
    vec.resize(4);
    cout << "\nSize : " << vec.size();
    vec.empty() ? cout << "\nVector is not empty" : cout << "\nVector is empty";

    vec.shrink_to_fit();
    cout << "\nVector elements are:\t";
    for (auto it = vec.begin(); it != vec.end(); it++)
        cout << *it << "\t";

    cout << "\nReference operator [g] : vec[2] = " << vec[2];
    cout << "\nat : vec.at(3) = " << vec.at(3);
    cout << "\nfront() : vec.front() = " << vec.front();
    cout << "\nback() : vec.back() = " << vec.back();
    int* pos = vec.data();
    cout << "\nThe first element is " << *pos;

    vector<int> v;
    v.assign(5, 10);
    v.push_back(15);
    v.pop_back();
    v.insert(v.begin(), 5);
    v.erase(v.begin());
    v.emplace(v.begin(), 5);
    v.emplace_back(20);
    v.clear();

    cout << "\nThe vector elements are:\t";
    for(int element: v) {
        cout << element << "\t";
    }

    return 0;
}
