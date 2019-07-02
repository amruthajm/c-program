#include<stdio.h>
int rmax(int a[],int size,int s,int e){
if(s==e){return a[s];}
int max1=rmax(a,size/2,0,((s+e)/2)-1);
int max2=rmax(a,size/2,(s+e)/2,e);
if(max1>max2){return max1;}
else{return max2;}
}

int main(){
int a[5]={2,5,7,8,1};
int d=rmax(a,5,0,4);
printf("%d",d);
return 0;
}
