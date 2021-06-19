#include <iostream>
#include "fstream"

using namespace std;
#include "unordered_map"
int main() {

    string line;
    string tmp{};
    unordered_map<string, int> frequency;
    ifstream in("/home/ekaterina/CLionProjects/YandexTrainings/L4 - yandex/B/test.txt");
    if (in.is_open()) {
        while (!in.eof()) {
            getline(in, line);
            line = line + " ";
            for (int i = 0; i < line.size(); i++) {
                tmp = tmp + line[i];
               if (line[i] == ' ' ){
                   if(tmp == " ")
                   {
                       tmp = "";
                       continue;
                   }
                   cout << frequency[tmp] << ' ';
                   ++frequency[tmp];
                   tmp = "";
               }
                }
            }
        }
    else {
        cout << "File is not opened" << endl;
    }
    in.close();
    return 0;
}


