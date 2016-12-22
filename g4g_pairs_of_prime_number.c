#include <stdio.h>
int prime[401];
void sieve(){
	int i,p;
	for(i=0;i<401;i++){
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for(i=2;i<401;i++){
		if(prime[i]){
			p=i;
			while(p<=400){
				p=p+i;
				prime[p]=0;
			}
		}
	}
}
void generatePairs(int n){
    int i,j;
	for(i=2;i<401;i++){
		if(prime[i]){
			for(j=2;j<401;j++){
				if(prime[j]){
					if(i*j<=n){
						printf("%d %d ",i,j);
					}
					else{
						break;
					}
				}
			}
		}
	}
}
int main(){
	int t,n;
	scanf("%d",&t);
	sieve();
	while(t--){
		scanf("%d",&n);
		generatePairs(n);
		printf("\n");
	}

}
