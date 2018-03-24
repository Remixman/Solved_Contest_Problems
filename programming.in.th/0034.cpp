#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector< pair<int,int> > ac, bd;
    // find 1 <= ac <= 100
    for (int a = 1; a <= 100; a++) {
        for (int c = 1; c <= 100; c++) {
            int result = a*c;
            if (1 <= result && result <= 100) ac.push_back( make_pair(a,c) );
        }
    }
    // find -100 <= bd <= 100
    for (int a = -100; a <= 100; a++) {
        for (int c = -100; c <= 100; c++) {
            int result = a*c;
            if (-100 <= result && result <= 100) bd.push_back( make_pair(a,c) );
        }
    }

    int A, B, C; bool found = false;
    cin >> A >> B >> C;
    vector< pair<int,int> >::iterator ac_it, bd_it;
    for (ac_it = ac.begin(); ac_it != ac.end(); ac_it++) {
        for (bd_it = bd.begin(); bd_it != bd.end(); bd_it++) {
            int a = ac_it->first, c = ac_it->second,
                b = bd_it->first, d = bd_it->second;
            if (a*c == A && (a*d+b*c) == B && b*d == C) {
                found = true;
                cout << a << " " << b << " " << c << " " << d << "\n";
                break;
            }
        }
        if (found) break;
    }

    if (!found) cout << "No Solution\n";

    return 0;
}
