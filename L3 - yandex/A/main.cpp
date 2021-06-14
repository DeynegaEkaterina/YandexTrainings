#include <iostream>
#include "vector"
#include "algorithm"
int A(std::string s) {

    std::vector<int> v;
    std::string tmp;
    int count = 0;

    for (int i = 0; i <= s.length(); i++) {
        if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-') {
            tmp = tmp + s[i];
        } else if (!(s[i] >= '0' && s[i] <= '9')) {
            if (!tmp.empty()) {
                v.push_back(std::stoi(tmp));
                tmp = "";
            }
        }
    }
    if(v.size() > 100000) {exit(0);}

    std::sort(v.begin(), v.end());
    for(int j = 0; j < v.size(); j++){
        if(v[j] != v[j+1]){
            count++;
        }
    }
    return count;
}






int main() {
   std::string str;
   getline(std::cin, str);
   std::cout << A(str);
   return 0;
}
