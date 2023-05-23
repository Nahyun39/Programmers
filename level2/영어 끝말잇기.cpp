#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<string> word;
    
    int num = 1;
    int cnt = 1;
    word.push_back(words[0]);
    
    for(int i=1; i<words.size(); i++){
        if(num == n){
            num = 1;
            cnt++;
        }
        else num++;
        //규칙에 맞지 않으면  
        if(words[i].front() != words[i-1].back() || find(word.begin(), word.end(), words[i]) != word.end()){
            return { num, cnt };
        }
        word.push_back(words[i]);
    }
    
    return {0, 0};
}