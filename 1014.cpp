#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, const char * argv[]) {
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    char hour[24] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N'};
    int i = 0;
    for (;; i++) {
        if (a[i] == b[i] && a[i] <= 'G' && a[i] >= 'A') {
            cout << day[a[i] - 'A'];
            break;
        }
    }
    i++;
    int flag = 0;
    for (;; i++) {
        if (a[i] == b[i]) {
            for (int j = 0; j < 24; j++) {
                if (a[i] == hour[j]) {
                    printf(" %02d:", j);
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                break;
            }
        }
    }
    for (int k = 0;; k++) {
        if (c[k] == d[k] && ((c[k] >= 'A' && c[k] <= 'Z') || (c[k] >= 'a' && c[k] <= 'z'))) {
            printf("%02d", k);
            break;
        }
    }
    return 0;
}
//星期英文打错了，硬是一个点过不去，蠢哭
