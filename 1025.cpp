#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int start, end;
    int data;
};

int main(int argc, const char * argv[]) {
    int  number, reverseIndex;
    int beginAddre;
    scanf("%d%d%d",&beginAddre,&number,&reverseIndex);
    vector<node>TempList, list;
    for (int i = 0; i < number; i++) {
        node temp;
        scanf("%d%d%d",&temp.start,&temp.data,&temp.end);
        TempList.push_back(temp);
    }
    while (beginAddre != -1) {
        for (int i = 0; i < TempList.size(); i++) {
            if (TempList[i].start == beginAddre) {
                list.push_back(TempList[i]);
                beginAddre = TempList[i].end;
            }
        }
    }
    for (int i = 0; i < (list.size() - list.size() % reverseIndex); i += reverseIndex) {
        reverse(list.begin() + i, list.begin() + i + reverseIndex);
    }
    for (int i = 0; i < list.size() - 1; i++) {
        printf("%05d %d %05d\n",list[i].start,list[i].data,list[i + 1].start);
    }
    printf("%05d %d -1\n",list[list.size() - 1].start,list[list.size() - 1].data);
    return 0;
}
