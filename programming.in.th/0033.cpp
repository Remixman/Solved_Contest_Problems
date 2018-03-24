#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, like, maxlike = 0;
    multiset<int> s;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> like;
        s.insert(like);
    }

    for (int i = 1; i <= 10000; i++) {
        if (s.count(i) > maxlike) maxlike = s.count(i);
    }
    for (int i = 1; i <= 10000; i++) {
        if (s.count(i) == maxlike) cout << i << " ";
    }
    cout << "\n";

    return 0;
}
