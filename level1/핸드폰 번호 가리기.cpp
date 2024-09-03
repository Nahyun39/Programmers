#include <string>
#include <vector>
using namespace std;

string solution(string phone_number) 
{
    string answer = "";
    int length = phone_number.size();
    
    for(int i = 0; i < length - 4; i++)
    {
        answer += "*";
    }
    
    for(int i = length - 4; i < length; i++)
    {
        answer += phone_number[i];
    }
    
    return answer;
}