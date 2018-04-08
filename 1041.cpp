#include <iostream>
#include <vector>
using namespace std;

struct studnt{
    string id;
    int a;
    int b;
};

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<studnt> pat (n);
    for (int i = 0; i < n; i++) {
        cin >> pat[i].id >> pat[i].a >> pat[i].b;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int inquire = 0;
        cin >> inquire;
        for (int j = 0; j < n ; j++) {
            if (inquire == pat[j].a) {
                cout << pat[j].id << ' ' << pat[j].b << endl;
            }
        }
    }
    return 0;
}
