//maximum element in the stack
#include <iostream>
#include <stack>

int main () {
    size_t numQuerries;
    std::cin >> numQuerries;
    std::stack<int> maxStack;
    std::stack<size_t> occurenceStack;

    int inputType;
    for (size_t querry = 0; querry < numQuerries; ++querry) {
        int input;
        std::cin >> inputType;
        switch(inputType) {
        case 1:
            std::cin >> input;
            if (maxStack.empty()) {
                maxStack.push(input);
                occurenceStack.push(1);
            } else {
                if (input > maxStack.top()) {
                    maxStack.push(input);
                    occurenceStack.push(1);
                } else {
                    occurenceStack.top()++;
                }
            }
            break;
        case 2:
            if (!maxStack.empty()) {
                if (occurenceStack.top() > 1) {
                    occurenceStack.top()--;
                } else {
                    maxStack.pop();
                    occurenceStack.pop();
                }
            }
            break;
        case 3:
            std::cout << maxStack.top() << "\n";
            break;
        default:
            break;
        }
    }
}
