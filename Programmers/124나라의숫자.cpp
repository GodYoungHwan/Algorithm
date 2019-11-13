#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    char arr[3] = {'4','1','2'};
    string ans = "";
    while(n > 0)
    {
        int mod = n % 3;
        n /= 3;
        if(mod == 0) n--;
        ans = arr[mod] + ans;
    }
    return ans;
}

// 나머지가 0,1,2 순으로 묶을수있다. 나머지가 0일때 몫이 달라짐 이를 맞춰주기위해 몫을 1씩빼준다.
// 이렇게하면 몫이 3개씩 끊어지게 할수있다.