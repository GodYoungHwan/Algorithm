#include <iostream>
#include <queue>

using namespace std;
int n, k, tmp,cnt,tcnt,sol;
bool flag[100000];

struct pt{
    int pos;
    int cnt;
};

int main()
{
    queue<pt> q;
    cin >> n >> k;

    pt p = {n,0};
    q.push(p);

    flag[n] = true;

    while (!q.empty())
    {
        tmp = q.front().pos;
        tcnt = q.front().cnt + 1;
        q.pop();

        if(tmp == k) {
            sol = tcnt;
            break;}

        int plus = tmp+1;
        int minus = tmp -1;
        int jump = tmp*2;

        if(plus<100000&&!flag[plus]){
            flag[plus] = true;
            pt pt = {plus,tcnt};
            q.push(pt);
        }
        if(minus>0&&!flag[minus]){
            flag[minus] = true;
            pt pt = {minus,tcnt};
            q.push(pt);
        }

        if(!flag[jump]&&jump<100000)
        {
            flag[jump] = true;
            pt pt = {jump,tcnt};
            q.push(pt);
        }
    }
    cout << sol -1 ;
}