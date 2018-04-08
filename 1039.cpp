#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string a, b;
    cin >> a >> b;
    int number = (int)b.size();
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (a[j] == b[i]) {
                a[j] = '#';
                number--;
                break;
            }
        }
    }
    if (number == 0) {
        cout << "Yes " << a.size() - b.size();
    }else
        cout << "No " << number;
    return 0;
}
