#include <stdio.h>
#include <math.h>

double generateHourAngle(double h,double m){
    if(h==12){
        h=0;
    }
    if(m==60){
        m=0;
    }
     double ans;
     ans=(h*30.0);
     ans+=(m*30.0/60.0);
     return ans;
}
double generateMinuteAngle(double m){
    if(m==60){
        m=0;
    }
    return (m*6.0);
}
int main(){
    int t,ans;
    double a1,a2,h,m;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf",&h,&m);
        a1=generateHourAngle(h,m);
        a2=generateMinuteAngle(m);
        if(fabs(a1-a2)>180){
            ans=360-fabs(a1-a2);
        }
        else{
            ans=fabs(a1-a2);
        }
        printf("%d\n",ans);
    }
return 0;
}
