#include <iostream>
using namespace std;

int main() {
    int a, b, c, tmp, count = 0;
    cin >> a >> b >> c;
    
    while(1) {
        if(c - a <= 2)
            break;
        
        if((b - a) < (c - b)) {
            a = b;
            b = a + 1;    
        }
        else {
            c = b;
            b = c - 1;    
        }
        count++;
    }
    cout << count << endl;
    
    return 0;    
}
