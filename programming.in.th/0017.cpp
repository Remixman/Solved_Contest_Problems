#include <iostream>
using namespace std;

int main() {
    int array[4];
    int area;
    
    for(int i = 0; i < 4; i++)
        cin >> array[i];
        
    for(int i = 0; i < 3; i++)
        for(int j = i + 1; j < 4; j++)
            if(array[i] > array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;    
            }
    area = array[2] * array[0];
    cout << area << endl;
    
    return 0;    
}
