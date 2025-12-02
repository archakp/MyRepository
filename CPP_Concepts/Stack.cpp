#include <iostream>
#include <stack>
using namespace std;

/*
	* Stack container follows LIFO (Last In First Out) order of insertion and deletion. 
	* It means that most recently inserted element is removed first and the first inserted element will be removed last. 
	* This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack.

*/

int main()
{
	stack<int> st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	//	Make a copy
	stack<int> st1(st);

	//	ACCESS elements

	cout<< "\n Top element : "<<st.top() << endl;

	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}

	//DELETE elements

	// st.pop() in the above statent deletes the top element everytime in the loop	

	return 0;
}