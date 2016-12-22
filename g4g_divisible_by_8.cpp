#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string s;
while(t--){
    cin>>s;
    int l,i,j,k,n;
    bool x=false;
    l=s.length();
    if(l==1){
        for(i=0;i<l;i++){
            n=(s[i]-32);
            if(n%8==0){
                x=true;
                break;
            }
        }
    }
    else if(l==2){
        for(i=0;i<l;i++){
            for(j=0;j<l;j++){
                if(i!=j){
                    n=(s[i]-48)*10+(s[j]-48);
                    if(n%8==0){
                        x=true;
                        break;
                    }
                }
            }
            if(x){
                break;
            }
        }
    }
    else if(l>2){
        for(i=0;i<l;i++){
            for(j=0;j<l;j++){
                for(k=0;k<l;k++){
                    if(i!=j && j!=k && i!=k){
                        n=(s[i]-48)*100+(s[j]-48)*10+s[k];
                        if(n%8==0){
                            x=true;
                            break;
                        }
                    }
                }
                if(x){
                    break;
                }
            }
            if(x){
                break;
            }
        }
    }
    if(x){
            printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
return 0;
}
