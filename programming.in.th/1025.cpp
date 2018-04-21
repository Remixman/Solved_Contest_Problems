#include <iostream>
using namespace std;

typedef unsigned long long uint64;

uint64 gcd(uint64 a, uint64 b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

uint64 lcm(uint64 a, uint64 b){
    return (a*b) / gcd(a,b);    
}

int main() {
    uint64 n, tmp, v;
    
    cin >> n;
    for(uint64 i = 0; i < n; i++) {
        cin >> tmp;
        v = (i)? lcm(v, tmp) : tmp;
    }
    cout << v << endl;
    
    return 0;
}
