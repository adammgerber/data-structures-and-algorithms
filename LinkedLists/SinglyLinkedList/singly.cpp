#include <iostream>

using namespace std;

class Node
{

public:
	int key;
	int data;
	Node* next;

	Node()
	{
		key = 0;
		data = 0;
		next = NULL;
	}

	Node(int k, int d)
	{
		key = k;
		data = d;
	}
};

class SinglyLinkedList
{
public:
	Node* head;
	SinglyLinkedList()
	{
		head = NULL;
	}
	SinglyLinkedList(Node* n)
	{
		head = n;
	}

	// 1. check if node exists
	Node* nodeExists(int k) 
	{
		Node* temp = NULL;
		Node* ptr = head;
		while(ptr!=NULL)
		{
			if(ptr->key == k)
			{
				temp = ptr;
			}
			ptr = ptr->next;
		}
		return temp;
	}

	// 2. Append node to end
	void appendNode(Node *n)
	{
		if(nodeExists(n->key)!=NULL)
		{
			cout << "Node already exists with key value : " << n->key << ". Append another node with a different key value." << endl;
		}
		else 
		{
			if(head == NULL) 
			{
				head = n;
				cout << "Node appended." << endl;
			}
			else 
			{
				Node* ptr = head;
				while(ptr->next != NULL)
				{
					ptr = ptr->next;
				}
				ptr->next = n;
				cout << "Node appended" << endl;
			}
		}
	}

	// 3. Prepend node to front
	void prependNode(Node* n)
	{
		if(nodeExists(n->key)!=NULL)
		{
			cout << "Node already exists with key value: " << n->key << ". Append another node with a different key value." << endl;
		}
		else 
		{
			n->next = head;
			head = n;
			cout << "Node prepended" << endl;
		}
	}

	// 4. Insert node after particular node in list
	void insertNodeAfter(int k, Node *n)
	{
		Node* ptr = nodeExists(k);
		if(ptr == NULL)
		{
			cout << "No node exists with key value: " << k << endl;
		}
		else
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout << "Node already exists with key value: " << n->key << ". Append another node with a different key value." << endl;
			}
			else 
			{
				n->next = ptr->next;
				ptr->next = n;
				cout << "Node inserted" << endl;
			}
		}
	}

	// 5. Delete node by unique key
	void deleteNodeByKey(int k) 
	{
		if(head == NULL)
		{
			cout << "Singly linked list already empty." << endl;
		}
		else if(head != NULL)
		{
			if(head->key == k)
			{
				head = head -> next;
				cout << "Node unlinked with key values: " << k << endl;
			}
			else 
			{
				Node* temp = NULL;
				Node* prevptr = head;
				Node* currentptr = head->next;
				while(currentptr!=NULL)
				{
					if(currentptr -> key == k)
					{
						temp = currentptr;
						currentptr = NULL;
					}
					else
					{
						prevptr = prevptr->next;
						currentptr = currentptr->next;
					}
				}
				if(temp!=NULL)
				{
					prevptr->next = temp->next;
					cout << "Node unlinked with key value: " << k << endl;
				}
				else 
				{
					cout << "Node doesn't exist with key value: " << k << endl;
				}
			}
		}
	}

	// 6. Update node
	void updateNodeByKey(int k, int d)
	{
		Node* ptr = nodeExists(k);
		if(ptr!=NULL)
		{
			ptr->data = d;
			cout << "Node data updated successfully" << endl;
		}
		else 
		{
			cout << "Node doesn't exist with key value: " << k << endl;
		}
	}

	// 7. Printing of list
	void printList()
	{
		if(head == NULL)
		{
			cout << "List is empty" << endl;
		}
		else 
		{
			cout << endl << "Singly Linked List values: ";
			Node* temp = head;
			while(temp != NULL)
			{
				cout << "(" << temp->key << "," << temp->data << ") --> ";
				temp = temp->next;
			}
		}
	}
};

int main()
{
	SinglyLinkedList s;
	int option;
	int key1, k1, data1;
	do
	{
		cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
		cout << "1. appendNode()" << endl;
		cout << "2. prependNode()" << endl;
		cout << "3. insertNodeAfter()" << endl;
		cout << "4. deleteNodeByKey()" << endl;
		cout << "5. updateNodeByKey()" << endl;
		cout << "6. print()" << endl;
		cout << "7. Clear Screen" << endl;

		cin >> option;
		Node* n1 = new Node();

		switch(option)
		{
			case 0:
				break;
			case 1:
				cout << "Append Node Operations \nEnter key and data of the Node to be appended" << endl;
				cin >> key1;
				cin >>data1;
				n1->key = key1;
				n1->data = data1;
				s.appendNode(n1);
				break;
			case 2:
				cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
				cin >> key1;
				cin >> data1;
				n1->key = key1;
				n1->data = data1;
				s.prependNode(n1);
				break;
			case 3:
				cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this new node: "<<endl;
				cin >> k1;
				cout << "Enter key & data of the new node first: " << endl;
				cin >> key1;
				cin >> data1;
				n1->key = key1;
				n1->data = data1;

				s.insertNodeAfter(k1,n1);
				break;
			case 4:
				cout << "Delete Node By Key Operation - \nEnter key of New to be deleted: " << endl;
				cin >> k1;
				s.deleteNodeByKey(k1);

				break;
			case 5:
				cout << "Update Node By Key Operation - \nEnter key & new data to be updated" << endl;
				cin >> key1;
				cin >> data1;
				s.updateNodeByKey(key1, data1);

				break;
			case 6:
				s.printList();
				break;
			case 7:
				system("clear");
				break;
			default:
				cout << "Enter Proper Option Number" << endl;
		}
	}while(option!=0);
	return 0;
}





















