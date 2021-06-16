#include <iostream>
#include "utility"
#include "set"

//не проходит тест 10, нужно сделать чтение данных из файла
using namespace std;


int main() {
    pair<int, int> turtle;
    int n;
    cin >> n;
    if(n < 1 || n > 10000){ exit(0);}
    set<pair<int, int>> s;
    for(int i = 0; i != n; i++){
        cin >> turtle.first >> turtle.second;
        if(turtle.first >=0 && turtle.second >= 0) {
            s.insert(turtle);
        }
    }
    int count;
    for(const pair<int,int>& it : s){
      if(it.first + it.second == n - 1){
          count++;
      }
    }
    std::cout << count;
}

