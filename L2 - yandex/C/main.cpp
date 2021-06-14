#include <iostream>


void nearer(int size, char* str){

    for(int i = 0; i < size; i ++){
        std::cout << str[i] << " ";
    }

}



int main() {
    int size = 5;
    char str[size];
    std::cin.get(str, size);
    nearer(5, str);
    return 0;
}
