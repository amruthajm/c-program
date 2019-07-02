#include<stdio.h>
void f(int x){
printf("%d",x);
if(x==1){return;}
f(x-1);
printf("%d",x);
}

int main(){
int x=5;
f(x);
return 0;
}
