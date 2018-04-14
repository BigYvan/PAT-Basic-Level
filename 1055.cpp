#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

struct person {
    string name;
    int height;
};

bool cmp(person a, person b) {
    if (a.height != b.height) {
        return a.height > b.height;
    }else
        return strcmp(a.name.c_str(), b.name.c_str()) < 0;
}

int main(int argc, const char * argv[]) {
    int n, k;
    cin >> n >> k;
    int m = n / k;
    vector<person>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].height;
    }
    sort(a.begin(), a.end(), cmp);
    int t = 0;
    vector<person> b(n % k + m);
    b[(n % k + m) / 2] = a[t++];
    int left = (n % k + m) / 2 - 1;
    int right = (n % k + m) / 2 + 1;
    int count_ = 1;
    while (count_ < n % k + m) {
        if (count_ < n % k + m) {
            b[left--] = a[t++];
            count_++;
        }
        if (count_ < n % k + m) {
            b[right++] = a[t++];
            count_++;
        }
    }
    for (int j = 0; j < (int)b.size(); j++) {
        if (j != 0) cout << ' ';
        cout << b[j].name;
    }
    cout << endl;
    for (int i = 1; i < k; i++) {
        vector<person> b(m);
        b[m / 2 ] = a[t++];
        int left = m / 2 - 1;
        int right = m / 2 + 1;
        int count_ = 1;
        while (count_ < m) {
            if (count_ < m) {
                b[left--] = a[t++];
                count_++;
            }
            if (count_ < m) {
                b[right++] = a[t++];
                count_++;
            }
        }
        for (int j = 0; j < (int)b.size(); j++) {
            if (j != 0) cout << ' ';
            cout << b[j].name;
        }
        cout << endl;
    }
    return 0;
}
