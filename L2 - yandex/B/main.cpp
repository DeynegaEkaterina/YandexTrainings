/*
 * По последовательности чисел во входных данных определите ее вид:

CONSTANT – последовательность состоит из одинаковых значений
ASCENDING – последовательность является строго возрастающей
WEAKLY ASCENDING – последовательность является нестрого возрастающей
DESCENDING – последовательность является строго убывающей
WEAKLY DESCENDING – последовательность является нестрого убывающей
RANDOM – последовательность не принадлежит ни к одному из вышеупомянутых типов

 * */


// в контесте не запускается


#include <iostream>
#include <vector>


void mono(std::string s) {
    std::vector<int> v;
    std::string tmp;
    bool flag = false;

    for (int i = 0; i <= s.length(); i++) {
        if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-') {
            tmp = tmp + s[i];
        } else if (!(s[i] >= '0' && s[i] <= '9')) {
            if (!tmp.empty() && std::stoi(tmp) != -200000) {
                if (std::stoi(tmp) <= 0 || std::stoi(tmp) >= 1000) { exit(0); }
                v.push_back(std::stoi(tmp));
                tmp = "";

            } //else if(std::stoi(tmp) == -200000){
                //flag = true;
            //}
        }
    }

    //if(!flag) {exit(0);}

    int a[v.size()];
    for (int k = 0; k != v.size() - 1; k++) {
        if (v[k] < v[k + 1]) {
            a[k] = 1;
        } else if (v[k] > v[k + 1]) {
           a[k] = -1;
        } else if (v[k] == v[k + 1]){
            a[k] = 0;
        }
    }

    int count0 =0;
    int count1 = 0;
    int countM1 = 0;
    for (size_t i = 0; i < v.size(); i++){

        if (a[i] == 0){
            count0 ++;
        } else if (a[i] == 1){
            count1++;
        } else if (a[i] == -1){
            countM1++;
        }
    }

    if (count1 > 0 && count0 == 0 && countM1 == 0) {
        std::cout << "ASCENDING" << std::endl;
    } else if (count1 > 0 && count0 > 0 && countM1 == 0) {
        std::cout << "WEAKLY ASCENDING" << std::endl;
    } else if (count1 == 0 && count0 == 0 && countM1 > 0) {
        std::cout << "DESCENDING" << std::endl;
    } else if (count1 == 0 && count0 > 0 && countM1 > 0) {
        std::cout << "WEAKLY DESCENDING" << std::endl;
    } else if (count1 == 0 && count0 > 0 && countM1 == 0) {
        std::cout << "CONSTANT" << std::endl;
    } else if ((count1 > 0 && count0 > 0 && countM1 > 0) || (count1 > 0 && count0 == 0 && countM1 > 0)) {
        std::cout << "RANDOM" << std::endl;
    } else if((count1 == 0 && count0 == 0 && countM1 == 0)){
        std::cout << "NONE" << std::endl;
    }
}

int main(){
    std::string s{};
    std::string str{};
    while(s != "-200000") {
        getline(std::cin, s);
        if(s != "-200000") {
            str = str + s + " ";
        }
    }
    mono(str);
    return 0;
}
