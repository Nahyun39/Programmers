#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int cnt1 =0, cnt2=0, cnt3=0;
    //찍는 방식 패턴
    int one[5] = {1,2,3,4,5};
    int two[8] = {2,1,2,3,2,4,2,5};
    int three[10] = {3,3,1,1,2,2,4,4,5,5};
    
    for(int i=0; i<answers.size(); i++){ //입력된 답과 찍은 답이 많은 수포자는 count
        if(answers[i] == one[i%5]) cnt1++;
        if(answers[i] == two[i%8]) cnt2++;
        if(answers[i] == three[i%10]) cnt3++;
    }
    
    vector <int> v(3);
    //v.assign(배열이름, 배열이름+배열크기) <- 배열로 벡터 할당
    v.assign({cnt1, cnt2, cnt3});
    //*max_element함수 사용, 벡터의 시작점 주소값부터 끝부분+1 주소값까지
    int max_score = *max_element(v.begin(), v.end());
    //최고점수와 동일한 점수 받은 사람 저장
    for(int i=0; i<3; i++){
        if(max_score == v[i]) answer.push_back(i+1);
    }
    return answer;
}