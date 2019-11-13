#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int,vector<int>,greater<int> > p;
    int cnt=0;
    for(int i =0; i<scoville.size(); i++)
    {
        p.push(scoville[i]);
    }

    while(p.top()<K && p.size()>1)
    {
        int first = p.top();
        p.pop();
        int second = p.top();
        p.pop();
        int mix = first + second*2;
        p.push(mix);
        cnt++;
    }
    if(p.top()<K) return -1;
    return cnt;
}