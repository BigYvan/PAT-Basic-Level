#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, D;
    double e;
    cin >> N >> e >> D;
    int possible_empty = 0, empty = 0;
    for (int i = 0; i < N; i++) {
        int k;
        cin >> k;
        vector<double> a(k);
        int count_day = 0;
        for (int j = 0; j < k ; j++) {
            cin >> a[j];
            if (a[j] < e) count_day++;
        }
        if (count_day > (k / 2)) {
            if (k > D) {
                empty++;
            }else
                possible_empty++;
        }
    }
    printf("%.1f%% %.1f%%", (double)possible_empty / N * 100, (double)empty / N * 100);
    return 0;
}
