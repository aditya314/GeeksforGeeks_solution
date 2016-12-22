#include <stdio.h>
int ispower(int x,int y){
    if(y==1){
        return 1;
    }
    if(x==1 && y!=1){
        return 0;
    }
    int p=x;
    while(p<=y){
        if(p==y){
            return 1;
        }
        p=p*x;
    }
    return 0;
}
int main(){
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        printf("%d\n",ispower(x,y));
    }
    return 0;
}
