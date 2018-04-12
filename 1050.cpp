#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {return a > b;}

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int m = sqrt(N), n;
    while (N % m != 0) {
        m++;
    }
    n = N / m;
    if (n > m) swap(m, n);
    vector<vector<int>> b(m, vector<int>(n));
    sort(a.begin(), a.end(), cmp);
    int x = 0, y = 0, k = 0;
    b[x][y] = a[k++];
    while(k < N) {
        while(y + 1 < n && !b[x][y + 1]) b[x][++y] = a[k++];
        while(x + 1 < m && !b[x + 1][y]) b[++x][y] = a[k++];
        while(y - 1 >= 0 && !b[x][y - 1]) b[x][--y] = a[k++];
        while(x - 1 >= 0 && !b[x - 1][y]) b[--x][y] = a[k++];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(j != 0) printf(" ");
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
