#include <iostream>
using namespace std;

int main() {
    int array[1005], count = 0;
    int i, n, k;
    bool found = false;
    
    cin >> n >> k;
    
    for(i = 2; i <= n; i++) {
        array[i] = i;   
    }
    
    while(!found) {
        // find start
        for(i = 2;; i++)
            if(array[i] > 0) break;
        int divisor = i;
        
        for(;i <= n; i++) {
            if((i % divisor == 0) && (array[i] > 0)) {
                count++;
                array[i] = -1;
                
                if(count == k) {
                    found = true;
                    break;
                }
            }
        }    
    }
    cout << i << endl;
    
    return 0;    
}
