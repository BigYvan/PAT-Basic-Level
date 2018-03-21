#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int B, S, G;
    G = n % 10;
    S = n / 10 % 10;
    B = n / 100;
    for (int i = 0; i < B; i++) {
        printf("B");
    }
    for (int i = 0; i < S; i++) {
        printf("S");
    }
    for (int i = 0; i < G; i++) {
        printf("%d", i + 1);
    }
    return 0;
}
