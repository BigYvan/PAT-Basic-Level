#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student{
    string name;
    string id;
    int score;
};

bool cmp(student a, student b){
    return a.score > b.score;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<student>list;
    for (int i = 0; i < n; i++) {
        student one;
        cin >> one.name >> one.id >> one.score;
        list.push_back(one);
    }
    sort(list.begin(), list.end(), cmp);
    cout << list[0].name << " " << list[0].id << endl;
    cout << list[n - 1].name << " " << list[n - 1].id << endl;
    return 0;
}
