#include <iostream>
using namespace std;

void swap(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;    
}

int main() {
    char arr[3] = {0};
    char format[60];
    
    cin >> format;
    
    arr[0] = 1;
    for(int i = 0; format[i] != '\0'; i++) {
        switch(format[i]) {
            case 'A':
                swap(&arr[0], &arr[1]);
                break;
            case 'B':
                swap(&arr[1], &arr[2]);
                break;
            case 'C':
                swap(&arr[0], &arr[2]);
                break;
        }    
    }
    
    for(int i = 0; i < 3; i++)
        if(arr[i] == 1)
            cout << i + 1 << endl;
    
    return 0;    
}
