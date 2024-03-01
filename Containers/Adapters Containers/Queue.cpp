#include <iostream>
#include <queue>

using namespace std;

template <typename T> void print_queue(queue<T> queue);

int main()
{
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.pop();
    print_queue(qu);

    cout << "\nqu.size() : " << qu.size();
    cout << "\nqu.front() : " << qu.front();
    cout << "\nqu.back() : " << qu.back();

    return 0;
}

template <typename T>
void print_queue(queue<T> qu)
{
    cout << "Queue Elements:\t";
    queue<T> temp = qu;
    while (!temp.empty()) {
        cout << temp.front() << '\t';
        temp.pop();
    }
    cout << endl;
}
