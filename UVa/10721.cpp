#include <iostream>
using namespace std;

long long b[51][51][51];
void init() {
    for (int i = 0; i < 51; i++)
    for (int j = 0; j < 51; j++)
    for (int k = 0; k < 51; k++)
        b[i][j][k] = -1;
}

long long possible(int n, int k, int m) {
    if (n == 0 && k == 0) return 1;
    if (n == 0 || k == 0) return 0;
    if (b[n][k][m] != -1) return b[n][k][m];

    long long pos = 0;
    for (int i = 1; i <= m; i++) {
        if (n >= i)
            pos += possible(n-i,k-1,m);
    }

    b[n][k][m] = pos;
    return b[n][k][m];
}

int main() {
    int n,k,m;

    while (cin >> n >> k >> m) {
        init();
        cout << possible(n,k,m) << endl;
    }

    return 0;
}
