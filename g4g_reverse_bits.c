#include <stdio.h>
unsigned int reverseBits(unsigned int n){
	unsigned int N_O_B=sizeof(n)*8;
	unsigned int rev=0,i;
	for(i=0;i<N_O_B;i++){
		if((n)&(1<<i)){
			rev|=(1<<(N_O_B-1-i));
		}
	}
	return rev;
}
int main(){
	unsigned int t,n;
	scanf("%u",&t);
	while(t--){
		scanf("%u",&n);
		printf("%u\n",reverseBits(n));
	}
	return 0;
}
