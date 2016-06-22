#pragma once
#ifndef stack_h_
#define stack_h_
#define u_int unsigned int

#include <iostream>
template <class tStack>
class stack {
public:
	stack(u_int);									//will init stack with capacity of u_int
	stack(stack &cStack);							//copy constructor
	u_int getCurrentSize() { return top; };
	u_int getCapacity() { return capacity; };
	void push(tStack);
	void pop();
	bool isStackEmpty();
private:
	u_int capacity;
	u_int top;										//counter for how many objects are currently on the stack
	tStack *stackPointer;
};


template<class tStack>
stack<tStack>::stack(u_int capacity) {
	this->capacity = capacity;
	stackPointer = new tStack[capacity];
	top = 0;
}

template<class tStack>
stack<tStack>::stack(stack &cStack) {
	stack *tempStack = &cStack;
	capacity = *tempStack.getCapacity();
	top = *temStack.getCurrentSize();
	stackPointer = new tStack[*tempStack.getCurrentSize()];
	delete tempStack;
}

template<class tStack>
void stack<tStack>::push(tStack pushedObject) {
	if (top == capacity) {
		std::cout << "err: stack over\n";
	}
	else {
		stackPointer[top] = pushedObject;
		top++;
	}
}

template<class tStack>
void stack<tStack>::pop() {
	if (top == 0) {
		std::cout << "err: stack has no objects!\n";
	}
	else {
		top--;
	}
}

template<class tStack>
bool stack<tStack>::isStackEmpty() {
	if (top == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

#endif
