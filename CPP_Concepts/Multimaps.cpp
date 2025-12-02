#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<int, string> mm1 = { {1, "India"}, {2, "China"}, {1,"Russia"} }; //Multimap can have 'duplicate' keys.
	
	multimap<int, string>::iterator it = mm1.begin();

	for (auto i : mm1)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;
	mm1.insert({ 3, "S.Korea" });

	for (it = mm1.begin(); it != mm1.end(); it++)
	{
		cout<< it->first << " " << it->second << endl;
	}

	return 0;
}