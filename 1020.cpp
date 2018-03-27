#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct yuebi{
    double number;
    double profit, averProfit;
};

bool cmp (yuebi a, yuebi b){
    return a.averProfit > b.averProfit;
}

int main(int argc, const char * argv[]) {
    int n = 0, total = 0;
    cin >> n >> total;
    vector<yuebi>a (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].number;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i].profit;
        a[i].averProfit = a[i].profit / a[i].number;
    }
    sort(a.begin(),a.end(), cmp);
    double temp = 0.0;
    double reslut = 0.0;
    for (int i = 0; i < n; i++) {
        if (temp + a[i].number <= total) {
            reslut += a[i].profit;
            temp += a[i].number;
        }else{
            reslut += (total - temp) * a[i].averProfit;
            break;
        }
    }
    printf("%.2f", reslut);
    return 0;
}
//真的奇怪，测试点3一直不过，把数量的整数改为浮点数就过了
