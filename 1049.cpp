#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<double> a(n);
    for (int i = 0;i < n; i++) {
        cin >> a[i];
    }
    double reslut = 0.0;
//    for (int i = 0; i < n; i++) {
//        for (int j = i;j <= n; j++) {
//            reslut += accumulate(a.begin() + i, a.begin() + j, 0.0);
//        }
//    }
    for (int i = 0; i < n; i++) {
        reslut += a[i] * (n - i) * (i + 1);
    }
    printf("%.2f", reslut);
    return 0;
}
//注释部分超时，转为数学问题思考即可
