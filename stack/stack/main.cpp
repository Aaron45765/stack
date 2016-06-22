#include "stack.h"

int main() {
	stack<int> myStack(10);
	myStack.push(10);
	std::cout << "the stack is 1. empty, or 2. not empty: " << myStack.isStackEmpty() << std::endl;
	myStack.pop();
	std::cout << "the stack is 1. empty, or 2. not empty: " << myStack.isStackEmpty() << std::endl;
	return 0;
}