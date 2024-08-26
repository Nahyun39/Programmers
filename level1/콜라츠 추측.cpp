#include <string>
#include <vector>
using namespace std;

//오버플로우로 인한 문제로 곱하기 3과 +1을 하는 과정에서 int 범위를 넘어서기에 num을 long long으로 변형해야함 

int solution(int num) {
    long long n = num;
    int cnt = 0;
    
    while(cnt <= 500)
    {
        if(n == 1)
        {
            return cnt;
        }
        
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        cnt++;
    }
    
    return -1;
}