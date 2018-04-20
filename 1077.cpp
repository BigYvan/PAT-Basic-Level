#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        double maxScore = 0.0, minScore = m + 1, teacherScore, studentScore, cnt = 0.0, allScore = 0.0;
        cin >> teacherScore;
        for (int j = 0; j < n - 1; j++) {
            cin >> studentScore;
            if (studentScore >= 0 && studentScore <= m) {
                if (studentScore < minScore) minScore = studentScore;
                if (studentScore > maxScore) maxScore = studentScore;
                allScore += studentScore;
                cnt++;
            }
        }
        printf("%d\n", (int)(((allScore - maxScore - minScore) / (cnt - 2) + teacherScore) / 2 + 0.5));
    }
    return 0;
}
