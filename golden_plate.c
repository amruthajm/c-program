#include<stdio.h>
int calc_perimeter(int w,int h){
return (2*(w-1+h-1));
}


int main(){
int w,h,k,count=0;
scanf("%d",&w);
scanf("%d",&h);
scanf("%d",&k);
for(int i=0;i<k;i++)
{ count=count+calc_perimeter(w,h);
  w=w-4;
  h=h-4;
}
printf("%d\n",count);
return 0;

}
