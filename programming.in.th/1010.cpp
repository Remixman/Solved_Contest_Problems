#include <iostream>
#include <cstring>
using namespace std;

int m, n;
char board[26][26];
char keyword[26];
int keylen;

bool isEqual(char a, char b) {
    if('A' <= a && a <= 'Z') a += ('a' - 'A');
    if('A' <= b && b <= 'Z') b += ('a' - 'A');
    return (a == b);
}

bool match(int r, int c) {
    int incre[3] = {-1, 0, 1};

for(int ic = 0; ic < 3; ic++) {
for(int ic2 = 0; ic2 < 3; ic2++) {
    
    // +0 +0 case
    if(ic==1 && ic2==1) continue;
    
    int k = 0, i = r, j = c;
    while(i>=0 && i<m && j>=0 && j<n && k<keylen){
        if(!isEqual(keyword[k], board[i][j])) break;    
        
        k += 1;
        i += incre[ic];   
        j += incre[ic2];
    }
    if(k == keylen)
        return true;
}    
}
    
    return false;
}

int main() {
    int k;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        cin >> board[i];
    }
    
    cin >> k;
    for(int c = 0; c < k; c++) {
        cin >> keyword;
        keylen = strlen(keyword);
        
        for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(isEqual(keyword[0], board[i][j]) && match(i, j)){
                cout << i << " " << j << endl;    
                i = m + 1; break;
            }
        }    
        }
    }
    
    return 0;    
}
