#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    map<string, int> wordCount;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;

    while (ss >> word) {
       // std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordCount[word]++;
    }

    cout << "Word Frequencies:\n";
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}