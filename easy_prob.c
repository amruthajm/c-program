

#include<stdio.h>
int main(){
    
    int n,k,f=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(k==1){f=1;}
    }
    if(f==1){
        printf("HARD");
    }
    else{
        printf("EASY");
    }
    return 0;
}
