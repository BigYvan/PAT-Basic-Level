#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    char f;
    cin >> n >> f;
    int i = 3;
    int left = 0;
    for (int sum = 1; sum <= n; i += 2) {
        if (sum <= n) {
            left = n - sum;
        }
        sum += i * 2;
    }
    int max_l = i - 4;
    for (int j = 0; max_l >= 1; max_l = max_l - 2) {
        for (int k = 0; k < j; k++) {
            printf(" ");
        }
        for (int k = 0; k < max_l; k++) {
            printf("%c", f);
        }
        printf("\n");
        j++;
    }
    for (int j = 3; j <= i - 4; j = j + 2) {
        for (int k = 0; k < (i - 4 - j) / 2; k++) {
            printf(" ");
        }
        for (int k = 0; k < j; k++) {
            printf("%c", f);
        }
        printf("\n");
    }
    printf("%d", left);
    return 0;
}

//这段代码写的很乱，虽然ac了。被整的有点烦，有时间再写一下
