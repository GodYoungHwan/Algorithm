#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int> arr(26,-1);
    char alpa = 97;
    for(int i=0; i < arr.size();i++)
    {
        if(str.find(alpa) < 1000)
        {
            arr[i] = str.find(alpa);
        }

        cout << arr[i] << " ";
        alpa++;
    }
}