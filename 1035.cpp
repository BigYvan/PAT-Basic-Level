#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

bool JugeSame(vector<int> a, vector<int> b, int n){
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            flag = 0;
        }
    }
    return flag;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<int>que1 (n), que2 (n);
    for (int i = 0; i < n; i++) {cin >> que1[i];}
    for (int i = 0; i < n; i++) {cin >> que2[i];}
    int i, j;
    for (i = 0; i < n - 1 && que2[i] <= que2[i + 1]; i++);
    for (j = i + 1; que1[j] == que2[j] && j < n; j++);
    if (j == n) {
        sort(que1.begin(), que1.begin() + i + 2);
        printf("Insertion Sort\n%d", que1[0]);
        for (int k = 1; k < que1.size() ; k++) {
            cout << ' '<< que1[k];
        }
    }else{
        int flag2 = 0;
        int k = 1;
        while (1) {
            k = k * 2;
            for (int i = 0; i < n / k; i++)
                sort(que1.begin() + i * k, que1.begin() + (i + 1) * k);
            sort(que1.begin() + n / k * k, que1.begin() + n);
            if (flag2 == 1) {
                printf("Merge Sort\n");
                cout << que1[0];
                for (int k = 1; k < n; k++) {
                    cout <<' ' << que1[k];
                }
                break;
            }
            if (JugeSame(que1, que2, n)) {
                flag2 = 1;
            }
        }
    }
    return 0;
}
