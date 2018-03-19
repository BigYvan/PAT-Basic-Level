#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    string n;
    string chinese[10] = {"ling","yi","er","san","si", "wu", "liu", "qi", "ba", "jiu"};
    int count = 0;
    cin >> n;
    for (int i = 0; i < n.size(); i++) {
        count += n[i] - '0';
    }
    stack<int>number;
    while (count != 0) {
        number.push(count % 10);
        count = count / 10;
    }
    for (int i = 0; !number.empty(); i++) {
        cout << chinese[number.top()];
        number.pop();
        if (!number.empty()) {
            cout << ' ';
        }
    }
    return 0;
}
//可以用to_string直接将数字转换成字符串
