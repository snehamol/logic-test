#include<stdio.h>
void main()
{
    int n,arr[100],t;
    scanf("%d",&n);
  for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(arr[j]<arr[k]){
                int temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int l=0;l<n;l++){
       

        if(arr[l+1]-arr[l] != 1 && arr[l]>0)
        {
            t=arr[l]+1;
            break;
        }
      
       
        }
          
     printf("%d",t);
   
}