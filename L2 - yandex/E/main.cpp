#include <iostream>
#include "vector"
#include <algorithm>



void winner(std::string n, std::string s) {
    std::string tmp{};
    std::vector<int> v;
    int part;
    for (int i = 0, j = 0; i <= s.length(), j <= n.length(); i++, j++) {
        if((n[j] >= '0') && (n[j] <= '9')){
            tmp = tmp + n[j];
        }else if(!((n[j] >= '0') && (n[j] <= '9'))){
            part = std::stoi(tmp);
            std::cout << part;
            tmp = "";
        }

        if ((s[i] >= '0' && s[i] <= '9')) {
            tmp = tmp + s[i];
        } else if (!(s[i] >= '0' && s[i] <= '9')) {
            if (std::stoi(tmp) <= -1000000000 || std::stoi(tmp) >= 1000000000 ||
                (part < 3) || (part > 100000))
            {
                exit(0);
            }
            v.push_back(std::stoi(tmp));
            //std::cout << std::stoi(tmp) << " ";
            tmp = "";
        }
    }

    /*std::sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        std::cout <<  v[i] << " ";
    }

    std::vector<int> a;
    for (int i = 1; i < v.size() -1; i++){
        if ((v[i] > v[i+1]) && (v[i] <= v[i-1]) && (v[i]%10 == 5)) {
         //   std::cout << v[i] << " ";
            a.push_back(v[i]);
        }
    }

    int temp = a[0];
    for(int i = 0; i < a.size(); i++){
        if(a[i] > temp){
            temp = a[i];
        }
    }*/
  // std::cout << temp;





}

int main() {
    std::string n;
    std::string s;
    getline(std::cin, n);
    getline(std::cin, s);
    winner(n,s );
    return 0;
}
