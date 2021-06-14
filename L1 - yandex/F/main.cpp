#include <iostream>

int compare(int a, int b){
    if (a > b){
        return a;
    } else
        return b;
}
int main() {
    int a,b,c,d,e,f;
    std::cin >> a >> b >> c >> d;
    if (a > 1000 || b > 1000 || c > 1000 || d > 1000) {
        std::cout << "OUT OF RANGE" << std::endl;
    }
    int tmp;
    e=(a+c);
    f=compare(b,d);
    tmp = e*f;
    if((a+d)*compare(b,c) < tmp){
        e=(a+d);
        f=compare(b,c);
        tmp=e*f;
    }
    if((b+c)*compare(a,d) < tmp) {
        e=(b+c);
        f=compare(a,d);
        tmp=e*f;
    }
    if((b+d)*compare(a,c) < tmp) {
        e=(b+d);
        f= compare(a,c);
        tmp=e*f;
    }

    std::cout << e << " " << f << std::endl;
}
