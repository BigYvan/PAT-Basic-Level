#include <iostream>
using namespace std;

void func_c(string aaa){
    char pre = aaa[0];
    int cnt = 1;
    for (int i = 1; i < aaa.length(); i++) {
        if (aaa[i] == pre) {
            cnt++;
        } else {
            if (cnt >= 2) cout << cnt;
            cout << pre;
            cnt = 1;
            pre = aaa[i];
        }
    }
    if (cnt >= 2) cout << cnt;
    cout << pre;
}

void fun_d(string bbb){
    string num = "";
    for (int i = 0; i < bbb.size(); i++) {
        if (bbb[i] >= '0' && bbb[i] <= '9') {
            num += bbb[i];
        }else{
            int cnt = 1;
            if (num.length() > 0) cnt = stoi(num);
            for (int j = 0; j < cnt ; j++ ) {
                cout << bbb[i];
            }
            num = "";
        }
    }
}

int main(int argc, const char * argv[]) {
    char a;
    cin >> a;
    string temp;
    getchar();
    getline(cin, temp);
    if (a == 'C') func_c(temp);
    else if (a == 'D') fun_d(temp);
    return 0;
}
