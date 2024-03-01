#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

template <typename T>
class Array {
private:
    T* ptr;
    int size;

public:
    Array(T arr[], int s);
    void print();
};

template class Array<int>;

#endif //ARRAY_H
