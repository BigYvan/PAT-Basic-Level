#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    char c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        printf("%c", c);
    }
    printf("\n");
    for (int i = 0; i < n * 0.5 - 2; i++) {
        printf("%c", c);
        for (int j = 0; j < n - 2; j++) {
            printf(" ");
        }
        printf("%c\n", c);
    }
    for (int i = 0; i < n; i++) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
