#include <iostream>
#include <set>
using namespace std;

template <typename T, typename U>
void print_multiset(multiset<T, greater<U>> mulset);

int main() {
    cout << "Welcome To Multiset"<< endl;

    multiset<int, greater<int>> mulset;
    mulset.insert(40);
    mulset.insert(30);
    mulset.insert(60);
    mulset.insert(20);
    mulset.insert(50);
    mulset.insert(40);
    mulset.insert(30);
    mulset.erase(50);
    mulset.erase(mulset.find(30));
    cout << "Number of 40 in the multiset: " << mulset.count(40) << endl;

    print_multiset<int, int>(mulset);
    return 0;
}

template <typename T, typename U>
void print_multiset(multiset<T, greater<U>> mulset) {
    typename multiset<T, greater<U>>::iterator itr;
    cout << "The multiset Elements:\t";
    for (itr = mulset.begin(); itr != mulset.end(); ++itr) {
        cout << *itr << "\t";
    }
    cout << endl;
}
