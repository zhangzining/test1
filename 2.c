#include "stdio.h"
int main(){
int a,b,c,i;
printf("please input three number:\n");
scanf("%d%d%d",&a,&b,&c);

i=a>b?a:b;
i=i>c?i:c;
printf("the biggest number is:%d\n",i);


return 0;
}
