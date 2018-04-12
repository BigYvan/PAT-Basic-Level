#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    double r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;
    double s = 0.0, x = 0.0;
    s = r1 * r2 * cos(p1) * cos(p2) - r1 * r2 * sin(p1) * sin(p2);
    x = r1 * r2 * cos(p1) * sin(p2) + r2 * r1 * sin(p1) * cos(p2);
    if (s + 0.005 >= 0 && s < 0)
        printf("0.00");
    else
        printf("%.2f", s);
    if(x >= 0)
        printf("+%.2fi", x);
    else if (x + 0.005 >= 0 && x < 0)
        printf("+0.00i");
    else
        printf("%.2fi", x);
    return 0;
}
