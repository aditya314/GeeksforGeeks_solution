#include <stdio.h>
int main(){
int t,n,s,temp,d;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    s=0;
    temp=n;
    while(n>0){
        d=n%10;
        s=s+d;
        n=n/10;
    }
    if(temp%s==0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}
return 0;
}
