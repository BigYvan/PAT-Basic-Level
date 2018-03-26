#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string A, B;
    char a, b;
    cin >> A >> a >> B >> b;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] == a) {
            count1++;
        }
    }
    for (int i = 0; i < B.length(); i++) {
        if (B[i] == b) {
            count2++;
        }
    }
    int reslut1 = 0, reslut2 = 0;
    while (count1) {
        reslut1 = reslut1 * 10 + (a - '0');
        count1--;
    }
    while (count2) {
        reslut2 = reslut2 * 10 + (b - '0');
        count2--;
    }
    printf("%d", reslut1 + reslut2);
    return 0;
}
