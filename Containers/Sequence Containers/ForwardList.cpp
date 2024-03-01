#include <iostream>
#include <forward_list>

using namespace std;
void print_forward_list(forward_list<int> f_list);

int main() {
    cout << "Welcome To Forward List!!" << endl;

    forward_list<int> f_list {15, 25, 30};
    forward_list<int>::iterator ptr;

    f_list.assign(5, 10);
    f_list.assign({1, 2, 3, 4, 5});
    f_list.push_front(60);
    f_list.emplace_front(20);
    f_list.pop_front();
    ptr = f_list.insert_after(f_list.begin(), {100, 200, 300});
    f_list.emplace_after(ptr, 500);
    f_list.erase_after(ptr, f_list.end());
    f_list.remove(200);
    f_list.remove_if([](int x) { return x > 200; });

    forward_list<int> f_list2 {1000, 2000, 3000};
    f_list.splice_after(f_list.begin(), f_list2);
    f_list.clear();
    print_forward_list(f_list);
    return 0;
}

void print_forward_list(forward_list<int> f_list)
{
    cout << "\nForward List Elements:\t";
    for (int element : f_list)
        cout << element << "\t";
    cout << endl;
}