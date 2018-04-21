#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int minDis = 99999999, maxDis = 0, minId = 0, maxId = 0;
    for (int i = 0; i < n; i++) {
        int id, x, y;
        cin >> id >> x >> y;
        int temp = x * x + y * y;
        if (temp > maxDis) {
            maxDis = temp;
            maxId = id;
        }
        if (temp < minDis) {
            minDis = temp;
            minId = id;
        }
    }
    printf("%04d %04d\n", minId, maxId);
    return 0;
}
