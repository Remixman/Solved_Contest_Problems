#include <iostream>
using namespace std;

int main() {
    int freq[42] = {0};
    int num, res, count = 0;
     
    for(int i = 0; i < 10; i++) {
        cin >> num;
        res = num % 42;
        freq[res] += 1;  
    }
    
    for(int i = 0; i < 42; i++) {
        if(freq[i] > 0)
            count++;    
    }
    
    cout << count << endl;
    
    return 0;    
}
