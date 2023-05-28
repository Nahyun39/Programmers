#include <string>
#include <vector>

using namespace std;

// 일반 구현으로 찾으면 시간초과 -> 에라토스테네스의 체 방식 사용

int solution(int n) {
    
    int cnt=0;
    int is_prime[1000010];
    
    is_prime[1] = 0;
    
    for(int i=2; i<=n; i++) is_prime[i] = 1;
    
    for(int i=2; i*i<=n; i++){
        if(is_prime[i] == 0) continue; //이미 처리된 수면 넘어가기
        
        for(int j=i*i; j<=n; j+=i) is_prime[j] = 0;
    }
    
    for(int i=1; i<=n; i++){
        if(is_prime[i] == 1) cnt++;
    }
    
    return cnt;
}