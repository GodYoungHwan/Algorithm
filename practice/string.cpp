#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "YOUNG HWAN";
    for(int i =0 ;i<'z'-'a'; i++)
    {
        cout << i << " ";
    }
    
    // str.clear(); // str 클리어
    cout << str.substr(0,2) << endl; // 0~1번째까지 string return
    cout << str.substr(2) << endl; // 2번째부터 끝까지
    cout << str.substr(str.find("YOU")) << endl; //YOU를 포함해서 이후로 끝까지

    //a부터 n개 삭제 
    str.erase(0, 4); //인덱스 0부터 4개를 삭제한다.
    str.erase(2); //인덱스 2부터(포함) 다삭제한다.
    cout << str << endl;

    str.assign("YOUNG HWAN");
    //매개변수가 하나일 때는 그 위치에 있는 한 문자 삭제.
    //반복자가 가르키는 게 begin에서 하나 뒤에 있는거니까 O
    //즉 O삭제 
    str.erase(str.begin() + 1);
    cout << str << endl;

    str.assign("YOUNG HWAN");
    //반복자가 두 개 일경우는 한 글자가 아니라 범위 삭제
    //처음부터 처음에서 3칸 떨어진 지점까지이니까 YOU삭제 
    str.erase(str.begin(), str.begin()+3);
    cout << str << endl;

    string ss = "YOU";
    str.erase(str.find(ss),ss.size()); // string에서 원하는 문자 지우기
    cout << str;
}