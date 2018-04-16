#include <iostream>
using namespace std;

bool jugeSimple(int a, int b){
    for (int i = 2; i <= a; i++) {
        if (b % i == 0 && a % i == 0) return 0;
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int n1, m1, n2, m2, K;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &K);
    if (n1 * m2 > n2 * m1) {
        swap(n1, n2);
        swap(m1, m2);
    }
    double a, b;
    a = (double)n1 * K / m1;
    b = (double)n2 * K / m2;
    int cnt = 0;
    for (int i = a + 1; i < b ; i++) {
        if (jugeSimple(i, K)){
            if (cnt != 0) printf(" ");
            cnt++;
            printf("%d/%d", i , K);
        }
    }
    return 0;
}
//第二个测试点不过：要考虑两个分数的大小问题，没有说明第一个一定比第二个小！！！！！
