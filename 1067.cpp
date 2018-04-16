#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string truePassword;
    int n;
    cin >> truePassword >> n;
    string writePassword;
    int cnt = 0;
    getchar();
    do {
        getline(cin, writePassword);
        if (writePassword == "#") break;
        if (writePassword == truePassword) {
            cout << "Welcome in" << endl;
            break;
        }else{
            cnt++;
            cout << "Wrong password: " << writePassword <<endl;
            if (cnt == n) {
                cout << "Account locked" <<endl;
                return 0;
            }
        }
    } while (1);
    return 0;
}
