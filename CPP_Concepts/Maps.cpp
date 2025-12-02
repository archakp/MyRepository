#include <iostream>
#include <map>

using namespace std;

template<typename T1, typename T2>
void printMap(map<T1, T2>& m)
{
	for (auto x : m)
	{
		cout << x.first << " " << x.second << endl;
	}
}

int main()
{
	map<int, string> country = { {1, "India"}, {2, "China"}, {3, "Russia"}};
	
	//	INSERT elements

	country.insert({ 4, "Nepal" });

	printMap(country);

	//	 ACCESS elements

	cout <<endl << country[1] << endl << country.at(4);

	//	 UPDATE elements

	country[1] = "Bharat";
	country.at(4) = "Taiwan";

	cout << endl;
	printMap(country);

	//	FIND elements

	//	By key
	auto it = country.find(2);

	cout << endl << it->first << " " << it->second << endl;

	cout << country[3];
		

	return 0;
}