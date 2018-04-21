#include <iostream>
using namespace std;

int main() {
    int i, j, n, size;
    int s[15], b[15];
    int min_diff = 1000000005, diff;
    
    cin >> n;
    size = 1; //size = pow(2, n);
    
    for(i = 0; i < n; i++) {
        cin >> s[i] >> b[i];
        size *= 2;
    }
    
    for(i = 1; i < size; i++) {
        int tmp = i;
        int sum_s = 1;
        int sum_b = 0;
        
        for(j = 0; j < n; j++) {
            if(1 & tmp) {
                sum_s *= s[j];
                sum_b += b[j];
            }
            
            tmp /= 2;    
        }
        
        diff = sum_s - sum_b;
        if(diff < 0) // abs
            diff *= -1;
        
        if(diff < min_diff)
            min_diff = diff;
    }
    cout << min_diff << endl;
    
    return 0;    
}
