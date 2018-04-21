#include <iostream>
#include <cstring>
using namespace std;

void mul(char *a, char *b, char *c) {
    int alen = strlen(a);
    int blen = strlen(b);
    int i;
    
    c[0] = '1';
    for(i = 1; i < alen + blen - 1; i++)
        c[i] = '0';
    c[i] = '\0';
}

void add(char *a, char *b, char *c) {
    int alen = strlen(a);
    int blen = strlen(b);
    int addpos;
    char *d;
    
    if(alen > blen) {
        strcpy(c ,a);
        addpos = alen - blen;
    }
    else {
        strcpy(c, b);    
        addpos = blen - alen;
    }
    c[addpos] += 1;
}

int main() {
    char a[105], b[105];
    char res[205], op[3];
    
    cin >> a >> op >> b;
    if(op[0] == '*')
        mul(a, b, res);
    else 
        add(a, b, res);
        
    cout << res << endl;
    
    return 0;    
}
