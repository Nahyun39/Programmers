#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string toBinary(int num, int len){ //이진수 구하는 함수 
    string tmp;
    
    for(int i=0; i<len; i++){
        tmp += to_string(num%2);
        num/=2;
    }
    reverse(tmp.begin(), tmp.end()); //뒤의 수부터 넣어져서 reverse 정렬 해주기 
    
    return tmp;
}


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> map1;
    vector<string> map2;
    string s;
    
    for(int i=0; i<n; i++){
        map1.push_back(toBinary(arr1[i], n)); //arr1의 이진수 push
        map2.push_back(toBinary(arr2[i], n)); //arr2의 이진수 push
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(map1[i][j] == '1' || map2[i][j] == '1') s+='#'; //map1이나 map2의 같은 위치를 비교하여 하나라도 '1'이면 '#'넣기
            else s+=' '; //아니면 공백넣기 
        }
        answer.push_back(s); //각 행의 문자열을 answer에 push
    }

    return answer;
}