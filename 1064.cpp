#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<string>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int>friendNum;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < a[i].length(); j++) {
            sum += a[i][j] - '0';
        }
        int flag = 0;
        for (int j = 0; j < friendNum.size(); j++) {
            if (sum == friendNum[j]) flag = 1;
        }
        if (flag == 0) friendNum.push_back(sum);
    }
    sort(friendNum.begin(), friendNum.end());
    cout << friendNum.size() << endl;
    for (int i = 0; i < friendNum.size(); i++) {
        if (i != 0) cout << ' ';
        cout << friendNum[i];
    }
    return 0;
}
