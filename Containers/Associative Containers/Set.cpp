#include <iostream>
#include <set>
using namespace std;

template <typename T, typename U> void print_set(set<T, U> ls);

int main() {
    cout << "Welcome To Set!!"<< endl;

    set<char> char_set;
    char_set.insert('A');
    char_set.insert('B');
    char_set.insert('A');
    print_set<char>(char_set);

    set<int, greater<int>> int_set;
    int_set.insert(10);
    int_set.insert(5);
    int_set.insert(12);
    int_set.insert(4);
    int_set.insert(50);
    print_set<int, greater<int>>(int_set);

    set<int> s2(int_set.begin(), int_set.end());
    print_set<int>(s2);
    s2.erase(s2.begin(), s2.find(10));
    s2.erase(12);
    print_set<int>(s2);

    return 0;
}

template <typename T, typename U>
void print_set(set<T, U> ls) {
    cout << "Set Elements:\t";
    for (T element : ls)
        cout << element << "\t";
    cout << endl;
}