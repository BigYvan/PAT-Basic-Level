#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    cin >> a;
    int PATest[6] = {0};
    char chara[6] = {'P','A','T','e','s','t'};
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < 6; j++) {
            if (a[i] == chara[j]) {
                PATest[j]++;
            }
        }
    }
    int max_ = *max_element(PATest, PATest + 6);
    for (int i = 0; i < max_; i++) {
        for (int j = 0; j < 6; j++) {
            if (PATest[j] != 0) {
                cout << chara[j];
                PATest[j]--;
            }
        }
    }
    return 0;
}
