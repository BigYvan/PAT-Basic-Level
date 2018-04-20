#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    cin >> a;
    int flag = 0;
    for (int i = 0; i < 10 ; i++) {
        string b = a;
        reverse(b.begin(), b.end());
        if (a == b) {
            cout << a << " is a palindromic number." << endl;
            flag = 1;
            break;
        }
        string temp = "";
        int carry = 0;
        for (int j = int(a.length() - 1); j >= 0 ; j--) {
            int xxxx = a[j] - '0' + b[j] - '0';
            if (carry == 1) {
                xxxx++;
                carry = 0;
            }
            if (xxxx >= 10) {
                xxxx  = xxxx - 10;
                carry = 1;
            }
            temp += (xxxx + '0');
        }
        if (carry == 1) temp += '1';
        reverse(temp.begin(), temp.end());
        cout << a << " + " << b << " = " << temp << endl;
        a = temp;
    }
    if (flag == 0) cout << "Not found in 10 iterations." << endl;
    return 0;
}
