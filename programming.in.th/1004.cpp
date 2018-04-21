#include <iostream>
#include <deque>
#include <queue>
#include <map>
using namespace std;

int main() {
    int classNum, studentNum;
    map<int, int> classMap;

    cin >> classNum >> studentNum;
    for (int i = 0; i < studentNum; ++i) {
        int classId, sid;
        cin >> classId >> sid;
        classMap[sid] = classId;
    }

    deque< queue<int> > q;
    char command;
    while (true) {
        cin >> command;

        if (command == 'X') {
            cout << 0 << "\n";
            break;
        } else if (command == 'D') {
            if (q.size() == 0) cout << "empty\n";
            else {
                cout << q.front().front() << "\n";
                q.front().pop();
                if (q.front().size() == 0) q.pop_front();
            }
        } else {
            int sid; cin >> sid;
            int classId = classMap[sid];
            bool found = false;
            for (auto it = q.begin(); it != q.end(); ++it) {
                if (classMap[it->front()] == classId) {
                    it->push(sid);
                    found = true; break;
                }
            }
            if (!found) {
                queue<int> qq; qq.push(sid);
                q.push_back(qq);
            }
        }
    }

    return 0;
}
