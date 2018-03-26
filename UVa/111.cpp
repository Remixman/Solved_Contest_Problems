#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t[30][30];
int lcs(vector<int> &s1, vector<int> &s2, int n) {
    for (int i = 0; i <= n; ++i) t[i][0] = t[0][i] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i] == s2[j]) t[i][j] = 1 + t[i-1][j-1];
            else t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }
    return t[n][n];
}

int main() {
    int n, tmp;
    vector<int> corrects, examine;

    cin >> n; corrects.resize(n+1); examine.resize(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> tmp; corrects[tmp] = i;
    }

    while (cin >> tmp) {
        examine[tmp] = 1;
        for (int i = 2; i <= n; ++i) {
            cin >> tmp; examine[tmp] = i;
        }
        cout << lcs(corrects, examine, n) << "\n";
    }

    return 0;
}
