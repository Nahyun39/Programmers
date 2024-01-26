#include <string>
#include <vector>

using namespace std;

bool visited[250];

void dfs(int cur, int n, vector<vector<int>> computers){
    visited[cur] = true;
    
    for(int i=0; i<n; i++){
        //아직 방문하지 않았고 연결되어 있는 컴퓨터 번호일 때
        if(!visited[i] && computers[cur][i] == 1){
            dfs(i, n, computers);
        } 
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i, n, computers);
            answer++;
        }
    }
    
    return answer;
}