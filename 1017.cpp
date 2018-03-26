#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string number;
    int n;
    cin >> number >> n;
    int t = 0, a = 0;
    t = (number[0] - '0') / n;
    if ((t != 0 && number.length() > 1) || number.length() == 1) {
        cout << t;
    }
    a = (number[0] - '0') % n;
    for (int i = 1; i < number.length(); i++) {
        t = (a * 10 + (number[i] - '0')) / n;
        printf("%d", t);
        a = (a * 10 + number[i] - '0') % n;
    }
    cout << " " << a;
    return 0;
}
