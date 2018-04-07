
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int a[101] = {0};
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        a[score]++;
    }
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int score_;
        cin >> score_;
        if (i != 0) {
            printf(" ");
        }
        printf("%d", a[score_]);
    }
    return 0;
}
