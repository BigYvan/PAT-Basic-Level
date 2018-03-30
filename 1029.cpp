#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    string a, b;
    vector<char> c, d;
    cin >> a >> b;
    for (int i = 0, j = 0; i < a.length();) {
        if (a[i] != b[j]) {
            c.push_back(a[i]);
            i++;
        }else{
            i++;
            j++;
        }
    }
    for (int i = 0; i < c.size(); i++) {
        int flag = 0;
        if (c[i] >= 'a' && c[i] <= 'z') {
            c[i] = c[i] - 32;
        }
        for (int j = 0; j < d.size(); j++) {
            if (d[j] == c[i]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            cout << c[i];
            d.push_back(c[i]);
        }
    }
    return 0;
}
