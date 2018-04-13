#include "stdio.h"
int main(){
int a[10],i,n;
for(i=0;i<10;i++){
printf("please input the No:%d student's goal\n",i+1);
scanf("%d",&a[i]);

}
n=0;
for(i=0;i<10;i++){
if(a[i]>=80&&a[i]<=90){
	printf("the No:%d\n",i+1);
	n=n+1;
	}
}
printf("the amount of student is:%d\n",n);

return 0;

}
