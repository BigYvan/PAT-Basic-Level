#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    vector<int>reslut;
    while (1) {
        cin >> a >> b;
        if (a * b != 0) {reslut.push_back(a * b);}
        reslut.push_back(b - 1);
        if (getchar() == '\n') {
            break;
        }
    }
    if (reslut[0] == -1) {
        cout << "0 0";
    }else{
        cout << reslut[0];
        for (int i = 1; i < reslut.size(); i++) {
            if (reslut[i] != -1) {
                cout << ' ' << reslut[i];
            }
        }
    }
    return 0;
}
