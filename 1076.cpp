#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            string a;
            cin >> a;
            if (a[2] == 'T') {
                cout << a[0] - 'A' + 1;
            }
        }
    }
    return 0;
}
