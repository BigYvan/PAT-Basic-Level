#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<int> allschool (n);
    for (int i = 0; i < n; i++) {
        int id, score;
        cin >> id >> score;
        allschool[id - 1] += score;
    }
    auto max = max_element(allschool.begin(), allschool.end());
    cout << distance(allschool.begin(), max) + 1 << ' ' << *max << endl;
    return 0;
}
