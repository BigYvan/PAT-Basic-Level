#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c, d;
    cin >> a >> b >> d;
    c = a + b;
    if (c == 0) {
        printf("0");
        return 0;
    }
    vector<int> num;
    while (c != 0) {
        num.push_back(c % d);
        c = c / d;
    }
    reverse(num.begin(), num.end());
    for (int i = 0; i < num.size(); i++) {
        printf("%d", num[i]);
    }
    return 0;
}
