#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

struct pat{
    string name;
    int program = 0, midScore = -1, finalScore = -1, patScore = 0;
};

bool cmp(pat a, pat b){
    if (a.patScore == b.patScore) {
        return a.name < b.name;
    }else
        return a.patScore > b.patScore;
}

int main(int argc, const char * argv[]) {
    int p, m, n;
    cin >> p >> m >> n;
    vector<pat>l;
    map<string, int>ltemp;
    int cnt = 1;
    for (int i = 0; i < p; i++) {
        pat temp;
        cin >> temp.name >> temp.program;
        if (temp.program >= 200) {
            l.push_back(temp);
            ltemp[temp.name] = cnt++;
        }
    }
    for (int i = 0; i < m; i++) {
        string name_;
        int score = 0;
        cin >> name_ >> score;
        if (ltemp[name_] != 0) {
            l[ltemp[name_] - 1].midScore = score;
        }
    }
    for (int i = 0; i < n ; i++) {
        string name_;
        int score = 0;
        cin >> name_ >> score;
        if (ltemp[name_] != 0) {
            l[ltemp[name_] - 1].finalScore = score;
        }
    }
    for (int i = 0; i < l.size(); i++) {
        if (l[i].midScore > l[i].finalScore) {
            l[i].patScore = (int)((double)0.4 * l[i].midScore + (double)0.6 * l[i].finalScore + 0.5);
        }else
            l[i].patScore = l[i].finalScore;
    }
    sort(l.begin(), l.end(), cmp);
    for (int i = 0; i < l.size(); i++) {
        if (l[i].patScore >= 60) {
            cout << l[i].name << " " << l[i].program << " "<< l[i].midScore << " "<< l[i].finalScore << " "<< l[i].patScore << endl;
        }
    }
    return 0;
}
//纠结半天，先是超时后是错误，超时的原因是因为多了一层循环
//错误的原因在于我把最后的成绩设置为double类型，打印的时候再取整，这样子排序就有问题了
//题意应该是根据取整后进行排序
