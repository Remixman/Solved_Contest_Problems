#include <iostream>
using namespace std;

int sumExcept(int array[], int size, int e1, int e2) {
    int i, sum = 0;    
    for(i = 0; i < size; i++) {
        if(i!=e1 && i!=e2)
            sum += array[i];    
    }
    return sum;
}

int main() {
    int number[10];
    int e1, e2;
    
    for(int i = 0; i < 9; i++)
        cin >> number[i]; 
    
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(i != j) {
                if(sumExcept(number, 9, i, j) == 100) {
                    e1 = i;
                    e2 = j;
                    break; i = 10;    
                }
            }    
        }    
    }
    
    for(int i = 0; i < 9; i++)
        if(i!=e1 && i!=e2)
            cout << number[i] << endl; 
            
    return 0;    
}
