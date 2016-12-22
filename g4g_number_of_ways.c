#include <stdio.h>
int f[81];
void generate(){
    int i;
    for(i=5;i<81;i++){
        f[i]=f[i-1]+f[i-4];
    }
}
int main(){
	int t,n;
	scanf("%d",&t);
	f[0]=0;f[1]=1;f[2]=1;f[3]=1;f[4]=2;
	generate();
	while(t--){
		scanf("%d",&n);
		printf("%d\n",f[n]);
	}
    return 0;
}
