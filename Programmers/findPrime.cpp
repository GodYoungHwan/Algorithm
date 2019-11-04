#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int arr[7];
int cnt;

using namespace std;

bool isPrime(int in)
{
    if(in == 1){
        return false;
    }
    if(in == 2)
    {
        return true;
    }
    for(int i=2; i*i<=in;i++)
    {
        if(in%i == 0)
        {
            return false;
        }
    }
    return true;
}

bool compare(char a,char b)
{
    return a > b;
}

bool checkNumbers(int in,string num){
    vector<bool> flag(num.size());
    bool use;
    while(in != 0)
    {   
        int t = in%10;
        use = false;
        for(int i =0 ;i < num.size(); i++)
        {   
            if(!flag[i] && t == num[i] - 48)
            {   
                flag[i] = true;
                use = true;
                break;
            }
        }
        in = in/10;
        
        if(!use){
            return false;
        }
        
    }
    return true;
}

bool checkNumber(int i,string numbers) {
	bool flag = false;
	vector<bool> visit(numbers.length());
	while (i != 0) {
		flag = false;
		int temp = i % 10;
		for (int j = 0; j <= numbers.length(); j++) {
			if (temp == numbers[j]-'0'&&visit[j]==0) {
				flag = true;
				visit[j] = 1;
				break;
			}
		}
		if (flag == false)
			return false;

		i /= 10;
	}

	return true;
}

int solution(string numbers) {
    string temp = numbers;

    sort(temp.begin(),temp.end(),compare);
    
    int max = stoi(temp); //71
    
    for(int i=1 ; i<=max; i++)
    {
        if(isPrime(i)){
            if(checkNumber(i,numbers)){
                cnt++;
            }
        }
    }
    
    
    return cnt;
}

int main(){
    int sol;
    string num = "17";
    // sol = solution(num);
    // cout << sol;

    
    cout << checkNumbers(17,num);
    cout << checkNumbers(71,num);
    cout << checkNumbers(7,num);
    

}