#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<string> a(n), b;
    int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int result = 0;
        for (int j = 0; j < 17; j++) {
            if (a[i][j] == 'X') {
                result += 10 * weight[j];
            }else
                result += weight[j] * (a[i][j] - '0');
        }
        if (M[result % 11] != a[i][17] ) {
            b.push_back(a[i]);
        }
    }
    if (b.empty()) {
        printf("All passed\n");
    }else{
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << endl;
        }
    }
    return 0;
}
