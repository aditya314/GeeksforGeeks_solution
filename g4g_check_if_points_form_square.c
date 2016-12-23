#include<stdio.h>
struct Point{
    int x, y;
};
int distSq(struct Point p,struct Point q){
    return ((p.x - q.x)*(p.x - q.x)+(p.y - q.y)*(p.y - q.y));
}
int isSquare(struct Point p1, struct Point p2, struct Point p3, struct Point p4){
    int d2,d3,d4,d;
    d2 = distSq(p1, p2);
    d3 = distSq(p1, p3);
    d4 = distSq(p1, p4);
    if (d2 == d3 && 2*d2 == d4){
        d = distSq(p2, p4);
        return (d == distSq(p3, p4) && d == d2);
    }
    if (d3 == d4 && 2*d3 == d2){
        d = distSq(p2, p3);
        return (d == distSq(p2, p4) && d == d3);
    }
    if (d2 == d4 && 2*d2 == d3){
        d = distSq(p2, p3);
        return (d == distSq(p3, p4) && d == d2);
    }
    return 0;
}
int main(){
    int t;
    struct Point p1,p2,p3,p4;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d %d %d %d",&(p1.x),&(p1.y),&(p2.x),&(p2.y),&(p3.x),&(p3.y),&(p4.x),&(p4.y));
        printf("%d\n",isSquare(p1,p2,p3,p4));
    }

    return 0;
}
