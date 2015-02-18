#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

bool check(string s) {
    stack<char> stk;

    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='(' || s[i]=='[') {
            stk.push(s[i]);
        }
        else if (s[i]==')') {
            if (stk.empty() || stk.top()!='(')
                return false;
            stk.pop();
        }
        else if (s[i]==']') {
            if (stk.empty() || stk.top()!='[')
                return false;
            stk.pop();
        }
        else {
            return false;
        }
    }

    return stk.empty();
}

int main() {
    int N;
    char str[100000];
    cin >> N;
    cin.getline(str, 100000);

    while (N--) {
        bool balance = true;
        stack<char> stk;

        cin.getline(str, 100000);
        string ps(str);

        if (check(ps)) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
