#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    vector<int> trueAns(m), score(m);
    for (int i = 0; i < m ; i++) {
        cin >> score[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> trueAns[i];
    }
    for (int i = 0; i < n; i++) {
        int allScore = 0;
        for (int j = 0; j < m; j++) {
            int ans;
            cin >> ans;
            if (ans == trueAns[j]) allScore += score[j];
        }
        cout << allScore << endl;
    }
    return 0;
}
