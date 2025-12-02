#include<iostream>
#include<queue>

using namespace std;

//	*	Queue container follows the "FIFO" (First In First Out) order of insertion and deletion. 
//	*	elements that are inserted first should be removed first.
//	*	only the front and back element can be accessed in a queue

int main()
{
	queue<int> q;

	q.push(3);
	q.push(4);
	q.push(5);

	cout << q.front() << endl;
	cout << q.back() << endl;

	// Create a copy
	queue<int> temp(q);

	//	Since only front and back elements can be accessed.
	//	Create a copy of the queue and go on accessing 'front' element 
	//	and delete it to traverse thru all elements.
	while (!temp.empty())
	{
		cout << temp.front() << " ";
		temp.pop();
	}

	//	DELETE elements
	//	Delete from front
	q.pop();
	cout << "\nDeleted first element from q" << endl;

	while(!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}

	q.push(1); q.push(2); q.push(3);
	cout << endl << q.front();
	q.pop();
	cout<< " " << q.front();
		
	return 0;
}