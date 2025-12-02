#include <iostream>
#include <deque>
using namespace std;

template<typename T>
void printdq(deque<T>& dq)
{
	for (auto i : dq)
	{
		cout << i << " ";
	}
}

//	Deque stands for Double-Ended Queue.
//	* Unlike queue which only allows adding element at the back by pushing elements at the end
//	* Deque allows inserting elements on both ends (front/back)


int main()
{
	//	Declare & initiaze

	deque<int> d1 = { 3,4,5 };

	//	Print
	for (auto i : d1)
	{
		cout << i <<" ";
	}

	cout << endl;

	//	INSERTING elements
	// 
	//	In deque, there are 2 operations of insertion push_back() and push_front().
	//	* push_back()  ----   adds elements at the end.
	//	* push_front() -----  adds elements at the front

	d1.push_front(2);
	d1.push_front(1);

	d1.push_back(6);
	d1.push_back(7);

	printdq(d1);

	//	ACCESSING elements
	//	'front()'	:	Returns the first element.
	//	'back()'	:	Returns the last element.

	cout << "\nThe first element (front) is: " << d1.front() << endl;
	cout << "The last element (back) is: " << d1.back() << endl;

	//DELETE elements

	//	In deque there are 2 operations of deletion pop_back() and pop_front().
	//	* pop_back()  ----   removes element at the end.
	//	* pop_front() -----  removes element at the front.

	d1.pop_front();
	d1.pop_back();

	cout << endl << "Deleted first & last elements" << endl;
	printdq(d1);

	cout << endl;

	return 0;
}