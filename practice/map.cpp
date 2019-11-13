#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,string> map;
    for(int i =0;i < 100; i++)
    {
        int t = i%3;
        if(t==0) t = 4;
        map.insert(make_pair(i,to_string(t)));
    }
    for(int i=0; i<map.size(); i++)
    {
        cout << map[i] << " ";
    }
}