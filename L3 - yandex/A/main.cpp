#include <iostream>
#include "algorithm"
#include "unordered_set"

int A(std::string s) {

    std::unordered_set<int> v;
    std::string tmp;

    for (int i = 0; i <= s.length(); i++) {
        if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-') {
            tmp = tmp + s[i];
        } else if (!(s[i] >= '0' && s[i] <= '9')) {
            if (!tmp.empty()) {
                v.emplace(std::stoi(tmp));
                tmp = "";
            }
        }
    }
    if(v.size() > 100000) {exit(0);}
    return v.size();
}


int main() {
   std::string str;
   getline(std::cin, str);
   std::cout << A(str);
   return 0;
}



