#include <iostream>
#include <vector>


using namespace std;

int main(){
    int n , temp , now_height;

    vector<int> arr,ans; 

    
    cin >> n;

    for(int i=0 ;i<n; i++)
    {
        cin >> temp;

        arr.push_back(temp);
        ans.push_back(0);
    }

    for(int i = arr.size()-1; i >= 0; i--)
    {
        now_height = arr[i];
        for(int j = i-1; j>=0 ; j--)
        {
            temp = arr[j];
            if(temp>now_height){
                ans[i] = j+1;
                break;
            }
        }
    }

    for(int i = 0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
}

//5 6 9 5 7 4