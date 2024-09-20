#include <string>
#include <vector>
using namespace std;

string solution(string s) 
{
    string answer = "";
    int sz = s.size() / 2;
    
    if(s.size() % 2 == 0)
    {
        answer += s[sz-1];
        answer += s[sz];
    }
    else
    {
        answer = s[sz];
    }
    
    return answer;
}