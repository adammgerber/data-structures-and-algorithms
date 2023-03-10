#include <iostream>
#include <string>

using namespace std;

class Stack{
private:
	int top;
	int arr[5];
public:
	Stack()
	{
		top = -1;
		for(int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}

	}

	bool isEmpty()
	{
		if(top == -1)
			return true;
		else
			return false;
	}

	bool isFull() 
	{
		if(top == 4)
			return true;
		else
			return false;
	}

	void push(int val) 
	{
		if(isFull())
			cout << "Stack overflow" << endl;
		else
			top++;
			arr[top] = val;
	}

	int pop()
	{
		if(isEmpty())
		{
			cout << "Stack underflow" << endl;
			return 0;
		}
		else
		{
			int popValue = arr[top];
			arr[top] = 0;
			top--;
			return popValue;
		}
	}

	int count()
	{
		return(top + 1);
	}

	int peek(int position)
	{
		if(isEmpty())
		{
			cout << "Stack underflow" << endl;
			return 0;
		}
		else 
		{
			return arr[position];
		}
	}

	void change(int position, int value)
	{
		arr[position] = value;
		cout << "Value changed at location" << position << endl;
	}

	void display()
	{
		cout << "All values in the Stack are: " << endl;
		for(int i = 4; i >=0; i--)
			cout << arr[i] << endl;
	}
};


//Implementation of Stack in a menu
int main()
{
	Stack s1;
	int option, position, value;

	do {
		cout << endl;
		cout << "What operation do you want to perform? Select the number. Enter 0 to exit." << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. peek()" << endl;
		cout << "6. count()" << endl;
		cout << "7. change()" << endl;
		cout << "8. display()" << endl;
		cout << "9. Clear Screen" << endl << endl;

		cin >> option;
		switch(option)
		{
			case 1:
			cout << "Enter an item to push onto the Stack" << endl;
			cin >> value;
			s1.push(value);
			break;

			case 2:
			cout << "Pop function called - Popped value: " << s1.pop() << endl;
			break;

			case 3:
			if(s1.isEmpty())
				cout << "Stack is empty." <<  endl;
			else
				cout << "Stack is not empty." << endl;
			break;

			case 4:
			if(s1.isFull())
				cout << "Stack is full" << endl;
			else
				cout << "Stack is not full" << endl;
			break;

			case 5: 
			cout << "Enter position of item you wan to peek" << endl;
			cin >> position;
			cout << "Peek function called - " << s1.peek(position) << endl;
			break;

			case 6:
			cout << "Count function called - Number of items in the Stack: " << s1.count() << endl;
			break;

			case 7:
			cout << "Change function called - " << endl;
			cout << "Enter position of item you want to change: ";
			cin >> position;
			cout << "Enter value of item you want to change: ";
			cin >> value;
			s1.change(position, value);
			break;

			case 8:
			cout << "Display function called" << endl;
			s1.display();
			break;

			case 9:
			system("clear");
			break;

			default:
			cout << "Enter a proper option number." << endl;

		}


	}while(option!=0);

	cout << endl << endl;
}