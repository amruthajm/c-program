#include <stdio.h>


int main(){
   long l,r,t,x,y;
   scanf("%ld",&t);
     
   for(long i=0;i<t;i++){
       scanf("%ld",&l);
   scanf("%ld",&r);
   for(long k=l;k<=r;k++){
       for(long j=k;j<=r;j=j+k){
           if(k!=j && (j%k==0) ){
               
              printf("%ld ",k);
            printf("%ld\n",j);  
          j=r+1;
          k=r+1;
           }
       }
   } }
 
    
       return 0;
}
