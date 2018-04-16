#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool jugePrime(int n){
    for (int i = 2; i <= sqrt(n) ; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<int>a(n), b(10000);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int findId;
        int flag = 0;
        cin >> findId;
        if (b[findId] == 1) {
            printf("%04d: Checked\n", findId);
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (findId == a[j]) {
                flag = 1;
                b[findId] = 1;
                if (j == 0) {
                    printf("%04d: Mystery Award\n", a[j]);
                }else if (jugePrime(j + 1)){
                    printf("%04d: Minion\n", a[j]);
                }else
                    printf("%04d: Chocolate\n", a[j]);
            }
        }
        if (flag == 0) printf("%04d: Are you kidding?\n", findId);
    }
    return 0;
}
