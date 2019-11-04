#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int> vec(26,0);

    for(int i=0 ;str[i] != '\0'; i++)
    {
        if(str[i]>90){
            str[i] = str[i]-32;
        }
        vec[str[i]-65]++;
    }
    int max = -1;
    char ans =0;
    for(int i=0 ;i<vec.size(); i++)
    {   
        if(vec[i] == max){
            ans = '?';
        }
        if(vec[i] > max){
            max = vec[i];
            ans = i + 65;
        }
    }
    cout << ans << endl;
}