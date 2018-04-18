#include <iostream>
#include <vector>
using namespace std;

struct choose{
    int score;
    int numberALL;
    int numberTrue;
    vector<char>True;
};

int main(int argc, const char * argv[]) {
    int N = 0, M = 0;
    cin >> N >> M;
    vector<choose> answer(M);
    for (int i = 0; i < M; i++) {
        cin >> answer[i].score >> answer[i].numberALL >> answer[i].numberTrue;
        for (int j = 0; j < answer[i].numberTrue; j++) {
            char temp;
            cin >> temp;
            answer[i].True.push_back(temp);
        }
    }
    int wrong_choose[101][10] = {0};
    for (int i = 0; i < N; i++) {
        double getScore = 0;
        for (int j = 0; j < M; j++) {
            int number = 0;
            char bra1, bra2;
            cin >> bra1 >> number;
            vector<int>truechoose;
            for (int k = 0; k < number; k++) {
                char temp;
                cin >> temp;
                int flag = 0;
                for (int z = 0; z < answer[j].numberTrue; z++) {
                    if (temp == answer[j].True[z]) {
                        truechoose.push_back(temp);
                        flag = 1;
                    }
                }
                if (flag == 0){
                    wrong_choose[j][temp - 'a']++;
                }
            }
            cin >> bra2;
            if (truechoose.size() == answer[j].numberTrue && answer[j].numberTrue == number) {
                getScore += answer[j].score;
            }
            if (truechoose.size() < answer[j].numberTrue && truechoose.size() == number)
                {getScore += (double)answer[j].score / 2;}
            for (int ii = 0; ii < answer[j].numberTrue; ii++) {
                int flagflag = 0;
                for (int jj = 0; jj < truechoose.size(); jj++) {
                    if (answer[j].True[ii] == truechoose[jj]) {
                        flagflag = 1;
                    }
                }
                if (flagflag == 0) {
                    wrong_choose[j][answer[j].True[ii] - 'a']++;
                }
            }
        }
        printf("%.1f\n", getScore);
    }
    int max = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 5; j++) {
            if (wrong_choose[i][j] > max) {
                max = wrong_choose[i][j];
            }
        }
    }
    if (max == 0) {
        cout << "Too simple"<< endl;
    }else{
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < 5; j++) {
                if (wrong_choose[i][j] == max) {
                    printf("%d %d-%c\n", max , i + 1, 'a' + j);
                }
            }
        }
    }
    return 0;
}
//不知道为什么这题ac率这么高，反正一头包，好在最后ac了
//主要问题在错误的理解，纠结时间一长，头都晕
