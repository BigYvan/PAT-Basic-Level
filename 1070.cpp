#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double reslut = a[0];
    for (int i = 1; i < n ; i++) {
        reslut = (reslut + a[i]) / 2;
    }
    cout << (int)reslut << endl;
}
//一开始以为每次串联后要继续进行排序，然后就超时了...
//后来发现每次串联后要除以2，所以就是最短的
