#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow; //카펫 넓이
    
    for(int height=3; ; height++){
        int width = sum / height;
        
        if((width-2)*(height-2) == yellow){
            answer.push_back(width); //vector의 width 넣어줌
            answer.push_back(height); //vector의 height 넣어줌
            break; // 해당 값이 나오면 꼭 break 해줘야함. 아니면 반복문 반복되서 오류남
        }
    }
    return answer;
}