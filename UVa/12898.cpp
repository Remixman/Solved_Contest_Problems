/*
12898 - And Or
Time limit: 3.000 seconds
*/

#include <iostream>
#include <stdint.h>
using namespace std;

void intToBitArray(uint64_t n, int bitArray[]) {
    for (int i = 1; i <= 63; i++) {
        bitArray[i] = n & 1;
        n >>= 1;
    }
}

void bitArrayToInt(int bitArray[], uint64_t &n) {
    n = 0;
    for (int i = 63; i >= 1; i--) {
        n <<= 1;
        n |= bitArray[i];
    }
}

void printBitArray(int bitArray[]) {
    for (int i = 63; i >= 1; i--) cout << bitArray[i];
}

uint64_t powerOfTwo(uint64_t e) {
    uint64_t b = 1;
    return b << e;
}

int main() {

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        uint64_t a, b;
        int aBitArray[64] = {0};
        int bBitArray[64] = {0};
        int andBitArray[64] = {0}, orBitArray[64] = {0};
        cin >> a >> b;
        intToBitArray(a, aBitArray);
        intToBitArray(b, bBitArray);

        // Solve
        uint64_t range = b - a + 1;
        if (range == 1) {
            cout << "Case " << t << ": " << a << " " << a << endl;
        } else {
            for (int expo = 62; expo >= 0; expo--) {
                if (powerOfTwo(expo) < range) {
                    // digit "1" to "expo + 1" have both bit 1 and 0
                    for (int i = 1; i <= expo+1; i++) {
                        andBitArray[i] = 1 & 0;
                        orBitArray[i] = 1 | 0;
                    }
                    for (int i = expo+2; i <= 63; i++) {
                        andBitArray[i] = aBitArray[i] & bBitArray[i];
                        orBitArray[i] = aBitArray[i] | bBitArray[i];
                    }

                    uint64_t andResult, orResult;
                    bitArrayToInt(andBitArray, andResult);
                    bitArrayToInt(orBitArray, orResult);

                    //cout << "a   : "; printBitArray(aBitArray); cout << endl;
                    //cout << "b   : "; printBitArray(bBitArray); cout << endl;
                    //cout << "and : "; printBitArray(andBitArray); cout << endl;
                    //cout << "or  : "; printBitArray(orBitArray); cout << endl;

                    cout << "Case " << t << ": " << orResult << " " << andResult << endl;

                    break;
                }
            }
        }
    }

    return 0;
}
