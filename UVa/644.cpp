/*
644 - Immediate Decodability
Time limit: 3.000 seconds

Solution : Brute force - compare all-pair of the codes.
    we have so much time.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int setNo, vector<string> &codeList) {
    int length = codeList.size();
    bool foundPrefix = false;
    for (int i = 0; i < length-1; i++) {
        for (int k = i+1; k < length; k++) {
            // Compare 2 strings
            bool substring = true;
            string &s1 = codeList[i];
            string &s2 = codeList[k];
            for (int ii = 0; ii<s1.size() && ii<s2.size() ;ii++) {
                if (s1[ii]!=s2[ii]) {
                    substring = false;
                    break;
                }
            }

            if (substring) {
                foundPrefix = true;
                break;
            }
        }
        if (foundPrefix) break;
    }

    if (foundPrefix)
        cout << "Set " << setNo << " is not immediately decodable" << endl;
    else
        cout << "Set " << setNo << " is immediately decodable" << endl;
}

int main() {
    int setNo = 1;
    string code;
    vector<string> codeList;

    while (cin >> code) {
        if (code[0] == '9') {
            solve(setNo, codeList);
            setNo++;
            codeList.clear();
        } else {
            codeList.push_back(code);
        }
    }

    return 0;
}
