#include <iostream>
using namespace std;

int N, Q, q;
int heights[50001];
int bsearch() {
    int l = 0;
    int r = N - 1;

    while (r >= l) {
        int mid = (r + l) / 2;

        if (heights[mid] == q)
            return mid;
        else if (heights[mid] > q)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return r;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> heights[i];

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> q;

        int idx = bsearch();
        int sidx = idx;
        int tidx = idx;

        while (heights[sidx] >= q && sidx >= 0) sidx--;
        if (sidx >= 0) cout << heights[sidx];
        else cout << "X";
        cout << " ";

        while (heights[tidx] <= q && tidx < N) tidx++;
        if (tidx < N) cout << heights[tidx];
        else cout << "X";
        cout << "\n";
    }


    return 0;
}
