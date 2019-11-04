#include <iostream>
#include <string>

using namespace std;

int main(){
    string num1,num2,rn1="",rn2="";

    cin >> num1 >> num2;

    for(int i =2; i>=0; i--)
    {
        rn1 += num1[i];
        rn2 += num2[i];
    }

    if(rn1 > rn2){
        cout << rn1 << endl;
    }
    else{
        cout << rn2 <<endl;
    }   
}