
#include <iostream>
using namespace std;

bool cmpl(int a1, int a2, int a3, int b1, int b2, int b3){
    if (a1 != b1) {
        return a1 <= b1;
    }else{
        if (a2 != b2) {
            return a2 <= b2;
        }else
            return a3 <= b3;
    }
}

int main(int argc, const char * argv[]) {
    int a1, a2, a3, b1, b2, b3, c1, c2, c3;
    scanf("%d.%d.%d %d.%d.%d", &a1, &a2, &a3, &b1, &b2, &b3);
    if(!cmpl(a1, a2, a3, b1, b2, b3)){
        swap(a1, b1);
        swap(a2, b2);
        swap(a3, b3);
        printf("-");
    }
    if (b3 - a3 < 0) {
        c3 = b3 + 29 - a3;
        b2 = b2 - 1;
    }else
        c3 = b3 - a3;
    if (b2 - a2 < 0) {
        c2 = b2 + 17 - a2;
        b1 = b1 - 1;
    }else
        c2 = b2 - a2;
    c1 = b1 - a1;
    printf("%d.%d.%d", c1, c2, c3);
    return 0;
}
