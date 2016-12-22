#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int p=1,ptr,c=0,i;
	int ar[]={0,1,2,3,4,5,6,7,8,9};
	for(i=0;i<s.length();){
        c=0;
		while(s[i]=='D' && i<s.length()){
            p++;
            c++;
            i++;
		}
		ptr=p;
        while(c!=0){
            cout<<ar[p--];
            c--;
        }
        cout<<ar[p];
        p=ptr;
        c=0;
        p++;
		while(s[i]=='I' && i<s.length()){
            cout<<ar[p];
            i++;
            p++;
		}
	}
	return 0;
}
