#include <iostream>

int main() {
    int a,b,c;
    float x;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if  (c < 0){
        std::cout << "NO SOLUTION" << std::endl;
        exit(0);
    }
    if ((a==0 && b==0 && c==0) || (a == 0 && b == c*c)){
        std::cout << "MANY SOLUTIONS" << std::endl;
        exit(0);
    }
    if (a == 0 &&  (b != 0 || c != 0)){
        std::cout << "NO SOLUTION" << std::endl;
        exit(0);
    }
    float d = static_cast<float>(c*c - b);
    float p = static_cast<float>(a);
    x = d/p;
    if (x - static_cast<int>(x) == 0) {
        x = static_cast<int>(x);
        std::cout << x << std::endl;
    } else
        std::cout << "NO SOLUTION" << std::endl;
    return 0;
}
