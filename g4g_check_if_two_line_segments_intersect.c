#include <stdio.h>
struct point{
    int x;
    int y;
};
int min(int x,int y){
    return (x<y)?x:y;
}
int max(int x,int y){
    return (x>y)?x:y;
}
int onSeg(struct point p,struct point q,struct point r){
    if(q.x<=max(p.x,r.x) && q.x>=min(p.x,r.x) && q.y<=max(p.y,r.y) && q.y>=min(p.y,r.y)){
        return 1;
    }
    return 0;
}
int ori(struct point p,struct point q,struct point r){
    int val;
    val=(q.y-p.y)*(r.x-q.x)-(q.x-p.x)*(r.y-q.x);
    if(val==0){
        return 0;
    }
    if(val>0){
        return 1;
    }
    return 2;
}
int isIntersecting(struct point p1,struct point q1,struct point p2,struct point q2){
    int o1,o2,o3,o4;
    o1=ori(p1,q1,p2);
    o2=ori(p1,q1,q2);
    o3=ori(p2,q2,p1);
    o4=ori(p2,q2,q1);
    if(o1!=o2 && o3!=o4){
        return 1;
    }
    if(o1==0 && onSeg(p1,p2,q1)){
        return 1;
    }
    if(o2==0 && onSeg(p1,q2,q1)){
        return 1;
    }
    if(o3==0 && onSeg(p2,p1,q2)){
        return 1;
    }
    if(o4==0 && onSeg(p2,q1,q2)){
        return 1;
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        struct point p1,p2,q1,q2;
        scanf("%d %d %d %d",&(p1.x),&(p1.y),&(q1.x),&(q1.y));
        scanf("%d %d %d %d",&(p2.x),&(p2.y),&(q2.x),&(q2.y));
        printf("%d\n",isIntersecting(p1,q1,p2,q2));
    }
return 0;
}
