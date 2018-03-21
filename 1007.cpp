#include <iostream>
#include <math.h>
using namespace std;

bool Juge_prime(int n){
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int n, result = 0;
    cin >> n;
    //i=5开始（判断i-2和i），不可从i=2（判断i和i+2）开始，会超出n的范围
    for (int i = 5; i <= n; i++) {
        if (Juge_prime(i-2) && Juge_prime(i)) {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}
