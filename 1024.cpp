#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string num;
    cin >> num;
    int E = 999999, index_ = 0;
    if (num[0] == '-') {printf("-");}
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == 'E') {
            E = i;
        }
        if (i > E + 1) {
            index_ = index_ * 10 + (num[i] - '0');
        }
    }
    if (num[E + 1] == '+') {
        if (index_ < E - 3) {
            for (int i = 1; i < E; i++) {
                if (num[i] >= '0' && num[i] <= '9') {
                    cout << num[i];
                    if (i == index_ + 2) {
                        cout << '.';
                    }
                }
            }
        }else{
            for (int i = 0; i < E; i++) {
                if (num[i] >= '0' && num[i] <= '9') {cout << num[i];}
            }
            for (int i = 0; i < index_ - E + 3; i++) {
                cout << '0';
            }
        }
    }else{
        cout << "0.";
        for (int i = 0; i < index_ - 1; i++) {
            cout << '0';
        }
        for (int i = 0; i < E; i++) {
            if (num[i] >= '0' && num[i] <= '9') {cout << num[i];}
        }
    }
    return 0;
}
