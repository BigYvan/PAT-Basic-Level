#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double c1, c2;
    cin >> c1 >> c2;
    double time_ = (c2 - c1) / 100;
    int hh = time_ / 3600;
    int mm = (time_ - hh * 3600) / 60;
    int ss = time_ - hh * 3600 - mm * 60 + 0.5;
    printf("%02d:%02d:%02d",hh, mm, ss);
    return 0;
}
