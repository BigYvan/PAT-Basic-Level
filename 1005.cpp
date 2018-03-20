#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return  a > b;
}

int main(int argc, const char * argv[]) {
    int n, list[1000], visit[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    for (int i = 0; i <n; i++) {
        int a = list[i];
        while (a != 1) {
            if (a % 2 == 0) {
                a = a / 2;
            }else
                a = (a * 3 + 1) / 2;
            for (int j = 0; j < n; j++) {
                if (a == list[j]) {
                    visit[j] = 1;
                }
            }
        }
    }
    vector<int>reslut;
    for (int i = 0; i < n; i++) {
        if (visit[i] != 1) {
            reslut.push_back(list[i]);
        }
    }
    sort(reslut.begin(), reslut.end(), cmp);
    cout << reslut[0];
    for (int i = 1; i < reslut.size(); i++) {
        cout <<' ' << reslut[i];
    }
    
    return 0;
}
