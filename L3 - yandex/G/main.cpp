#include <iostream>
#include "utility"
#include "set"

using namespace std;

int main() {
    pair<int, int> turtle;
    int n;
    cin >> n;
    if(n < 1 || n > 10000){ exit(0);}
    set<pair<int, int>> s;
    for(int i = 0; i != n; i++){
        cin >> turtle.first >> turtle.second;
        if(turtle.first >= 0 && turtle.second >= 0 && turtle.first+turtle.second+1 == n) {
           s.insert(turtle);
        } else {
            continue;
        }
    }
    std::cout << s.size();
}

