#include <string>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

bool visited[55];

int solution(string begin, string target, vector<string> words) {
    //벡터 words에 target이 없는 경우 0을 리턴하고 종료
    if(find(words.begin(), words.end(), target) == words.end()) return 0;
    
    queue<pair<string, int>> que;
    que.push({begin, 0}); //시작단어, 단계
    
    while(!que.empty()){
        string cur = que.front().first;
        int cnt = que.front().second;
        que.pop();
        
        if(target == cur) return cnt;
        
        for(int i=0; i<words.size(); i++){
            int diff = 0;
            for(int j=0; j<words[i].size(); j++){
                if(cur[j] != words[i][j]) diff++;
                if(diff == 2) break;
            }
            
            if(!visited[i] && diff == 1){
                que.push({words[i], cnt+1});
                visited[i] = true;
            }
        }
    }
}