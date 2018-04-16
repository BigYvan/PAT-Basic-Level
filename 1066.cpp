#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m, n, a, b, h;
    cin >> m >> n >> a >> b >> h;
    int gl[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> gl[i][j];
            if (gl[i][j] >= a && gl[i][j] <= b) gl[i][j] = h;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0) printf(" ");
            printf("%03d", gl[i][j]);
        }
        printf("\n");
    }
    return 0;
}
