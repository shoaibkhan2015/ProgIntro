#include<stdio.h>
int main(){
	FILE *fp;
	char text[300];

	fp=fopen("test.txt","r");
	printf("%s",fgets(text,250,fp));

	fclose(fp);
	return 0;
}
