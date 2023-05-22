#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int sum;
    int cnt = 0;
    
    for(int i=1; i<=n; i++){
        sum = 0; //각 가지마다 0으로 초기화 
        for(int j=i; j<=n; j++){
            sum += j;
            if(sum == n){
                cnt++;
                break;
            }
            else if(sum > n) break;
        }
    }
    
    return cnt;
}