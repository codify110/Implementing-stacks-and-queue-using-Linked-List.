#include <iostream>
using namespace std;
struct abc {
	int data;
	abc *next;
};
struct abc* top = NULL;
void push(int val) {
	abc *newnode = new abc;
	newnode->data = val;
	newnode->next = top;
	top = newnode;
}
void pop() {
	if (top == NULL)
		cout << "Stack Underflow" << endl;
	else {
		cout << "The popped element is " << top->data << endl;
		top = top->next;
	}
}
void display() {
	struct abc* ptr;
	if (top == NULL)
		cout << "stack is empty";
	else {
		ptr = top;
		cout << "Stack elements are: ";
		while (ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
	cout << endl;
}
void EMPTY()
{
	if (top = NULL)
	{
		cout << "Stack is empty:" << endl;
	}
	else
	{
		cout << "Stack is not empty:" << endl;
	}
}
void TOP()
{
	cout << "The top element is :" << endl;
	cout << top->data << endl; 
}
int main() {
	int ch, val;
	cout << "1) Push in stack" << endl;
	cout << "2) Pop from stack" << endl;
	cout << "3) Top" << endl;
	cout << "4) Empty or not" << endl;
	cout << "5) Display stack" << endl;
	cout << "6) Exit" << endl;
	do {
		cout << "Enter choice: " << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << "Enter value to be pushed:" << endl;
			cin >> val;
			push(val);
			break;
		}
		case 2: {
			pop();
			break;
		}
		case 3: {
			TOP();
			break;
		}
		case 4: {
			EMPTY();
			break;
		}
		case 5: {
			display();
			break;
		}
		default: {
			cout << "Invalid Choice" << endl;
		}
		}
	} while (ch != 4);
	system("pause");
}

