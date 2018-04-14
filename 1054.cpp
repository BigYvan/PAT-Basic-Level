#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, count_n = 0;
    double sum = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char a[50], b[50];
        double temp;
        cin >> a;
        sscanf(a, "%lf", &temp);
        sprintf(b, "%.2lf", temp);
        int flag = 0;
        for (int j = 0; j < strlen(a); j++) {
            if (a[j] != b[j]) flag = 1;
        }
        if (flag || temp < -1000 || temp > 1000) {
            cout << "ERROR: " << a << " is not a legal number"<< endl;
        }else{
            sum += temp;
            count_n++;
        }
    }
    if (count_n == 0) {
        cout << "The average of 0 numbers is Undefined"<< endl;
    }
    else if (count_n == 1){
        printf("The average of %d number is %.2f", count_n, sum / count_n);
    }
    else
        printf("The average of %d numbers is %.2f", count_n, sum / count_n);
    return 0;
}
