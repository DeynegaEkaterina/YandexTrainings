#include <iostream>
#include "fstream"
#include "map"
using namespace std;

int main() {

    string line;
    string tmp{};
    map<string, int> frequency;
    ifstream in("input.txt");
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
                    ++frequency[tmp];
                    tmp = "";
                }
            }
        }
    }
    else {
        cout << "File is not opened" << endl;
    }

    frequency.key_comp();
    int max=0;
    string maxFrequencyWord{};
    for (const auto& [key, freq] : frequency){
        if (freq > max) {
            max = freq;
            maxFrequencyWord = key;
        }
    }
    cout << maxFrequencyWord;
    in.close();
    return 0;
}
