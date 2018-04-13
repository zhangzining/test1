#include <stdio.h>
void copy_char(char a[],char b[]){
int k=0;
for(int i=1;a[i]!="\0";i++){
	
	if(a[i]>65&&a[i]<90){
		b[k]=a[i];
		k++;	
	}
}

}
int main(){
char a[10]={0},b[10]={0};
scanf("%s",a);
copy_char(a,b);
printf("%s",b);
return 0;
}
