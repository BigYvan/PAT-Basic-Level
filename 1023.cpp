#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num[10];
    for (int i = 0; i < 10; i++) {
        cin >> num[i];
    }
    for (int i = 1;i < 10 ; i++) {
        if (num[i] != 0) {
            printf("%d", i);
            num[i]--;
            break;
        }
    }
    for (int i = 0; i < 10; i++) {
        while (num[i] != 0) {
            printf("%d", i);
            num[i]--;
        }
    }
    
    return 0;
}
