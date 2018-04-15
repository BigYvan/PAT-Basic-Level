#include <iostream>
using namespace std;

void binary_(int a){
    int count_1 = 0, count_0 = 0;
    while (a) {
        a % 2 == 1 ? count_1++ : count_0++;
        a = a / 2;
    }
    cout << count_0 << ' ' << count_1;
}

int main(int argc, const char * argv[]) {
    string a;
    getline(cin, a);
    int sum = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') sum += a[i] - 'a' + 1;
        if (a[i] >= 'A' && a[i] <= 'Z') sum += a[i] - 'A' + 1;
    }
    binary_(sum);
    return 0;
}
