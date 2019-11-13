#include <iostream>
#include <queue>

using namespace std;
// 우선순위 큐는 실제로는 priority_queue<자료형, 구현체, 비교 연산자>로 정의하는 것을 알 수 있다.
// 구현체는 주로 vector<int>
// less<int>가 단어 의미상 작은 것부터지만, 나오는 건 큰것부터고
// greater<int>는 '보다 큰' 이란 뜻이지만, 나오는 건 작은것부터
// vector의 내림차순은 greater<int>() 이렇게 괄호가 있음
int main(){
    // priority_queue<int,vector<int>,greater<int> > p;
    priority_queue<int,vector<int>,less<int> > p;

    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(5);

    while(!p.empty()){
        cout << p.top() << endl;
        p.pop();
    }
}