# Queues

- Queues are linear Data Structures that operate in First-In-First-Out(FIFO) or Last-In-Last-Out(LILO) 
- ADT that has a pre-defined capacity 

### Standard Operations 
1 - enqueue() = Elements are added from Rear/Back 

2 - dequeue() = Elements are removed from Head/Front 

3 - isFull() = checks if queue is full or not (returns bool) 

4 - count() = counts number of items in Queue (returns int) 


### Notes
- The Queue starts off with an array(in this case, can also be implemented with linked lists) initialized with a specific size, as well as two variables, `rear` and `front`, which are both initialized to -1 (indicating an empty array)
- when an item is pushed onto the Queue, a value of 1 is added to both `rear` and `front`. 
- when sequential items are added, the value for `rear` will increase by 1 each time, while the value of `front` will remain at 0, indicating the bgeinning of the array/Queue.

### Pseudocode

Checking if Queue is empty 
```

isEmpty()
{
	if(front == -1 && rear == -1)
		return true
	else
		return false
}

```

Checking if Queue is full 
```
isFull()
{
	if(rear == size(arr)-1)
		return true
	else
		return false
}
```

Adding element to Queue
```
enqueue()
{
	if(isFull())
		return;
	else if(isEmpty())
	{
		rear = front = 0
	}
	else {
		rear++
	}
	arr[rear] = value
}
```
while the first two functions were fairly straightforward, the enqueue function has three conditionals: 

1- checks to see if the Queue is full, because you cant add an element to an already full Queue 

2- checks to see if the Queue is empty, and if so, during the first pass it will increase both `rear` and `front ` by 1, making them both 0 

3- if the Queue is not empty, then it increases the rear variable by 1 

After one of these conditionals is met, the value passed in to the function will be added in to the index of `rear`'s value

```
dequeue()
{
	intx = 0;
	if(isEmpty())
	{
		return;
	}
	else if(front == rear)
	{
		x = arr[front]
		front = rear = -1
	}
	else 
	{
		x = arr[front]
		front++
	}
	return x;
}
```
Removing element from Queue

In the dequeue function we also have three conditionals: 

1- checks to see if Queue is empty. If true, there is nothing to remove and we exit program. 

2- checks if the values for rear and front are equal. If true, this indicates that there is only 1 item in the Queue. We then assign x to the value at the index of `front` and then make front and rear equal to -1. This indicates we removed the only element in the Queue and the Queue is now empty. 

3- if the first two conditionals were false, then we assign x  to the value at the index of `front` and increase `front` by 1.
