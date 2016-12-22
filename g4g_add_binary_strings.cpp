#include <bits/stdc++.h>
using namespace std;
string ans;
int getNum(char a){
	return ((int)(a-48));
}
char getChar(int n){
	return ((char)(n+48));
}
void add(string s1,string s2,int l1,int l2,int c){
	if(l1<=0 && l2<=0){
        if(c==1){
            ans=getChar(1)+ans;
            return;
        }
		return;
	}
	int a,b;
	if(l1>=1){
		a=getNum(s1[l1-1]);
	}
	else{
		a=0;
	}
	if(l2>=1){
		b=getNum(s2[l2-1]);
	}
	else{
		b=0;
	}
	ans=getChar(a^b^c)+ans;
	if(c==0){
        if(a==1 && b==1) {
            add(s1,s2,l1-1,l2-1,1);
        }
        else{
            add(s1,s2,l1-1,l2-1,0);
        }
	}
	if(c==1){
        if(a==0 && b==0){
            add(s1,s2,l1-1,l2-1,0);
        }
        else{
            add(s1,s2,l1-1,l2-1,1);
        }
	}
}
int main(){
	int t,l1,l2;
	cin>>t;
	string s1,s2;
	while(t--){
		ans="";
		cin>>s1;
		cin>>s2;
		l1=s1.length();
		l2=s2.length();
		add(s1,s2,l1,l2,0);
		cout<<ans<<"\n";
	}
	return 0;
}
