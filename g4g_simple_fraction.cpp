#include <bits/stdc++.h>
using namespace std;
void reverse(string &s){
    int n=s.length(),i;
    for(i=0;i<n/2;i++){
        swap(s[i],s[n-1-i]);
    }
}
string to_string(int first){
    string s;
    if(first==0)
        s.push_back('0');
    else{
        while(first>0){
            s.push_back(first%10+'0');
            first/=10;
        }
        reverse(s);
    }
    return s;
}
string fractionToDecimal(int n,int d){
	string res="";
	int first,rem,rest;
	map<int,int> mp;
	mp.clear();
	first=n/d;
	res+=to_string(first);
	rem=n%d;
	if(rem==0){
		return res;
	}
	res+=".";
	while(rem!=0){
		if(mp.find(rem)!=mp.end()){
			res.insert(mp[rem],"(");
            res+=")";
            return res;
		}
        else{
			mp[rem]=res.length();
			rem*=10;
			rest=rem/d;
			res=res+to_string(rest);
			rem=rem%d;
		}
	}
	return res;
}
int main(){
	int t,n,d;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%d",&d);
		cout<<fractionToDecimal(n,d)<<"\n";
	}
}
