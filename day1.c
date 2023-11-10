#include<stdio.h>
void main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
                if(a[i]+a[j]+a[j+1]==0)
                {
                    printf("[%d,%d,%d]",a[i],a[j],a[j+1]);
                     
                    
                }
              

        }

    }
}