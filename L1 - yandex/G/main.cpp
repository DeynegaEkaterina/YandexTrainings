#include <iostream>

int main() {
    int N = 0;
    int K = 0;
    int M = 0;
    int count1 = 0;
    int count2 = 0;
    int count = 0;

    std::cin >> N >> K >> M;

    if(N == 0 || K == 0 || M == 0 || N > 200 ||  K > 200  || M > 200){
        std::cout << "OUT OF RANGE" << std::endl;
        exit(0);
    }

    if ((N < K) || (K < M)){
        std::cout << 0 << std::endl;
        exit(0);
    }
     while(N >= K) {
         count1 =  (N / K);
         N = N % K;
         count2 = count1 * (K / M);
         N = N + count1 * (K % M);
         count = count + count2;
     }
    std::cout << count << std::endl;
    return 0;
}
