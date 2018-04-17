#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int m, n, s;
    cin >> m >> n >> s;
    if (m < s || m == 0) {
        cout << "Keep going..." << endl;
        return 0;
    }
    vector<string>a;
    getchar();
    for (int i = 0; i < m; i++) {
        string temp;
        getline(cin, temp);
        int flag = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == temp) {
                flag = 1;
                s++;
            }
        }
        if (i == s - 1 && flag == 0) {
            cout << temp << endl;
            a.push_back(temp);
            s += n;
        }
    }
    return 0;
}
