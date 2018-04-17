#include <stdio.h>
#include <string.h>
void copy_char(char a[],char b[]){
int k=0,i;
for(i=0;i<strlen(a);i++){
	if(a[i]>65 && a[i]<90){
		b[k]=a[i];
		k+=1;
	}
	else if(a[i]=='\0'){
		return;
	}
}

}
int main(){
printf("please input max 10 char:\n");
char a[]={},b[10]={};
scanf("%s",a);
copy_char(a,b);
printf("%s\n",b);
return 0;
}
