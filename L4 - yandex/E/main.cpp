#include <iostream>
#include "map"

using namespace std;
int main() {

    map<int,int> blocks;
    int n;
    int a, b;
    cin >> n;
    if(n < 1 || n >100000) {exit(0);}
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a < 1 || a >1000000000 || b < 1 || b > 1000000000) {exit(0);}
        if (blocks.contains(a)){
            blocks[a] = max(b, blocks[a]);
        }
        blocks.insert(make_pair(a,b));
    }

    long int maxHeight = 0;
    for (const auto& [key, value] : blocks){
        maxHeight += value;
    }
    cout << maxHeight;
    return 0;
}
