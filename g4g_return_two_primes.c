#include <stdio.h>
int prime[10001];
void sieve(){
    int i,j;
    for(i=2;i<10001;i++){
        prime[i]=1;
    }
	prime[0]=0;prime[1]=0;
	for(i=2;i<10001;i++){
		if(prime[i]){
			for(j=i*2;j<10001;j+=i){
				prime[j]=0;
			}
		}
	}
}
int getpair(int n){
    int i;
	for(i=2;i<10001;i++){
		if(prime[i] && prime[(n-i)]){
			return i;
		}
	}
}
int main(){
	int t,n,x;
	scanf("%d",&t);
	sieve();
	while(t--){
		scanf("%d",&n);
		x=getpair(n);
		printf("%d %d\n",x,(n-x));
	}
	return 0;
}
