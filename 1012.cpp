#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, a;
    int A1 = 0, A2 = 0, A5 = 0;
    double A4 = 0.0;
    vector<int> classifier[5];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        classifier[a % 5].push_back(a);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < classifier[i].size(); j++) {
            if (i == 0 && classifier[i][j] % 2 == 0) {A1 += classifier[i][j];}
            if (i == 1 && j % 2 == 0) {A2 += classifier[i][j];}
            if (i == 1 && j % 2 == 1) {A2 -= classifier[i][j];}
            if (i == 3) {A4 += classifier[i][j];}
            if (i == 4) {if(classifier[i][j] > A5) A5 = classifier[i][j];}
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != 0) {printf(" ");}
        if ((i == 0 && A1 == 0) || (i != 0 && classifier[i].size() == 0)) {printf("N"); continue;}
        if (i == 0) {
            printf("%d", A1);
        }
        if (i == 1) {
            printf("%d", A2);
        }
        if (i == 2) {
            printf("%d", (int)classifier[2].size());
        }
        if (i == 3) {
            printf("%.1lf", A4 / classifier[3].size());
        }
        if (i == 4) {
            printf("%d", A5);
        }
    }
    return 0;
}
