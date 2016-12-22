#include <stdio.h>
struct point{
	int x;
	int y;
};
int isOverLapping(struct point l1,struct point r1,struct point l2,struct point r2){
	if((l2.x>=r1.x || l1.x>=r2.x)){
		return 0;
	}
	if((l2.y<=r1.y || l1.y<=r2.y)){
		return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	struct point l1,r1,l2,r2;
	while(t--){
		scanf("%d %d %d %d",&(l1.x),&(l1.y),&(r1.x),&(r1.y));
		scanf("%d %d %d %d",&(l2.x),&(l2.y),&(r2.x),&(r2.y));
		printf("%d\n",isOverLapping(l1,r1,l2,r2));
	}
	return 0;
}
