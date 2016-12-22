#include <bits/stdc++.h>
using namespace std;
char getChar(int d){
	return ((char)(d+65));
}
string getColumn(long long n){
	string res="";
	int d;
	while(n>0){
		n--;
		d=n%26;
		res=getChar(d)+res;
		n=n/26;
	}
	return res;
}
int main(){
	int t;
	scanf("%d",&t);
	long long n;
	while(t--){
		scanf("%lld",&n);
		cout<<getColumn(n)<<"\n";
	}
	return 0;
}
