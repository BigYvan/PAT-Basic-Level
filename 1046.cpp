#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int a_1, a_2, b_1, b_2, count_a = 0, count_b = 0;
    for (int i = 0; i < n ; i++) {
        cin >> a_1 >> a_2 >> b_1 >> b_2;
        if (a_2 == a_1 + b_1 && b_2 != a_1 + b_1) count_b++;
        if (b_2 == a_1 + b_1 && a_2 != a_1 + b_1) count_a++;
    }
    cout << count_a << ' ' << count_b;
    return 0;
}
