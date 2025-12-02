#include<iostream>
#include<set>
using namespace std;

/*
	-	Sets are associative container which stores unique elements in some sorted order. (Ascending/Descending)
	-   By default, it is sorted ascending order of the keys, but this can be changed as per requirement.
*/

int main() {

    // Creating an empty set
    set<int> s1;

    // Creating a set from an initializer list
    set<int> s2 = { 5, 1, 3, 2, 4 };

    for (auto i : s2)
        cout << i << " ";

    //INSERT elements

    s2.insert(5);
    s2.emplace(6);
    s2.insert(7);

    cout << endl;

    for (auto i : s2)
        cout << i << " ";

    //  UPDATE elements ... is NOT possible in sets.

    //  FIND elements.
    //  Find '3'

    auto it = s2.find(3);

    if (it != s2.end()) cout << "\n FOUND: " << *it;
    else cout << "\n Element not found";

    //DELETE elements

    // Deleting elements by value
    s2.erase(5);    

    // Deleting first element by iterator
    s2.erase(s2.begin());

    cout << endl;
    for (auto i : s2)
        cout << i << " ";

    return 0;
}

