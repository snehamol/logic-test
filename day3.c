#include<stdio.h>
void main(){
    int sum=0,n,a=0,b=1,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        
        sum=a+b;
        b=a;
        a=sum;        

    }
    printf("%d",sum);
}