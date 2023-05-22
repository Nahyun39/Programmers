#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long result = -1;
    long long int total = 0;
    
    for(int i=1; i<=count; i++){
        total += price * i;
    }
    
    result = total - money; 
    
    if(result <= 0) return 0;
    
    return result;
}