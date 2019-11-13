#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name) {
    int right = 0,left = 0;

    
}

int main(){
    string str = "ABAAAAAAAAABB";
    

    while(str.find(' ') != string::npos)
    {
        str.erase(str.find(' '),1);
    }
    cout << str;
    
}