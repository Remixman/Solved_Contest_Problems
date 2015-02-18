#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    int n, k, m, cent;
    char ch;
    char buffer[10005], *p;

    cin >> n;
    while (n--) {
        map<char,int> chmap;
        int totalcent = 0;

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> ch >> cent;
            chmap[ch] = cent;
        }

        cin >> m;
        for (int i = 0; i < m; i++) {
            gets(buffer);
            p = buffer;
            while (true) {
                if (*p == '\0') break;
                if (chmap.find(*p) != chmap.end())
                    totalcent += chmap[*p];
                p++;
            }
        }

        double dollar = totalcent / 100.0;
        printf("%.2f$\n");
    }

    return 0;
}
