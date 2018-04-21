#include <iostream>
#include <cstring>
using namespace std;

void toLower(char *str, int size) {
    for(int i = 0; i < size; i++) {
        if('A' <= str[i] && str[i] <= 'Z')
            str[i] += 'a' - 'A';    
    }
}

bool isPalindrome(char *str, int size) {
    for(int i = 0; i < size /2; i++)
        if(str[i] != str[size - i -1])
            return false;
    return true;   
}

bool isDoublePalindrome(char *str, int size) {
    int halfSize = size / 2;
    if(size % 2 == 0)
        return isPalindrome(str, halfSize)
            && isPalindrome(str + halfSize, halfSize);
    else 
        return isPalindrome(str, halfSize)
            && isPalindrome(str + halfSize + 1, halfSize);
}

int main() {
    char str[201];
    
    cin >> str;
    int len = strlen(str);
    
    toLower(str, len);
    if(isPalindrome(str, len)) {
        if(isDoublePalindrome(str, len))
            cout << "Double Palindrome" << endl;
        else
            cout << "Palindrome" << endl;
    }
    else
        cout << "No" << endl;
    
    return 0;    
}
