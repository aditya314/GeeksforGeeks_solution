#include <stdio.h>
int main(){
	int t,n,i,p=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int c[n];
        long long l[n];
        long long r[n];
		for(i=0;i<n;i++){
			scanf("%d",&c[i]);
		}
		l[0]=1;
		r[n-1]=1;
		for(i=1;i<n;i++){
			l[i]=l[i-1]*c[i-1];
		}
		for(i=n-2;i>=0;i--){
			r[i]=r[i+1]*c[i+1];
		}
		for(i=0;i<n;i++){
			printf("%lld ",(l[i]*r[i]));
		}
		printf("\n");
	}
}
