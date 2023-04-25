#include <string>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int column = 0;
    int row = 0;
    int answer = 0;
    
    for(int i=0; i<sizes.size(); i++){
        row = max(row, max(sizes[i][0], sizes[i][1]));
        column = max(column, min(sizes[i][0], sizes[i][1]));
    }
    
    answer = row * column;
    return answer;
}