#include "stdio.h"
int main(){
int a,b,i,j=0;
for(a=200;a<=300;a++){
if(a%3==0)
	if(a%4!=0){
		j+=a;
	}
}
printf("the sum is:%d",j);
return 0;
}
