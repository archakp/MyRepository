
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

#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

template <typename T>
void printvector(vector <T>& v)
{
	for (auto i : v)
		cout << i << " ";

	cout << endl;
}

// 8 ways to initialize vector 

int main()
{
	//	1	------- Initializer list 

	vector<int> v = { 1, 2, 3, 4 };
	
	//vector<int>::iterator it

	//display   
	printvector(v);
	
	//	2	------- One by one initialization

	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	   
	printvector(v);

	//	3	------- Single val initialization
	// 
	//Initializing all elements of a vector using a single value.

	vector <int> v1(5, 11); 

	printvector(v1);
	
	//	4	------- Initialize by an array

	int arr[] = { 11, 12, 13, 14 };

	int n = sizeof(arr) / sizeof(arr[0]);  // size = sizeof(array) / sizeof(first element)

	//Initialize vector v2 with array 'arr'
	vector <int> v2 = { arr, arr + n};

	printvector(v2);

	//	5	--------	From another vector or  // 6 --------- any other container

	vector <int> v3(v2.begin(), v2.end());

	cout << "\n Copied v2 to v3 :"<<endl;
	printvector(v3);

	//	7	---------	from 'fill()' function

	vector<int> v4(5); //vector with 5 elements

	fill(v4.begin(), v4.end(), 22); // Fill v4 with value '22'

	cout << "\n using fill() fn"<< endl;
	printvector(v4);

	//	8	--------	from iota() function
	//  iota() is a library function used to fill a range of elements with increasing values starting from the given initial value.

	vector <int> v5(5);  // 5 elements

	//"iota()" function is not available in MSVC
	//std::iota(v5.begin(), v5.end(), 21); // Fill v5 with 5 incremental values from 21. 

	// FIND, UPDATE & DELETE

	vector<char> vc = { 'a', 'b', 'c', 'd', 'f' };

	printvector(vc);

	auto it = find(vc.begin(), vc.end(), 'd');

	cout << endl << "element found: " << *it;

	//UPDATE 'f' as 'e'

	for (int i = 0; i < vc.size(); i++)
	{
		if (vc[i] == 'f')
			vc[i] = 'e';
	}

	cout << endl << "'f' updated to 'e'" << endl;
	printvector(vc);

	//DELETE 'd' .... find 'd' and call 'erase()' to delete it

	it = find(vc.begin(), vc.end(), 'd');

	vc.erase(it); cout << endl<<"Deleted 'd' : "<<endl;

	printvector(vc); 

	return 0;
}