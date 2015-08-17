/*
10815 - Andy's First Dictionary
Time limit: 3.000 seconds

Warning : Make sure to
    1. change input to lower case
    2. input like
        this"is"a"really"long"word >> this is a really long word
        good100cats >> good cats
        good22dogs >> good dogs
*/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int main() {
    string rawWord, word;
    vector<string> wordList;

    while (cin >> rawWord) {
        word = "";
        for (int i = 0; i < rawWord.size(); i++) {
            char ch = rawWord[i];
            if (ch >= 'a' && ch <= 'z') word += ch;
            else if (ch >= 'A' && ch <= 'Z') word += ch + ('a' - 'A');
            else if (word != "") {
                wordList.push_back(word);
                word = "";
            }
        }
        if (word != "") wordList.push_back(word);
    }

    sort(wordList.begin(), wordList.end());

    string lastWorld = "";
    for (int i = 0; i < wordList.size(); i++) {
        if (wordList[i].size() > 0 && wordList[i] != lastWorld)
            cout << wordList[i] << endl;
        lastWorld = wordList[i];
    }

    return 0;
}
