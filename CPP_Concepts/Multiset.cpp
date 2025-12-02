#include<iostream>
#include<set>
using namespace std;

/*
	-	Multiset is an associative container similar to the set, but it can store multiple elements with same value. 
	-	It is sorted in increasing order by default, but it can be changed to any desired order.
*/

int main()
{
	multiset<int> ms1 = {2, 3, 3, 4, 5, 5};	//It can have duplicates

	cout << endl;
	for (auto i : ms1)
		cout << i << " ";

	// INSERTING elements

	ms1.insert(1);
	ms1.insert(6);

	cout << endl;
	for (auto i : ms1)
		cout << i << " ";

	//	FIND an element
	//	Find '5'

	auto it = ms1.find(5);

	if (it != ms1.end()) cout << "\n FOUND : " << *it;
	else cout << "\n NOT FOUND !!!";

	//	DELETE an element
	//	Delete '5'

	return 0;
}