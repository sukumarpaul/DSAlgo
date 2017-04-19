/*
Problem Statement : Implement Stack data structure using array.

Time Complexities of operations on stack: O(1)
*/

#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int element) {
	if (top == MAX - 1) {
		printf("\nStack Overflow!!");
		return;
	}
	else
		stack[++top] = element;
	printf("\n%d pushed to stack", element);
}

int isEmpty() {
	if (top == -1)
		return 1;
	else
		return 0;
}

int pop() {
	int tempData;
	if (isEmpty()) {
		printf("\nStack underflow!!\n");
		return -9999999;
	}
	else {
		tempData = stack[top--];
		printf("\n%d popped from stack", tempData);
		return tempData;
	}
}

void main() {
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
}