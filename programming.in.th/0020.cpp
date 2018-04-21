#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int score, sum, winner;
    
    for(int i = 0; i < 5; i++) {
        sum = 0;
        for(int j = 0; j < 4; j++) {
            cin >> score;
            sum += score;   
        }    
        
        if(sum > max) {
            max = sum;
            winner = i + 1;    
        }
    }
    cout << winner << " " << max << endl;
    
    return 0;    
}
