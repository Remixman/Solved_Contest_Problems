#include <iostream>
using namespace std;

int main() {
    int n, row, col;
    int i, j;
    bool repeat = false;
    
    cin >> n;
    
    /*if(n == 2) {
        cout << "*" << endl << "*" << endl;
        return 0;    
    }*/
    
    if(n % 2 == 0) {
        n -= 1;
        repeat = true;
    }
    row = col = n;
    
    int halfn = n/2;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(i+j==halfn || i-j==halfn || j-i==halfn || i+j==n-1+halfn)
                cout << "*";
            else
                cout << "-";    
        }    
        cout << endl;
        
        if(i==halfn && repeat) {
            i--;
            repeat = false;
        }
    }
    
    return 0;    
}
