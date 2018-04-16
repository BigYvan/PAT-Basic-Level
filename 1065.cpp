#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int pair[100000] = {-1};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        pair[a] = b;
        pair[b] = a;
    }
    int m;
    cin >> m;
    vector<int>all (m), reslut;
    for (int i = 0; i < m; i++) {
        cin >> all[i];
    }
    for (int i = 0; i < m; i++) {
        int flag = 1;
        if (pair[all[i]] != -1) {
            for (int j = 0; j < m; j++) {
                if (all[j] == pair[all[i]]) {
                    flag = 0;
                }
            }
        }
        if (flag == 1) reslut.push_back(all[i]);
    }
    sort(reslut.begin(), reslut.end());
    cout << reslut.size() << endl;
    for (int i = 0;i < reslut.size() ; i++) {
        if (i != 0) cout << ' ';
        printf("%05d", reslut[i]);
    }
    return 0;
}
//不得说测试点考虑是多，一开始pair[]初始为0，测试点2就是过不去
//忽视了00000也是id中的一个
//另外输出要用0补全
