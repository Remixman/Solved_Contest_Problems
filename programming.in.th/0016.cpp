#include <iostream>
using namespace std;

char AdrianAnswer(int choice) {
    return (choice % 3) + 'A';
}

char BrunoAnswer(int choice) {
    if(choice % 2 == 0) return 'B';
    else if((choice - 1) % 4 == 0) return 'A';
    else return 'C';
}

char GoranAnswer(int choice) {
    int c = choice / 2;
    if(c % 3 == 0) return 'C';
    else return (c % 3) - 1 + 'A';    
}

int main() {
    int max_score = 0, adrian_score = 0, bruno_score = 0, goran_score = 0;
    int num;
    char solution[105];
    
    cin >> num;
    cin >> solution;
    for(int i = 0; i < num; i++) {
        if(solution[i] == AdrianAnswer(i))
            adrian_score++;
        if(solution[i] == BrunoAnswer(i))
            bruno_score++;
        if(solution[i] == GoranAnswer(i))
            goran_score++;
    }
    
    if(adrian_score > max_score) max_score = adrian_score;
    if(bruno_score > max_score) max_score = bruno_score;
    if(goran_score > max_score) max_score = goran_score;
    
    cout << max_score << endl;
    if(adrian_score == max_score) cout << "Adrian" << endl;
    if(bruno_score == max_score) cout << "Bruno" << endl;
    if(goran_score == max_score) cout << "Goran" << endl;
    
    return 0;    
}
