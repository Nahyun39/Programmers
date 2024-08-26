#include <string>
#include <vector>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string snum = "";
    int num;
    
    for(int i = 0; i < seoul.size(); i++)
    {
        if(seoul[i] == "Kim")
        {
            num = i;
        }
    }
    snum = to_string(num);
    answer = "김서방은 " + snum + "에 있다";
    
    return answer;
}