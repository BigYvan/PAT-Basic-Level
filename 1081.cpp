#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        string temp;
        getline(cin, temp);
        if (temp.size() < 6) {
            printf("Your password is tai duan le.\n");
            continue;
        }
        int numFlag = 0, alFlag = 0, luanFlag = 0;
        for (int j = 0; j < temp.size(); j++) {
            if (isalpha(temp[j])) alFlag = 1;
            if (temp[j] >= '0' && temp[j] <= '9') numFlag = 1;
            if (!isalpha(temp[j]) && !(temp[j] >= '0' && temp[j] <= '9') && temp[j] != '.') luanFlag = 1;
        }
        if (luanFlag == 1) printf("Your password is tai luan le.\n");
        else if (numFlag == 0) printf("Your password needs shu zi.\n");
        else if (alFlag == 0) printf("Your password needs zi mu.\n");
        else    printf("Your password is wan mei.\n");
    }
    return 0;
}
