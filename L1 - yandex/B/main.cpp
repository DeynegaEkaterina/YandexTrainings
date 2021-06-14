#include <iostream>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;
    if ((x <= 0) || (y <= 0) || (z <= 0)){
        std::cout << "Wrong parametres" << std::endl;
        exit(0);
    }
    if ((x+y >  z) && (x+z > y) && (z+y > x))
    {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
