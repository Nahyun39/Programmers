#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) 
{
    vector<int> answer;
    vector<int> list;
    
    for(int i = 0; i < score.size(); i++)
    {
        list.push_back(score[i]);
        sort(list.begin(), list.end(), greater<>()); 
        
        if(k < list.size())
        {
            list.erase(list.begin()+k, list.end());
        }
        answer.push_back(list[list.size()-1]);
    }
    return answer;
}