#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct person{
    string name;
    int yyyy, mm, dd;
};
bool cmp (person a, person b){
    if (a.yyyy != b.yyyy) {
        return a.yyyy < b.yyyy;
    }else{
        if (a.mm != b.mm) {
            return a.mm < b.mm;
        }else{
            return a.dd < b.dd;
        }
    }
}

int main(int argc, const char * argv[]) {
    int n ;
    cin >> n;
    vector<person>list;
    if (n == 0) {
        printf("0");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        person temp;
        cin >> temp.name;
        scanf("%d/%d/%d", &temp.yyyy, &temp.mm, &temp.dd);
        if ((temp.yyyy > 1814 && temp.yyyy < 2014) || (temp.yyyy == 1814 && temp.mm > 9)||(temp.yyyy == 1814 && temp.mm == 9 && temp.dd >= 6)||(temp.yyyy == 2014 && temp.mm < 9)||(temp.yyyy == 2014 && temp.mm == 9 && temp.dd <= 6)) {
            list.push_back(temp);
        }
    }
    sort(list.begin(), list.end(), cmp);
    if (list.size() == 0) {
        printf("0");
    }else
        cout << list.size() << " " << list[0].name << " " << list[list.size() - 1].name;
    return 0;
}
//注意在范围内的人数为0的输出即可
