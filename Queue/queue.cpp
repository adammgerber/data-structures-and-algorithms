#include <iostream>

using namespace std;

class Queue{
private:
	int front;
	int rear;
	int arr[5];
public:
	Queue()
	{
		rear = -1;
		front = -1;
		for(int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}

	}

	bool isEmpty()
	{
		if(rear == -1 && front == -1) 
			return true
		else
			return false
	}

	bool isFull()
	{
		if(rear == 4)
			return true
		else
			return false
	}

	void enqueue(int val)
	{
		if(isFull())
		{
			cout << "Queue is Full" << endl;
			return;
		} else if(isEmpty())
		{
			rear = 0;
			front = 0;
			arr[rear] = val;
		} else {
			rear++
			arr[rear] = val;
		}

	}

	int dequeue()
	{
		int x;
		if(isEmpty())
		{
			cout << "Queue is Empty" << endl;
			return 0;
		}
		else if(front == rear)
		{
			x = arr[front];
			arr[front] = 0;
			rear = -1;
			front = -1;
			return x;
		}
		else
		{
			x == arr[front];
			arr[front] = 0;
			front++;
			return x;
		}
	}

	int count()
	{
		return(rear - front + 1);
	}
}

int main()
{
	Queue q1;
	int option, value;

	do 
	{
		cout << "\n\n What operation do you want to perform? Select option number. Enter 0 to exit;" << endl;
		cout << "1. Enqueue()" << endl;
		cout << "2. Dequeue()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. count()" << endl;
		cout << "6. display()" << endl;
		cout << "7. Clear Screen" << endl;

		cin >> option;

		switch(option)
		{
			case 1:
			cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
		}

	}while(option!=0);
	return 0;
}