#include <iostream>
#include "vector"
#include "algorithm"

// не проходит 4ый тест, надо делать чтение из файла
struct para{
    int a;
    int b;
};

int turtles(int n, std::vector<para> a){
int count = 0;
for (int i = 0; i < a.size(); i ++){
    if(a[i].a + a[i].b == (n - 1)){
        count++;
    }
}
    return count;
}


bool compare(para a, para b){
    if (a.a == b.a && a.b == b.b){
        return true;
    } else return false;
}

int main() {
    int n;
    std::cin >> n;
    if ((n > 10000) || (n < 1)) {exit(0);}
    para c;
    std::vector<para> va;

    for(int i=0; i < n; i++){
        std::cin >> c.a >> c.b;
        if (c.a > 10000  || c.a < 0 || c.b < 0 || c.b > 10000) { exit(0);}
        va.push_back(c);
    }

    std::vector<para>::iterator ip;
    ip = std::unique(va.begin(), va.end(), compare);
    va.resize(std::distance(va.begin(), ip));

    std::cout << turtles(n, va);
}

