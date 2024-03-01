#include <iostream>
#include <deque>

using namespace std;
void printDeque(deque<int> dq);

int main() {
    cout << "Welcome To Deque!!" << endl;

    deque<int> dq;
    dq.push_front(10);
    dq.push_back(20);
    printDeque(dq);

    cout << "\ndq.size() : " << dq.size();
    cout << "\ndq.max_size() : " << dq.max_size();
    cout << "\ndq.at(1) : " << dq.at(1);
    cout << "\ndq.front() : " << dq.front();
    cout << "\ndq.back() : " << dq.back();

    dq.pop_front();
    dq.pop_back();
    printDeque(dq);

    return 0;
}

void printDeque(deque<int> dq)
{
    deque<int>::iterator it;
    cout << "\nDeque Elements:\t";
    for (it = dq.begin(); it != dq.end(); ++it)
        cout << *it << "\t";
}