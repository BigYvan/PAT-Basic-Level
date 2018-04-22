#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    int n;
    cin >> a >> n;
    if (n == 1) {
        cout << a << endl;
        return 0;
    }
    a = a + "1";
    for (int i = 0; i < n - 2 ;i++) {
        string temp;
        int cnt = 1;
        for (int j = 0; j < (int)a.length(); j++) {
            if (a[j] == a[j + 1]) {
                cnt ++;
            }else{
                temp += a[j];
                temp += cnt + '0';
                cnt = 1;
            }
        }
        a = temp;
    }
    cout << a;
    return 0;
}
