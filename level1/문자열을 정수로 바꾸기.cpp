#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    string str = "";
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '-')
        {
            str += '-';
        }
        else if(s[i] == '+')
        {
            str += '+';
        }
        else 
        {
            str += s[i];
        }
    }
    
    answer = stoi(str);
    
    return answer;
}