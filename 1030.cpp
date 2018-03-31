#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    long long P;
    int result = 0;
    scanf("%d%lld", &N, &P);
    vector<int> list(N);
    for (int i = 0; i < N; i++) {
        cin >> list[i];
    }
    sort(list.begin(), list.end());
    for (int i = 0; i < list.size(); i++) {
        for (int j = i + result; j < list.size(); j++) {
            if (list[i] * P >= list[j]) {
                if (j - i + 1 > result) {
                    result = j - i + 1;
                }
            }else
                break;
        }
    }
    cout << result;
    return 0;
}
