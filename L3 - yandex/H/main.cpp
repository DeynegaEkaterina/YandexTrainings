#include <iostream>
#include "unordered_set"

using namespace std;

int main() {
    int x, y;
    int n;
    cin >> n;
    if(n < 1 || n > 1000){ exit(0);}
    unordered_set<int> s;
    for(int i = 0; i != n; i++){
        cin >> x >> y;
        if(x < 0 || y < 0 || x > 1000000000 || y > 1000000000) {exit(0);}
        if(!s.contains(x)) {
            s.insert(x);
        }
    }
    std::cout << s.size();
}
