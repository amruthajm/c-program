#include<stdio.h>
int main(){
    int q,i;
    scanf("%d\n",&q);
    for(i=0;i<q;i++){
        long a,b,j,s,count=0;
        scanf("%ld %ld",&a,&b);
        for(j=1;j<b;j++){
         s=j*j;
         if(s>=a && s<=b){count++;}
        }
        printf("%ld\n",count);
    }
    return 0;
    
}
	

