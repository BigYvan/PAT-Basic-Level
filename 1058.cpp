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
    vector<int>false_(M);
    for (int i = 0; i < N; i++) {
        int getScore = 0;
        for (int j = 0; j < M; j++) {
            int number = 0;
            int flag = 1;
            char bra1, bra2;
            cin >> bra1 >> number;
            for (int k = 0; k < number; k++) {
                char temp;
                cin >> temp;
                if ((answer[j].True[k] != temp && flag == 1) || (number != answer[j].numberTrue && flag == 1)) {
                    false_[j]++;
                    flag = 0;
                }
            }
            cin >> bra2;
            if (flag == 1) getScore += answer[j].score;
        }
        cout << getScore << endl;
    }
    int max = 0;
    for (int i = 0; i < M; i++) {
        if (false_[i] > max) max = false_[i];
    }
    if (max == 0) {
        cout << "Too simple"<< endl;
    }else{
        cout << max;
        for (int i = 0; i < M; i++) {
            if (false_[i] == max) cout << ' ' << i + 1;
        }
    }
    return 0;
}
//最后一个点一直不过，最后找到原因
//若输入的答案前面几位都相同，但是数目不一致也是要判定为错误！！！！！
