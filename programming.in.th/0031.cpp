#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int dim[3], cut = 0;
    cin >> dim[0] >> dim[1] >> dim[2];

    while (true) {
        if (dim[0] == 1 && dim[1] == 1 && dim[2] == 1) break;

        sort(dim, dim+3);
        if (dim[2] % 2 == 1) dim[2] -= 1;
        dim[2] /= 2;

        ++cut;
    }

    cout << cut << "\n";

    return 0;
}
