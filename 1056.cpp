#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        sum += s * 10 + s;
    }
    printf("%d", sum * (n - 1));
    return 0;
}
