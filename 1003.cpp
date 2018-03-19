#include <iostream>
using namespace std;

void JugePAT(string cha){
    int pre = 0, mid = 0, fro = 0;
    int P = 0, T = 0;
    for (int i = 0; i < cha.size(); i++) {
        if (cha[i] == 'P' || cha[i] == 'A' || cha[i] == 'T') {
            if (cha[i] == 'P') {
                P++;
            }else if (cha[i] == 'T')
                T++;
            else{
                if (P == 0) {
                    pre++;
                }else if (P == 1 && T == 0)
                    mid++;
                else
                    fro++;
            }
        }else{
            printf("NO\n");
            return;
        }
    }
    if (pre * mid == fro && mid != 0 && P == 1 && T == 1) {
        printf("YES\n");
    }else
        printf("NO\n");
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cha;
        cin >> cha;
        JugePAT(cha);
    }
    return 0;
}
//可以用map<char, int> m 来存每个字符的数量
