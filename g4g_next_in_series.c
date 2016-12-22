#include <stdio.h>
double returnNextTerm(double ar[],int n){
	if(n==2){
		return 2*ar[1]-ar[0];
	}
	double d1,d2;
	d1=ar[1]-ar[0];
	d2=ar[2]-ar[1];
	if(d1==d2){
		return ar[n-1]+d1;
	}
	else{
	    d1=ar[1]/ar[0];
        d2=ar[2]/ar[1];
        if(d1==d2)
            return (ar[n-1])*d1;
	}
	if(ar[0]+ar[1]==ar[2]){
		return ar[n-2]+ar[n-1];
	}
    return -99999;
}
int main(){
	int t,n,i,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d\n",&n);
		double ar[n];
		for(i=0;i<n;i++){
			scanf("%lf",&ar[i]);
		}
		ans=returnNextTerm(ar,n);
		printf("%d\n",ans);
	}
	return 0;
}
