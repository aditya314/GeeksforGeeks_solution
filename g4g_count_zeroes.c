#include <stdio.h>
#include <math.h>
long long findCountUpto(int d){
    long long i,totalCount=0;
    for(i=1;i<=d;i++){
        totalCount=totalCount+(9*(pow(10,(i-1))-pow(9,(i-1))));
    }
    return totalCount;
}
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",findCountUpto(n));
	}
    return 0;
}
