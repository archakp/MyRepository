#include<iostream>

using namespace std;

class node
{
public:
	node(int val)
	{
		data = val;
		next = nullptr;
	}
	int data;
	node* next; 
};

//	Insert at FRONT
void insertAtFront(node* &head, int val) //Node has to be a double pointer
{
	//1. Create a new node.
	node* newNode = new node(val);

	//2. Put it in front of the head.
	newNode->next = head;

	//3. Make new node the head
	head = newNode;
}

//	Insert at the END
void insertAtEnd(node* &head, int val)
{
	//1. Create a new node.
	node* newNode = new node(val);

	//2. If list is empty, make head as the first node.
	if (head == nullptr)
	{
		head = newNode; 
		return;
	}

	//3. If list has more than one elements, then traverse to the end.
	node* temp = head;  //make a copy of the head.
	while (temp->next != nullptr)
	{
		temp = temp->next;	//Move to the next node.
	}

	//4. Once last node is reached, place the new node after the last node.
	temp->next = newNode;
}	

// ** REWORK THIS **
void insertAfter(node* previous, int pos, int val)
{
	// 1. Check if previous node is NULL.
	if (previous == NULL)
	{
		cout << "previous cannot be null" << endl;
		return;
	}

	// 2. Create a new node.
	node* newNode = new node(val);

	node* temp = previous; // head   

	//	Traverse the nodes
	while (temp->next != nullptr)
	{
		temp = temp->next;	//Move to the next node.
		if (temp->data == pos)
			break;
	}

	// 3. Insert new node after previous.
	newNode->next = temp->next;
	temp->next = newNode;	//	new location to be moved <-- newly created node
}

//	Print the LINKED LIST
void printLL(node* head)
{
	node* temp = head;  //Make a copy of head to traverse.

	while (temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout <<"NULL"<< endl;
}
int main()
{
	node* head = NULL ;

	insertAtEnd(head, 1);
	insertAtEnd(head, 2);
	insertAtEnd(head, 3);

	insertAtFront(head, 0);
	insertAtFront(head, -1);
	insertAtFront(head, -2);
	insertAtFront(head, -3);

	insertAfter(head, -2, 0);

	printLL(head);
	
	return 0;
}