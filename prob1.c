#include<stdio.h>
int find(int a[],int n){
int j,i,f,c=0,p=0;
for(j=0;j<n;j++){
  for(i=0;i<n;i++){
    if(a[j]==a[i]){c++;
d=a[j];}
 }

}
for(i=0;i<n;i++){
if(a[i]-d<=1){p++;}}

return c;
}

int main(){
int n;
scanf("%d",&n);
int a[n];
int i;

for(i=0;i<n;i++){
scanf("%d ",&a[i]);}
int d=find(a,n);

printf("%d\n",d);
return 0;
}
