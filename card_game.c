int main(){
 char ch[100],card;
 int f=0;
 scanf("%[^\n]%*c",&ch);
 for(int i=0;i<14;i++){
     
     scanf("%c",&card);
     for(int j=0;j<2;j++){
         if(ch[j]==card){
             f=1;
         }
         }
       
     }
 
      if(f==1){
             
             printf("YES");
         }
      else{
             printf("NO");
         }
    
    return 0;
}


