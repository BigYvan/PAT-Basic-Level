#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<string> words;
    string a;
    while (1) {
        cin >> a;
        words.push_back(a);
        if (getchar() == '\n') {
            break;
        }
    }
    reverse(words.begin(),words.end());
    cout << words[0];
    for (int i = 1; i < words.size(); i++) {
        cout << ' ' << words[i];
    }
    return 0;
}
//用stack更好，但第一想法是调用reverse函数=。=
