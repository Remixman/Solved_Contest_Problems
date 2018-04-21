#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[20];
    cin >> str;
    int slen = strlen(str);
    int len = (slen * 4) + 1;
    int ch_count = 0;
    
    for(int j = 0; j < 5; j++) {
        for(int i = 0; i < len; i++) {
            if(j == 2 && (i + 2) % 4 == 0)
                cout << str[(i+1) / 4];
            else if((i + j) % 2 == 0)
                if(((i + j + 2) % 12 == 0 || (i + j) % 12 == 0 || ((i + j - 2) % 12 == 0)) && 
                   ((i - j - 6) % 12 == 0 || (i - j - 8) % 12 == 0 || (i - j - 10) % 12 == 0) &&
                   (i > 0 && ((slen % 3 == 0) || (i < len-1))))
                   cout << "*";
                else if(j % 4 == 0 && i % 4 ==0)
                    cout << ".";
                else
                    cout << "#";
            else
                cout << ".";    
        }    
        cout << endl;
    }
    
    return 0;    
}
