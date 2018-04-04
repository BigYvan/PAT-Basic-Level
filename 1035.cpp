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
    for (int i = 0; i < n; i++) {
        cin >> que1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> que2[i];
    }
    int mid = n -1;
    for (; mid >= 0; mid--) {
        if (que1[mid] != que2[mid]) {
            break;
        }
    }
    int flag = 1;
    for (int i = 0; i < mid; i++) {
        if (que2[i] > que2[i + 1]) {
            flag = 0;
        }
    }
    if (flag == 1) {
        sort(que1.begin(), que1.begin() + mid + 2);
        printf("Insertion Sort\n%d", que1[0]);
        for (int i = 1; i < que1.size() ; i++) {
            cout << ' '<< que1[i];
        }
    }else{
        int flag2 = 0;
        for (int i = 1; pow(2, i) <= n ; i++) {
            int j = 0;
            for (; j + pow(2, i) < n; j = j + pow(2, i)) {
                sort(que1.begin() + j, que1.begin() + j + (int)pow(2, i));
            }
            sort(que1.begin() + j, que1.end());
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
