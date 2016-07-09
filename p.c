#include<stdio.h>
int main(){
int base,pow,sum=1;
scanf("%d%d",&base,&pow);
for(int i=0;i<=pow;i++){
sum=sum*base;
}
printf("%d",sum);
return 0;
}
