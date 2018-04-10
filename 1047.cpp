
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct army{
    int teamID;
    int allScore;
};

bool cmp(army a, army b){
    return a.allScore > b.allScore;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<army> a;
    for (int i = 0; i < n; i++) {
        army temp;
        int number;
        scanf("%d-%d %d", &temp.teamID, &number, &temp.allScore);
        int flag = 0;
        for (int j = 0; j < (int)a.size(); j++) {
            if (a[j].teamID == temp.teamID) {
                a[j].allScore += temp.allScore;
                flag = 1;
            }
        }
        if (flag == 0) {
            a.push_back(temp);
        }
    }
    sort(a.begin(), a.end(), cmp);
    cout << a[0].teamID << ' ' << a[0].allScore;
    return 0;
}
