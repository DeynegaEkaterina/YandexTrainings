#include <iostream>
#include "fstream"

using namespace std;
int main() {

    string line;

    ifstream in("test.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while ()
        {
            cout << line << std::endl;
        }
    }
    in.close();		// закрываем файл

  //  std::cout << "End of program" << std::endl;
    return 0;
}
