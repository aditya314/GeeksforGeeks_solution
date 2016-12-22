#include <stdio.h>
int main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int r=1,c=0;
    while(1){
        c++;
        r=r%n;
        if(r==0){
            printf("%d\n",c);
            break;
        }
        r=r*10+1;
    }
}
return 0;
}
