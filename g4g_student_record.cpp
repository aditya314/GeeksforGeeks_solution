#include <bits/stdc++.h>
using namespace std;
vector <string> nm;
int m1[16];
int m2[16];
int m3[16];
double avg[16];
int main(){
	int t,n,maxi=0,ans,i;
	string s;
	cin>>t;
	while(t--){
		nm.clear();
		cin>>n;
		double maxavg=0.0;
		for(i=0;i<n;i++){
			cin>>s;
			nm.push_back(s);
			cin>>m1[i]>>m2[i]>>m3[i];
			avg[i]=(m1[i]+m2[i]+m3[i])/3.0;
			if(maxavg<=avg[i]){
				maxavg=avg[i];
				maxi=i;
			}
		}
		ans=maxavg;
		cout<<nm[maxi]<<" "<<ans<<"\n";
	}
	return 0;
}
