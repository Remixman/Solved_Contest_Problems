#include <iostream>
using namespace std;

int main() {
    int m, n;
    int i, j;
    
    cin >> m >> n;
    int a[m][n], b[m][n];
    
    // Input matrix A
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j]; 
            
    // Input matrix B
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> b[i][j];     
    
    // Addition and printing
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            cout << a[i][j] + b[i][j];
            if(j < n-1) cout << " ";
        } 
        cout << endl;
    }
    
    return 0;    
}
