#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;
struct node{
    int num;
    double allScore;
};

struct AntherNode{
    int score_, num_;
    string name_;
};

bool cmp(AntherNode a, AntherNode b){
    if (a.score_ == b.score_) {
        if (a.num_ == b.num_) {
            return a.name_ < b.name_;
        }else
            return a.num_ < b.num_;
    }else
        return a.score_ > b.score_;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    map<string, node>a;
    vector<AntherNode>b;
    for (int i = 0; i < n; i++) {
        char level;
        int id,score;
        string school;
        cin >> level >> id >> score >> school;
        transform(school.begin(), school.end(), school.begin(), ::tolower);
        a[school].num++;
        if (level == 'B') a[school].allScore += (double)score * 2 / 3;
        else if (level == 'A') a[school].allScore += (double)score;
        else a[school].allScore += (double)score * 1.5;
    }
    for (auto i = a.begin(); i != a.end(); i++) {
        AntherNode temp;
        temp.name_ = i->first;
        temp.score_ = i->second.allScore;
        temp.num_ = i-> second.num;
        b.push_back(temp);
    }
    sort(b.begin(), b.end(), cmp);
    int rank = 1;
    cout << b.size() << endl;
    printf("%d %s %d %d\n", rank, b[0].name_.c_str(), b[0].score_, b[0].num_);
    for (int i = 1; i < b.size(); i++) {
        if (b[i].score_ != b[i - 1].score_) rank = i + 1;
        printf("%d %s %d %d\n", rank, b[i].name_.c_str(), b[i].score_, b[i].num_);
    }
    return 0;
}
