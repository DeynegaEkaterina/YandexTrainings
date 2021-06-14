#include <iostream>

int main() {
    int troom;
    int tcond;
    std::string mode;

    std::cin >> troom >> tcond;
    std::cin >> mode;

    if ( (troom > 50) || (troom < -50) || (tcond > 50) || (tcond < -50)){
        std::cout << "Wrong temperature range" << std::endl;
    }
    if (!((mode == "freeze") || (mode == "heat") || (mode == "auto") || (mode == "fan"))){
        std::cout << "Wrong mode";
    }

    if (mode == "freeze"){
        if (tcond >= troom)
        {std::cout << troom << std::endl;}
        else std::cout << tcond << std::endl;
    }
    else if (mode == "heat"){
        if (troom >= tcond)
        {std::cout << troom << std::endl;}
        else std::cout << tcond << std::endl;
    }
    else if (mode == "auto"){
    std::cout << tcond << std::endl;
    }
    else if (mode == "fan")
    {
        std::cout << troom << std::endl;
    }
    return 0;
}
