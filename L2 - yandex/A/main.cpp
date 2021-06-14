#include <iostream>
#include <vector>

void mono(std::string s){

    std::vector<int> v;
    std::string tmp;
    for (int i = 0; i <= s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
        tmp = tmp +s[i];
        } else if(!(s[i] >= '0' && s[i] <= '9')){
            if (tmp.empty() == false) {
                v.push_back(std::stoi(tmp));
                tmp = "";
            }
        }
    }

    int count = 0;
    for(int k = 0; k < v.size();k++ ){
        if(v[k] < v[k+1]){
            count++;
        }
    }

    if(count == v.size() - 1){
        std::cout << "YES" << std::endl;
    } else  std::cout << "NO" << std::endl;
}

int main(){

    std::string  s;
    getline(std::cin, s);
    mono(s);
}