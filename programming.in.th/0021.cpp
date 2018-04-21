#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    // Solution 1
    char str[105];
    int i, j, len;
    
    cin.getline(str, 105);
    len = strlen(str);
    for(i = 0; i < len; i++) {
        if(i < len - 2 && str[i+1] == 'p') {
            if((str[i]=='a' || str[i]=='e' ||
               str[i]=='i' || str[i]=='o' ||
               str[i]=='u') && (str[i]==str[i+2])) {
                for(j = i+1; str[j] != '\0'; j++) {
                    str[j] = str[j+2];    
                }
                str[j] = '\0';
            }   
        }    
    }
    cout << str << endl;
    
    // Solution 2
    
    return 0;    
}
