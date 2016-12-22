#include <stdio.h>
#include <math.h>
struct point{
    int x;
    int y;
};
double findDistance(int a,int b,int c, int d){
    double x;
    x=sqrt((pow(fabs(c-a),2)+pow(fabs(d-b),2)));
    return x;
}
int main(){
int t;
scanf("%d",&t);
while(t--){
    struct point p1,p2,p3,p4;
    scanf("%d %d %d %d %d %d %d %d",&(p1.x),&(p1.y),&(p2.x),&(p2.y),&(p3.x),&(p3.y),&(p4.x),&(p4.x));
    double d1,d2,d3;
    d1=findDistance(p1.x,p1.y,p2.x,p2.y);
    d2=findDistance(p1.x,p1.y,p3.x,p3.y);
    d3=findDistance(p1.x,p1.y,p4.x,p4.y);
    if(
       ((d1==d2) && (d1*d1*2==d3*d3))
       || ((d1==d3) && (d1*d1*2==d2*d2))
       || ((d2==d3) && (d2*d2*2==d1*d1))
       ){
        printf("1\n");
       }
    else{
        printf("0\n");
    }
}
return 0;
}
