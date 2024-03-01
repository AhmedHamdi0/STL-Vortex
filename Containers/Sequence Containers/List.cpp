#include <iostream>
#include <list>
using namespace std;

void print_list(list<int> ls);

int main() {
    cout << "Welcome To Lists!!" << endl;

    list<int> ls {1, 2, 3, 4, 5};
    ls.push_front(10);
    ls.push_back(20);
    cout << "\nlist.front() : " << ls.front();
    cout << "\nlist.back() : " << ls.back();
    ls.pop_front();
    ls.pop_back();
    ls.reverse();
    ls.sort();
    print_list(ls);

    return 0;
}

void print_list(list<int> ls) {
    cout << "\nList Elements:\t";
    for (int element : ls)
        cout << element << "\t";
    cout << endl;
}