#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    vector<char>reslut;
    int shift = 1;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '+') {shift = 0;}
    }
    for (int i = 0; i < b.length(); i++) {
        int flag = 1;
        for (int j = 0; j < a.length(); j++) {
            if (b[i] == a[j]) {flag = 0;}
            if (b[i] >= 'a' && b[i] <= 'z' && b[i] == a[j] + 32) flag = 0;
        }
        if (shift == 0 && b[i] >= 'A' && b[i] <= 'Z') {flag = 0;}
        if (flag == 1) {reslut.push_back(b[i]);}
    }
    for (int i = 0; i < reslut.size(); i++) {
        cout << reslut[i];
    }
    if (reslut.empty()) {cout << endl;}
    return 0;
}
//第三个测试用例第一行为空，所以输入用getline
