#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string c;
    int count_ = 0;
    cin >> c;
    int count_p = 0, count_t = 0;
    for (int i = 0; i < c.length(); i++) {
        if (c[i] == 'T') {count_t++;}
    }
    for (int i = 0; i < c.length(); i++) {
        if (c[i] == 'T') {count_t--;}
        if (c[i] == 'A') {count_ = (count_ + (count_p * count_t) % 1000000007) % 1000000007;}
        if (c[i] == 'P') {count_p++;}
    }
    cout << count_;
    return 0;
}
//注意： 不可最后再去对1000000007取余，每次加得时候都得取余
//蠢得我1000000007多了一个零一直卡不过....
