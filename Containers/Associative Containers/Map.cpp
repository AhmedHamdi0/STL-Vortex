#include <iostream>
#include <map>

using namespace std;

template <typename T, typename  U> void print_map(map<T, U> mp);

int main() {
    cout << "Welcome To Maps" << endl;

    map<string, int> mp;
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
    mp.insert(pair<string, int>("four", 4));
    mp.insert(pair<string, int>("five", 5));
    mp.insert(pair<string, int>("six", 6));
    mp.insert(pair<string, int>("seven", 7));
    mp["eight"] = 8;
    cout << "Size of map: " << mp.size() << endl;
    mp.erase("eight");


    print_map<string, int>(mp);
    if (mp.count("four") > 0) {
        cout << "Key 'four' is in the map" << endl;
    }
    else {
        cout << "Key 'four' is not in the map" << endl;
    }

    return 0;
}

template <typename T, typename U>
void print_map(map<T, U> mp) {
    typename map<T, U>::iterator it = mp.begin();
    cout << "Map Elements:" << endl;
    while (it != mp.end()) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
        it++;
    }
}