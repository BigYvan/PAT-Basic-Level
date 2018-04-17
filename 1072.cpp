#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    vector<int>a(m);
    int problemStu = 0, problemObj = 0;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        string name;
        int num;
        cin >> name >> num;
        int flag = 1;
        for (int j = 0; j < num; j++) {
            int obj;
            cin >> obj;
            for (int k = 0; k < m; k++) {
                if (a[k] == obj) {
                    if (flag == 1) {
                        cout << name << ":";
                    }
                    printf(" %04d",obj);
                    flag = 0;
                    problemObj++;
                }
            }
        }
        if (flag == 0) {
            problemStu++;
            cout << endl;
        }
    }
    cout << problemStu << " " << problemObj << endl;
    return 0;
}
//第一次被格式卡了好几次
