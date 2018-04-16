#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    double max_ = 0.0;
    for (int i = 0; i < n; i++) {
        int a, b;
        double temp;
        cin >> a >> b;
        temp = sqrt(a * a + b * b);
        if (temp > max_) max_ = temp;
    }
    printf("%.2f", max_);
    return 0;
}
