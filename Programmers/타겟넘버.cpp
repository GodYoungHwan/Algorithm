#include <string>
#include <vector>

using namespace std;

int ans=0;
void dfs(vector<int> num, int target, int sum, int idx){
    if(idx >= num.size()){
        if(sum==target) ans++;
        return 0;
    }
    dfs(num, target, sum+num[idx], idx+1);
    dfs(num, target, sum-num[idx], idx+1);   
}


int solution(vector<int> num, int target) {
    dfs(num, target, 0,0);
    return ans;
}
 