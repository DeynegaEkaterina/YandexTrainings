#include <iostream>
#include "vector"

std::string reWrite(std::string s){
    std::string str = "";
    for (int i = 0; i < s.length(); i ++){
        if(s[i] >= '0' && s[i] <='9'){
           str = str +s[i];
        }
    }
    return str;
}

std::string checkLength(std::string s){
    if( s.length() == 11){
        s = s.substr(1,10);
    } else if (s.length() == 7){
        s = "495" + s;
    }
    return s;
}

void check(std::string s1, std::string s2, std::string s3, std::string s4){
    std::vector<std::string> v;
    std::string s11 = reWrite(s1);
    std::string s22 = reWrite(s2);
    std::string s33 = reWrite(s3);
    std::string s44 = reWrite(s4);
    v.push_back(checkLength(s11));
    v.push_back(checkLength(s22));
    v.push_back(checkLength(s33));
    v.push_back(checkLength(s44));
    for(int i = 1; i < v.size(); i ++) {
        if (v[0] != v[i]) {
            std::cout << "NO" << std::endl;
        } else std::cout << "YES" << std::endl;
    }
}



int main() {
    std::string s1{};
    std::string s2{};
    std::string s3{};
    std::string s4{};

    std::cin >> s1;
    std::cin >> s2;
    std::cin >> s3;
    std::cin >> s4;

    check(s1, s2, s3, s4);
    return 0;
}
