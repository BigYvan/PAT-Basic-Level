#include <iostream>
#include <algorithm>
using namespace std;

bool cmp (int a, int b){
    return a > b;
}

int Conv(int a[4]){
    int number = 0;
    for (int i = 0; i < 4; i++) {
        number = number * 10 + a[i];
    }
    return number;
}

int main(int argc, const char * argv[]) {
    int number;
    int a[4] ,b[4];
    cin >> number;
    do {
        for (int i = 0; i < 4; i++) {
            a[i] = b[i] = number % 10;
            number = number / 10;
        }
        sort(a, a + 4);
        sort(b, b + 4, cmp);
        number = Conv(b) - Conv(a);
        printf("%04d - %04d = %04d\n",Conv(b), Conv(a), number);
    }while(number != 6174 && number != 0);
    return 0;
}
