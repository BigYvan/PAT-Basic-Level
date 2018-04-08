#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct charact{
    char char_;
    int number;
};

bool cmp(charact a, charact b){
    if (a.number != b.number) {
        return a.number > b.number;
    }else
        return a.char_ < b.char_;
}

int main(int argc, const char * argv[]) {
    string a;
    getline(cin, a);
    vector<charact> count_;
    for (int i = 0; i < a.size(); i++) {
        int flag = 1;
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
        for (int j = 0; j < count_.size(); j++) {
            if (count_[j].char_ == a[i] ) {
                count_[j].number++;
                flag = 0;
            }
        }
        if (flag == 1 && isalpha(a[i])) {
            charact temp;
            temp.char_ = a[i];
            temp.number = 1;
            count_.push_back(temp);
        }
    }
    sort(count_.begin(), count_.end(), cmp);
    cout << count_[0].char_ << ' ' << count_[0].number;
    return 0;
}
