#include <iostream>
using namespace std;

#define MAX_AGENCY 21

int T, R, H, bestT, bestR, bestH, bestCost;
int tCost[MAX_AGENCY];
int rCost[MAX_AGENCY];
int hCost[MAX_AGENCY];
int tCombi[MAX_AGENCY][MAX_AGENCY];
int rCombi[MAX_AGENCY][MAX_AGENCY];
int hCombi[MAX_AGENCY][MAX_AGENCY];

int main() {

    while (cin >> T >> R >> H) {
        bestCost = -1;

        // Get all inputs
        for (int i = 0; i < T; i++) {
            cin >> tCost[i];
            for (int k = 0; k < R; k++) cin >> tCombi[i][k];
        }
        for (int i = 0; i < R; i++) {
            cin >> rCost[i];
            for (int k = 0; k < H; k++) cin >> rCombi[i][k];
        }
        for (int i = 0; i < H; i++) {
            cin >> hCost[i];
            for (int k = 0; k < T; k++) cin >> hCombi[i][k];
        }

        // Find best solution
        for (int t = 0; t < T; t++) {
            for (int r = 0; r < R; r++) {
                if (tCombi[t][r] == 1) continue;
                for (int h = 0; h < H; h++) {
                    if (rCombi[r][h] == 1) continue;
                    if (hCombi[h][t] == 1) continue;

                    int cost = tCost[t] + rCost[r] + hCost[h];
                    if (bestCost < 0 || cost < bestCost) {
                        bestCost = cost;
                        bestT = t, bestR = r, bestH = h;
                    }
                }
            }
        }

        // Print out answer
        if (bestCost < 0)
            cout << "Don't get married!\n";
        else
            cout << bestT << " " << bestR << " " << bestH
                    << ":" << bestCost << "\n";
    }

    return 0;
}