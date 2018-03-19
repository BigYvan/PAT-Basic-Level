#include <iostream>

int main(int argc, const char * argv[]) {
    int n = 0, count = 0;
    scanf("%d", &n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }else
            n = (3 * n + 1) / 2;
        count++;
    }
    printf("%d", count);
    return 0;
}
