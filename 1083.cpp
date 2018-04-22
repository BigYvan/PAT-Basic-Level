#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    map<int, int>a;
    vector<int>b;
    for (int i = 1; i < n + 1; i++) {
        int temp;
        cin >> temp;
        int k = abs(i - temp);
        if(a[k] == 0) b.push_back(k);
        a[k]++;
        
    }
    sort(b.begin(), b.end(), cmp);
    for (int i = 0; i < b.size(); i++) {
        if(a[b[i]] != 1) cout << b[i] << ' ' << a[b[i]] << endl;
    }
    return 0;
}
