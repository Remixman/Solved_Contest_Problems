#include <iostream>
#include <string>
#include <set>

using namespace std;

bool is_palindrome(string s) {
    int l = s.size();
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l-i-1]) return false;
    }
    return true;
}

long long palendrome_num(string s) {
    int len = 1;
    set<string> palindrome_set;

    while (len <= s.size()) {
        for (int i = 0; i < s.size() - len + 1; i++) {
            string sub = s.substr(i, len);
            if (is_palindrome(sub)) {
                palindrome_set.insert(sub);
            }
        }

        len += 1;
    }

    return palindrome_set.size();
}

int main() {
    string s;

    while (cin >> s) {
        cout << "The string '" << s << "' contains " <<
            palendrome_num(s)  << " palindromes.\n";
    }

    return 0;
}
