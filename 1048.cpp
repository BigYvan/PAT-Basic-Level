#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    string a, b;
    cin >> a >> b;
    int alength = (int)a.length();
    int blength = (int)b.length();
    int shorter = min(alength, blength);
    stack<char> c;
    char d[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
    for (int i = 0; i < shorter; i++) {
        if (i % 2 == 0) {
            c.push(d[(a[alength - i - 1] - '0' + b[blength - i - 1] - '0') % 13]);
        }else{
            c.push(d[((b[blength - i - 1] - a[alength - i - 1]) + 10) % 10]);
        }
    }
    if (alength > blength) {
        for (int i = shorter; i < a.length(); i++) {
            if (i % 2 == 0) {
                c.push(d[(a[alength - i - 1] - '0') % 13]);
            }else{
                c.push(d[(('0' - a[alength - i - 1]) + 10) % 10]);
            }
        }
    }else{
        for (int i = shorter; i < b.length(); i++) {
            c.push(b[blength - i - 1]);
        }
    }
    while (!c.empty()) {
        cout << c.top();
        c.pop();
    }
    return 0;
}
//注意a.length > b.length 情况，b不足的位要用0部全
