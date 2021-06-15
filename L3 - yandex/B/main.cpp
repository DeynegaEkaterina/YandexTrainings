#include <unordered_set>
#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;


int main() {
    int integer;

    string firstSet;
    getline(cin, firstSet);
    stringstream line_1(firstSet);
    set<int> set1;
    while (line_1 >> integer) {
        set1.emplace(integer);
    }

    string secondSet;
    getline(cin, secondSet);
    stringstream line_2(secondSet);
    set<int> set2;
    while (line_2 >> integer) {
        if (set1.contains(integer)) {
            set2.insert(integer);
        }
    }

    for(const int& it : set2){
        std::cout << it << " ";
    }

    return 0;
}