#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    string mars1[13] = {"###", "jan", "feb", "mar", "apr", "may", "jun",
        "jly", "aug", "sep", "oct", "nov", "dec"};
    string mars2[13] = {"###", "tam", "hel", "maa", "huh", "tou", "kes",
        "hei", "elo", "syy", "lok", "mer", "jou"};
    for (int i = 0; i < n + 1; i++) {
        string a;
        getline(cin, a);
        if (isalpha(a[0])) {
            int high = 0, low = 0;
            if (a.size() > 3) {
                for (int i = 0; i < 13 ; i++) {
                    if (mars2[i][0] == a[0] && mars2[i][1] == a[1] && mars2[i][2] == a[2]) high = i;
                }
                for (int i = 0; i < 13; i++) {
                    if (mars1[i][0] == a[4] && mars1[i][1] == a[5] && mars1[i][2] == a[6]) low = i;
                }
            }else{
                for (int i = 0; i < 13; i++) {
                    if (mars1[i][0] == a[0] && mars1[i][1] == a[1] && mars1[i][2] == a[2]) low = i;
                    if (mars2[i][0] == a[0] && mars2[i][1] == a[1] && mars2[i][2] == a[2]) high = i;
                }
            }
            cout << high * 13 + low << endl;
        }
        if (a[0] >= '0' && a[0] <= '9'){
            int number = stoi(a);
            if (number == 0) {
                cout << "tret";
            }
            if (number / 13 != 0) cout << mars2[number / 13];
            if (number / 13 != 0 && number % 13 == 0) cout << endl;
            if (number / 13 != 0 && number % 13 != 0) cout << ' ';
            if (number % 13 != 0) cout << mars1[number % 13] << endl;;
        }
    }
    return 0;
}
