#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct student{
    int id;
    int d;
    int c;
};

bool cmp (student a, student b){
    if((a.d + a.c) == (b.d + b.c)){
        if (a.d == b.d) {
            return a.id < b.id;
        }
        return a.d > b.d;
    }
    else
        return (a.d + a.c) > (b.d + b.c);
}

int main(int argc, const char * argv[]) {
    int n, l, h;
    cin >> n >> l >> h;
    vector<student> classifty[4];
    for (int i = 0; i < n; i++) {
        student temp;
        cin >> temp.id >> temp.d >> temp.c;
//        if (temp.d >= h && temp.c >= h) {class1.push_back(temp);}
//        if (temp.d >= h && temp.c < h && temp.c >= l) {class2.push_back(temp);}
//        if (temp.d < h && temp.d >= l && temp.c < h && temp.c >= l && temp.d >= temp.c) {class3.push_back(temp);}
//        if (temp.d < h && temp.d >= l && temp.c >= l && temp.d <= temp.c) {class4.push_back(temp);}
        if (temp.d < l || temp.c < l) {
            continue;
        }
        else if (temp.d >= h && temp.c >= h)
            classifty[0].push_back(temp);
        else if (temp.d >= h && temp.c < h)
            classifty[1].push_back(temp);
        else if (temp.d < h && temp.c < h && temp.d >= temp.c)
            classifty[2].push_back(temp);
        else
            classifty[3].push_back(temp);
    }
    cout << classifty[0].size() + classifty[1].size() + classifty[2].size() + classifty[3].size() << endl;
    for (int i = 0; i < 4; i++) {
        sort(classifty[i].begin(), classifty[i].end(), cmp);
        for (int j = 0; j < classifty[i].size(); j++)
            printf("%d %d %d\n", classifty[i][j].id, classifty[i][j].d, classifty[i][j].c);
    }
    return 0;
}
//一开始创建的是4个vector，两个点运行超时
//创建vector[4]后即可，搞不懂
