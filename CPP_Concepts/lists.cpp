
/*
* ========================================================================================================================================================
				Vectors										|					Lists
==========================================================================================================================================================
It has contiguous memory.									|		It has non-contiguous memory.
It is synchronized.											|		It is not synchronized.
Vector may have a default size.								|		List does not have default size.
In vector, each element only requires the space for itself	|		In list, each element requires extra space for the node which holds the element, including pointers to the next
only.														|		and previous elements in the list.
Insertion at the end requires constant time but insertion	|		Insertion is cheap no matter where in the list it occurs.
elsewhere is costly.										|
Vector is thread safe.										|		List is not thread safe.
Deletion at the end of the vector needs constant time but	|		Deletion is cheap no matter where in the list it occurs.
for the rest it is O(n).									|
Random access of elements is possible.						|		Random access of elements is not possible.
Iterators become invalid if elements are added to or		|		Iterators are valid if elements are added to or removed from the list.
removed from the vector.
===========================================================================================================================================================
*/

#include<iostream>
#include <list>

using namespace std;

template <typename T>
void printlist(list<T>& ls)
{
	for (auto i : ls)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	list <int> lst = { 1, 2, 3, 4, 5 };

	printlist(lst);

	list <int> lst1(lst.begin(), lst.end()); 

	list <int>::iterator it = lst.begin();

	cout << "\n " << *it << " "; it++;
	cout << " " << *it << "\n";
	it--;
	while (it != lst.end())
	{
		cout<<*it<<" ";
		++it;
	}

	printlist(lst1);

	lst1.pop_front();

	printlist(lst1);

	lst1.push_front(11);
	printlist(lst1);

	//	FIND an element
	//================

	list<string> ls3 = { "aa", "bb", "cc", "dd", "ee"};

	//using built-in fn 'find()'

	auto ite = find(ls3.begin(), ls3.end(), "cc");

	if (ite != ls3.end()) cout <<"\n Element found : "<< *ite;
	else cout << "Element not found";

	//	UPDATE an element
	//  =================

	advance(ite, 2); //move to'ee'

	*ite = "ff";
	cout << endl<<"Updated ee to ff \n";
	printlist(ls3);

	//	DELETE an element
	//====================

	// To DELETE first element
	//ls3.pop_front();

	//To DELETE last element
	//ls3.pop_back();

	//To DELETE 'cc'

	auto itr = find(ls3.begin(), ls3.end(), "cc");
	ls3.erase(itr); 

	cout << "\n Element 'cc' deleted" << endl;
	printlist(ls3);

	//To DELETE 'bb'

	auto itw = ls3.begin();
	for (auto i = ls3.begin(); i != ls3.end(); i++)
	{		
		if (*i == "bb")
		{
			itw = i;
			cout << "\nFOUND"; 
			exit;
			
		}
	}

	cout<<endl << *itw << endl;
	ls3.erase(itw);
	
	cout << "\n Element 'bb' deleted" << endl;
	printlist(ls3);

	return 0;
}
