#include <iostream>
#include <string>
using namespace std;

int main() {
  int remain = 0, stk = 0;
  string s;

  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') stk++;
    else if (stk > 0) stk--;
    else remain++;
  }
  cout << remain + stk << "\n";

  return 0;
}