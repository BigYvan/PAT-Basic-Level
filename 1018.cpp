#include <iostream>
using namespace std;
int max_three(int a, int b, int c){
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int awin = 0, bwin = 0, ping = 0;
    int ac = 0, ab = 0, aj = 0;
    int bc = 0, bb = 0, bj = 0;
    for (int i = 0; i < n; i++) {
        char a, b;
        cin >> a >> b;
        if (a == 'C') {
            if (b == 'C') ping++;
            if (b == 'B') {
                bwin++;
                bb++;
            }
            if (b == 'J') {
                awin++;
                ac++;
            }
        }
        if (a == 'B') {
            if (b == 'C') {
                awin++;
                ab++;
            }
            if (b == 'B') {
                ping++;
            }
            if (b == 'J') {
                bwin++;
                bj++;
            }
        }
        if (a == 'J') {
            if (b == 'C') {
                bwin++;
                bc++;
            }
            if (b == 'B') {
                awin++;
                aj++;
            }
            if (b == 'J') {
                ping++;
            }
        }
    }
    cout << awin <<" "<< ping <<" "<< bwin <<endl;
    cout << bwin << " " << ping << " " << awin << endl;
    if (ab == max_three(ac, aj, ab)) {
        printf("B");
    }else if (ac == max_three(ac, aj, ab))
        printf("C");
    else
        printf("J");
    printf(" ");
    if (bb == max_three(bc, bj, bb)) {
        printf("B");
    }else if (bc == max_three(bc, bj, bb))
        printf("C");
    else
        printf("J");
    return 0;
}
