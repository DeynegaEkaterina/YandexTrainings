#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;


int main() {

    unordered_map<int,int> keyboard;
    int n, c;
    cin >> n;
    if(n < 1 || n > 1000) {exit(0);}
    for (int i = 1; i <= n; i++){
        cin >> c;
        keyboard.insert(make_pair(i, c));
    }


    int k,p;
    cin >> k;
    for(int j = 0; j < k; j++){
        cin >> p;
        --keyboard[p];
    }

    string isBroken;
    for (unsigned i = 1; i <= n; ++i) {
        isBroken = (keyboard[i] < 0)?("YES"):("NO");
        cout << isBroken << endl;
    }

    return 0;
}
