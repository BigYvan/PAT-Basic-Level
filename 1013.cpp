#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool JugePrime(int n){
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int begin, end;
    cin >> begin >> end;
    int count = 0;
    for (int i = 2; i < 9999999; i ++ ) {
        if (JugePrime(i) && count <= end) {
            count++;
            if (count > end) {
                break;
            }
            if ((count - begin) > 0 && (count - begin) % 10 == 0) {
                printf("\n");
            }
            if ((count - begin) >= 0 && (count - begin) % 10 != 0) {
                printf(" ");
            }
            if (count >= begin && count <= end) {
                printf("%d", i);
            }
        }
    }
}
