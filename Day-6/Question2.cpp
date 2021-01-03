#include <iostream>
#include <stack>
 
class Stack
{
    // main stack to store elements
    std::stack<int> s;
 
    // variable to store minimum element
    int min;
 
public:
 
    // Inserts a given element on top of the stack
    void push(int x)
    {
        if (s.empty()) {
            s.push(x);
            min = x;
        }
        else if (x > min) {
            s.push(x);
        }
        else {
            s.push(2 * x - min);
            min = x;
        }
    }
 
    // Removes top element from the stack and returns it
    void pop()
    {
        if (s.empty()) {
            std::cout << "Stack underflow!!" << '\n';
        }
 
        int top = s.top();
        if (top < min)
            min = 2 * min - top;
        s.pop();
    }
 
    // Returns the minimum element from the stack in constant time
    int minimum()
    {
        return min;
    }
};
 
int main()
{
    Stack s;
 
    s.push(6);
    std::cout << s.minimum() << '\n';
 
    s.push(7);
    std::cout << s.minimum() << '\n';
 
    s.push(5);
    std::cout << s.minimum() << '\n';
 
    s.push(3);
    std::cout << s.minimum() << '\n';
 
    s.pop();
    std::cout << s.minimum() << '\n';
 
    s.pop();
    std::cout << s.minimum() << '\n';
 
    return 0;
}
