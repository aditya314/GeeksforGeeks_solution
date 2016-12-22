#include <stdio.h>
char c[5];
void increment (char s[],int l,int b){
	if(s[l-1]>=48 && s[l-1]<=57){
		if(((s[l-1]-48)+1)==b){
			s[l-1]='0';
			increment(s,l-1,b);
		}
		else{
			if(s[l-1]+1<=57){
				s[l-1]=(char)(s[l-1]+1);
			}
			else{
				s[l-1]='A';
			}
		}
	}
	else if(s[l-1]>=65 && s[l-1]<=70){
		if(((s[l-1]-65)+10+1)==b){
			s[l-1]='0';
			increment(s,l-1,b);
		}
		else{
			if(s[l-1]+1<=70){
				s[l-1]=(char)(s[l-1]+1);
			}
		}
	}
}
int main(){
	int t,b,i,beg;
	scanf(" %d",&t);
	while(t--){
		scanf(" %d",&b);
		c[0]='0';
		beg=1;
		for(i=1;i<5;i++){
			scanf(" %c",&c[i]);
		}
		increment(c,5,b);
		for(i=0;i<5;i++){
            if(c[i]!='0' && beg==1){
                beg=0;
            }
            if(c[i]=='0' && beg==1){
                continue;
            }
            printf("%c",c[i]);
		}
		printf("\n");
	}
	return 0;
}
