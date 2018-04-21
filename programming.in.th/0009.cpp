#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;    
}

int main() {
    int a, b, c;
    char format[5];
    
    cin >> a >> b >> c;
    cin >> format;
    
    if(b < a) swap(&b ,&a);
    if(c < a) swap(&c, &a);
    if(c < b) swap(&c, &b);
    
    for(int i = 0; i < 3; i++) {
        if(i != 0)
            cout << " ";
        
        switch(format[i]) {
            case 'A':
                cout << a;
                break;
            case 'B':
                cout << b;
                break;
            case 'C':
                cout << c;
                break;
        } 
    }
    cout << endl;
    
    return 0;    
}
