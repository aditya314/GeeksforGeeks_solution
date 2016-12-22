#include <stdio.h>
#include <math.h>
int u[100001]={0};
int ugly[505];
void uglyGenerator(){
	int i,j,k;
	for(i=0;pow(2,i)<100001;i++){
		for(j=0;pow(2,i)*pow(3,j)<100001;j++){
			for(k=0;pow(2,i)*pow(3,j)*pow(5,k)<100001;k++){
				u[(int)(pow(2,i)*pow(3,j)*pow(5,k))]=1;
			}
		}
	}
	j=0;
	for(i=0;i<100001;i++){
		if(j>503){
			break;
		}
		if(u[i]){
			ugly[++j]=i;
		}
	}
}
int main(){
	int t,n;
	scanf("%d",&t);
	uglyGenerator();
	while(t--){
		scanf("%d",&n);
		printf("%d\n",ugly[n]);
	}
	return 0;
}
