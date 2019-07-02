#include<stdio.h>


int rmax(int a[],int size){
if(size==1){return a[size -1];}
int r=rmax(a,size-1);
if(r>a[size-1]){return r;}
else{return a[size-1];}
}

int main(){
int a[7]={2,5,3,7,6,1,0};
int g=rmax(a,7);
printf("%d",g);
return 0;
}
