#include<stdio.h>
void main(){
    int n;
    
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=(n-i)+2;j++){
            printf(" ");
          
        }
        for(int k=1;k<i+1;k++){
           
          if(i==1 ||i%2==1){
            printf("%d ",i);
          }
            
        }
        printf("\n");
    }
}