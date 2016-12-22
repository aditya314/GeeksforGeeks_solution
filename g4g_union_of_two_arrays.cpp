#include <bits/stdc++.h>
using namespace std;
int ans[1001];
int k;
void unite(int a[],int b[],int n,int m){
	int i=0,j=0;
	k=0;
	while(i<n && j<m){
        if(a[i]==b[j]){
			ans[k]=a[i];
			i++;j++;k++;
		}
		else if(a[i]<b[j]){
			ans[k]=a[i];
            i++;k++;
		}
		else if(a[i]>b[j]){
			ans[k]=b[j];
			j++;k++;
		}
	}
	while(i<n){
		ans[k]=a[i];
		i++;k++;
	}
	while(j<m){
		ans[k]=b[j];
		j++;k++;
	}
}
int main(){
	int t,n,m,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		int a[n];
		int b[m];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+m);
		unite(a,b,n,m);
		for(i=0;i<k;i++){
			printf("%d ",ans[i]);
		}
		printf("\n");
	}
	return 0;
}
