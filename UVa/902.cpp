#include <iostream>
#include <string>
#include <map>

using namespace std;

string decode(int n, string s) {
    map< string, int > occ_counts;

    for (int i = 0; i < s.size() - n + 1; i++) {
        string ss = s.substr(i, n);
        if (occ_counts.count(ss) == 0)
            occ_counts[ss] = 0;
        occ_counts[ss] += 1;
    }

    int max_occ = 0; string max_str;
    map< string, int >::iterator it;
    for (it = occ_counts.begin(); it != occ_counts.end(); ++it) {
        if (it->second > max_occ) {
            max_occ = it->second;
            max_str = it->first;
        }
    }
    return max_str;
}

int main() {
    int n;
    string s;

    while (cin >> n >> s) {
        cout << decode(n, s) << "\n";
    }

    return 0;
}
