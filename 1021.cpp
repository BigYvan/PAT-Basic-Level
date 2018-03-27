#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    int count[10] = {0};
    cin >> a;
    for (int i = 0; i < a.length(); i++) {
        count[a[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            printf("%d:%d\n",i, count[i]);
        }
    }
    return 0;
}
