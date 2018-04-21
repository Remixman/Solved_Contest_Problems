#include <iostream>
using namespace std;

int main() {
    int month_day[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int firstday = 3;
    int day, month;
    
    cin >> day >> month;
    
    for(int i = 1; i < month; i++)
        day += month_day[i-1];

    day = (day + firstday) % 7;
    
    switch(day) {
        case 0:
            cout << "Sunday" << endl;
            break;   
        case 1:
            cout << "Monday" << endl;
            break;   
        case 2:
            cout << "Tuesday" << endl;
            break;   
        case 3:
            cout << "Wednesday" << endl;
            break;   
        case 4:
            cout << "Thursday" << endl;
            break;   
        case 5:
            cout << "Friday" << endl;
            break;   
        case 6:
            cout << "Saturday" << endl;
            break;   
    }
    
    
    return 0;    
}
