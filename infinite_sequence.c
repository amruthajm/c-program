include <stdio.h>
long sum(long k){
    long sum1;
  sum1=(k*(k+1))/2;
    if(sum1%2==0){
        return 0;
        
    }
    else{
        return 1;
        
    }
}

int main(){
long n,s;
scanf("%ld",&n);
 s=sum(n);
    printf("%ld",s);
       return 0;
}
