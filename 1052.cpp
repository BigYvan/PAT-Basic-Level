#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    int n;
    cin >> n;
    vector<string> hand, eye, mouth;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '[') {
            for (int j = i; j < a.size(); j++) {
                if (a[j] == ']'){
                    hand.push_back(a.substr(i + 1,j - i - 1));
                    break;
                }
            }
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '[') {
            for (int j = i; j < b.size(); j++) {
                if (b[j] == ']'){
                    eye.push_back(b.substr(i + 1,j - i - 1));
                    break;
                }
            }
        }
    }
    for (int i = 0; i < c.size(); i++) {
        if (c[i] == '[') {
            for (int j = i; j < c.size(); j++) {
                if (c[j] == ']'){
                    mouth.push_back(c.substr(i + 1,j - i - 1));
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int lhand, leye, mou, reye, rhand;
        cin >> lhand >> leye >> mou >> reye >> rhand;
        if (lhand > hand.size() || leye > eye.size() || mou > mouth.size() || rhand > hand.size() || reye > eye.size() || lhand < 1 || leye < 1 || mou < 1 || reye < 1 || rhand < 1) {
            cout<< "Are you kidding me? @\\/@\n";
        }else
            cout << hand[lhand - 1] << '(' << eye[leye - 1] << mouth[mou - 1] << eye[reye - 1] << ')' << hand[rhand - 1] << endl;

    }
    return 0;
}
