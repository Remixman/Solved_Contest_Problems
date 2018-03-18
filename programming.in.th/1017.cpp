#include <iostream>
using namespace std;

int board[15][15];

int main() {
    int n; cin >> n;
    bool magic = true;

    // input
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    int target_sum = (n * (n + 1) / 2) / n;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += board[i][j];
        }
        if (sum != target_sum) magic = false;
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += board[j][i];
        }
        if (sum != target_sum) magic = false;
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += board[i][i];
    }
    if (sum != target_sum) magic = false;

    sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += board[i][n-1-i];
    }
    if (sum != target_sum) magic = false;

    if (magic) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
