#include<stdio.h>

long calc(long L,long v, long l,long r){
int c;
c=L/v-(r/v-(l-1)/v);
return c;

}

int main(){
    long t;
    
     scanf("%ld",&t);
     
     for(int i=1;i<=t;i++){
          long L,v,l,r,j,n=0,count=0;
    scanf("%ld",&L);
    
        scanf("%ld",&v);
        
    scanf("%ld",&l);
    
    scanf("%ld",&r);
    
    for(int i=1;i<=L;i++){
        
        count=calc(L,v,l,r);
        }    
           
      printf("%ld\n",count);
           
     }
    return 0;
}


