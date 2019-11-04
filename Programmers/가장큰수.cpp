#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a,string b){ //아니 비교할때 한자리씩 비교하지말고 그냥 앞뒤로 뒤앞으로 합쳐서 뭐가더큰지를 비교해야지 이걸 일일히 하나씩 비교하려니 힘들지 멍청아
    return a+b>b+a;
}

string solution(vector<int> numbers) {
    string ans = "";
    vector<string> stnum;
    for(int i=0;i<numbers.size();i++)
    {
        stnum.push_back(to_string(numbers[i]));
    }

    sort(stnum.begin(),stnum.end(),compare);

    // for(int i=0;i<stnum.size();i++){
    //     cout << stnum[i] << " ";
    // }

    for(int i=0;i<stnum.size();i++){
        ans += stnum[i];
    }
    if(ans[0] =='0'){
        return 0;
    }
    return ans;
  
}
//[6, 10, 2]	6210
// [3, 30, 34, 5, 9]	9534330
int main(){

    vector<int> vec;
    vec.push_back(6);
    vec.push_back(10);
    vec.push_back(2);

    vector<int> vec2;
    vec2.push_back(3);
    vec2.push_back(30);
    vec2.push_back(34);
    vec2.push_back(5);
    vec2.push_back(9);
    
    // solution(vec);
    // solution(vec2);

    cout << solution(vec) << endl;
    cout << solution(vec2) << endl;
    
}