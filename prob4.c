#include<stdio.h>
int min(int ar[],int n){
    int i,min=10;
    for(i=0;i<n;i++){
   
        if(ar[i]<min && ar[i]!=0){
                
            min=ar[i];
        }
    }
    return min;
}
int main(){
    int n,i;
    scanf("%d\n",&n);
   int a[n];
        
        for(i=0;i<n;i++){
          scanf("%d ",&a[i]);
        }
        for(i=0;i<n;i++){int count=0;
        int m=min(a,n);
        int j;
      for(j=0;j<n;j++){
          if(a[j]!=0){a[j]=a[j]-m;count++;}
          
      }
        if(count!=0){
        printf("%d\n",count);}
        }
    return 0;
    
}
