#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int f,cnt,i;
int solution(vector<int> priorities, int location) {
    queue<int> q;

    for(int i =0 ;i<priorities.size(); i++)
    {
        q.push(priorities[i]);
    }
    
    vector<int> st(priorities); //vector복사
    sort(st.begin(),st.end(),greater<int>()); //내림차순
    
        
        while(!q.empty())
        {
            f = st[i];
            int t = q.front();
            if(f == t){
                if(location == 0) {cnt++; break;}
                q.pop();
                i++;
                cnt++;
                location--;
                }
            else {
                 q.push(t);
                 q.pop();  
                 
                 location--;
                 if(location<0){
                     location = q.size()-1;
                 }
                 }

        }
    
    return cnt;
}

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(9);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    int l =0;
    int sol;

    sol = solution(vec,l);
    cout << sol;
}

// #include <string>
// #include <vector>
// #include <queue>
// #include <algorithm>

// using namespace std;

// int solution(vector<int> priorities, int location) {
//     queue<int> printer;                         //queue에 index 삽입.
//     vector<int> sorted;                         //정렬된 결과 저장용
//     for(int i=0; i<priorities.size(); i++) {
//         printer.push(i);
//     }
//     while(!printer.empty()) {
//         int now_index = printer.front();
//         printer.pop();
//         if(priorities[now_index] != *max_element(priorities.begin(),priorities.end())) {
//             //아닌경우 push
//             printer.push(now_index);
//         } else {
//             //맞는경우
//             sorted.push_back(now_index);
//             priorities[now_index] = 0;
//         }
//     }
//     for(int i=0; i<sorted.size(); i++) {
//         if(sorted[i] == location) return i+1;
//     }
// }