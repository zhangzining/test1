#include "stdio.h"
int main(){
int a[3][4],i,j,k;
k=0;
for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			printf("please input a number for a[%d][%d]\n",i,j);
			scanf("%d",&a[i][j]);
			k=k+1;
		}

}
printf("%d number wrote\n",k);
k=a[0][0];

for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			if(a[i][j]>k){
				k=a[i][j];
			}
		}
	}
printf("the biggest number is:%d",k);
return 0;
}
