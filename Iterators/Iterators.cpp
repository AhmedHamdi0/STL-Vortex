#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Welcome To Iterators!!" << endl;
    vector<int> v1 = { 1, 2, 3, 4, 5 };

    vector<int>::iterator i1;

    for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
        cout << (*i1) << " ";
    }
    return 0;
}

template <typename InputIterator, typename T>
InputIterator find(InputIterator first, InputIterator last, const T& val){
    while (first!=last) {
        if (*first==val)
            return first;
        ++first;
    }
    return last;
}

template <typename InputIterator, typename OutputIterator>
OutputIterator copy(InputIterator first, InputIterator last, OutputIterator result){
    while (first != last)
        *result++ = *first++;
    return result;
}

template <typename InputIterator, typename OutputIterator>
OutputIterator my_move(InputIterator first, InputIterator last, OutputIterator result) {
    while (first!=last) {
        *result = move(*first);
        ++result;
        ++first;
    }
    return result;
}

template <typename ForwardIterator, typename T>
void replace(ForwardIterator first, ForwardIterator last, const T& old_value, const T& new_value)
{
    while (first != last) {
        if (*first == old_value)
            *first = new_value;
        ++first;
    }
}

template <typename BidirectionalIterator, typename OutputIterator>
OutputIterator reverse_copy(BidirectionalIterator first, BidirectionalIterator last, OutputIterator result) {
    while (first != last)
        *result++ = *--last;
    return result;
}
