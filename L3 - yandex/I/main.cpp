#include <iostream>
#include "set"

using namespace std;
/*int main() {

    int N;
    std::string language;
    set<string> s;
    multiset<string> ms;
    cin >> N;
    if (N < 1 || N > 1000) { exit(0);}
    for(int i = 0; i < N; i++){
        int m;
        cin >> m;
        if (m < 1 || m > 500) { exit(0);}
        for(int j = 0; j < m; j++){
            std::cin >> language;
            ms.insert(language);
            if (!s.contains(language)){
                s.emplace(language);
            }
        }
    }

  set<string> commonLang;
    for (const string& it : s){
       for(const string& i : ms){
           if(ms.count(it) == N){
               commonLang.emplace(it);
           }
       }
    }
    cout << commonLang.size() << endl;
    for (const string& it : commonLang){
        cout << it << endl;
    }
    cout << s.size() << endl;
    for (const string& it : s){
        cout << it << endl;
    }

    return 0;
}*/
#include "fstream"
int main(){
    std::string line;

    std::ifstream in("/home/ekaterina/Downloads/011.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (cin)
        {
            std::cout << line << std::endl;
        }
    }
    in.close();     // закрываем файл

    std::cout << "End of program" << std::endl;
    return 0;




}
