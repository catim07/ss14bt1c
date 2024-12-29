#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("moi ban nhap mot chuoi: ");
	fgets(string,sizeof(string),stdin);
	printf("%s",string);
	printf("do dai la: %d",strlen(string));
}
