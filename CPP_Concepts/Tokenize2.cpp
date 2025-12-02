#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    string str = "Hello, World! Welcome to C++.";
    vector<string> tokens;
    string::iterator it = str.begin();
    string::iterator end = str.end();
    string token;
    
    while (it != end) {
        if (*it == ' ' || *it == ',' || *it == '.' || *it == '!') {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        }
        else {
            token += *it;
        }
        ++it;
    }

    if (!token.empty()) { // add the last token
        tokens.push_back(token);
    }

    for (const auto& word : tokens) {
        cout << word << endl;
    }

    return 0;
}