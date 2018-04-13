#include <stdio.h>
int sum(int a){
if(a<=1){
	return 1;
}
return a+sum(a-1);

}

int main(){
int a,i=0;
scanf("%d",&a);
for(;a>0;a--){
i+=sum(a);

}
printf("%d",i);
return 0;
}

