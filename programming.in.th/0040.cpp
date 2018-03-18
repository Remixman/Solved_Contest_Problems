#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    string s;

    cin >> t;
    while (t--) {
        cin >> s;
        if (s.size() == 1 && s == "2") cout << "T\n";
        else {
            switch(s[s.size()-1]) {
                case '1':
                case '3':
                case '5':
                case '7':
                case '9':
                    cout << "T\n"; break;
                default:
                    cout << "F\n"; break;
            }
        }
    }

    return 0;
}
