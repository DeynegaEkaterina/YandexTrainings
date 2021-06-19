#include <iostream>
#include "map"

using namespace std;
int main() {
    int n;
    string s1{};
    string s2{};
    map<string, string> book;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s1 >> s2;
    book.insert(make_pair(s1,s2));
    book.insert(make_pair(s2,s1));
    }
    string word;
    cin >> word;
    cout << book[word];
}
