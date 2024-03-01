#include <iostream>
#include <map>

using namespace std;

template <typename T, typename  U> void print_multimap(multimap<T, U> mp);

int main() {
    cout << "Welcome To Multimap" << endl;

    multimap<int, int> mulmap;
    mulmap.insert(pair<int, int>(1, 40));
    mulmap.insert(pair<int, int>(2, 30));
    mulmap.insert(pair<int, int>(3, 60));
    mulmap.insert(pair<int, int>(6, 50));
    mulmap.insert(pair<int, int>(6, 10));
    mulmap.erase(3);

    print_multimap<int, int>(mulmap);
}

template <typename T, typename U>
void print_multimap(multimap<T, U> mp) {
    typename multimap<T, U>::iterator it = mp.begin();
    cout << "Multimap Elements:" << endl;
    while (it != mp.end()) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
        it++;
    }
}