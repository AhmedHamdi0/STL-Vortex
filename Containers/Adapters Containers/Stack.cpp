#include <iostream>
#include <stack>

using namespace std;

template <typename T> void print_stack(stack<T> stack);

int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    stack.pop();
    stack.pop();

    print_stack<int>(stack);

}

template <typename T>
void print_stack(stack<T> stack) {
    while (!stack.empty()) {
        cout << stack.top() <<"\t";
        stack.pop();
    }
}