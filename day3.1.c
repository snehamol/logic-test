#include<stdio.h>
void main(){
    int n,x,y1,y,z,z1,z2,r;
    scanf("%d",&n);
    if(n>100 && n<200){
        x=15*100;
        y1=n%100;
        y=14*y1;
        z=x+y;
        printf("%d",z);
    }
    else if(n>200){
            x=2900;
             y1=n-200;
             y=12*y1;
             r=x+y;
       printf("%d",r);
    }else{
        z=15*n;
        printf("%d",z);
    }

}