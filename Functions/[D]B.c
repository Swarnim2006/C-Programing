#include<stdio.h>

int main(){
    
    int a,b,ans;
    scanf("%d %d",&a,&b);
    ans=power(a,b);
    printf("%d",ans);
    return 0;
}
int power(int a,int b){
    
    int count, d = 1;
    for(count = 1; count <= b; ++count){
        d = d*a;
    }
    return d;
    
}