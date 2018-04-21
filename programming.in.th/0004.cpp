#include <iostream>
using namespace std;

int main() {
    char str[10005];
    bool hasSmall = false, hasCapital = false;
    int i;
    
    cin >> str;
    for(i = 0; str[i] != '\0'; i++) {
        if('a' <= str[i] && str[i] <= 'z')
            hasSmall = true;
        else if('A' <= str[i] && str[i] <= 'Z')
            hasCapital = true;    
    }
    
    if(hasSmall && hasCapital)
        cout << "Mix" << endl;
    else if(hasSmall)
        cout << "All Small Letter" << endl;
    else
        cout << "All Capital Letter" << endl; 
    
    return 0;    
}
