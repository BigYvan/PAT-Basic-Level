#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int T, K;
    cin >> T >> K;
    for (int i = 0; i < K; i++) {
        int n1, b, t, n2;
        cin >> n1 >> b >> t >> n2;
        if (t > T) {
            printf("Not enough tokens.  Total = %d.\n", T);
            continue;
        }
        if (n1 > n2) {
            if (b == 0) {
                T = T + t;
                printf("Win %d!  Total = %d.\n", t, T);
            }else{
                T = T - t;
                if (T >= 0) {
                    printf("Lose %d.  Total = %d.\n", t, T);
                }
                if (T <= 0){
                    printf("Game Over.\n");
                    return 0;
                }
            }
        }else{
            if (b == 1) {
                T = T + t;
                printf("Win %d!  Total = %d.\n", t, T);
            }else{
                T = T - t;
                if (T >= 0) {
                    printf("Lose %d.  Total = %d.\n", t, T);
                }
                if (T <= 0){
                    printf("Game Over.\n");
                    return 0;
                }
            }
        }
    }
    return 0;
}
