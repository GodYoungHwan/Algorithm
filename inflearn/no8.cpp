#include <iostream>

using namespace std;

int main()
{
    char a[30];

    int right , left;
    bool sol = false;

    cin >> a;
    if(a[0] == ')' || a[strlen(a)-1] == '(') 
        {
            cout << "NOo";
        }
    else{
        for(int i =0 ;a[i] != '\0'; i++)
        {
            if(a[i] == '(') right++;
            else left++;
        }

        if(right == left) cout << "YES";
        else cout << "NO";
    }


}

// #include<stdio.h>
// using namespace std;
// int main(){
// 	//freopen("input.txt", "rt", stdin);
// 	char a[100];
// 	int i, cnt=0;
// 	scanf("%s", &a);
// 	for(i=0; a[i]!='\0'; i++){
// 		if(a[i]=='(') cnt++;
// 		else if(a[i]==')') cnt--;
// 		if(cnt<0) break;
// 	}
// 	if(cnt==0) printf("YES\n");
// 	else printf("NO\n");
// 	return 0;
// }