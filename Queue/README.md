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
