// Quick Quiz
# include<stdio.h>
# include<string.h>
void main(){
	char str1[100];
	char str2[100];
	char str3[100];
	gets(str1);
	gets(str2);
	gets(str3);
	
	strcat(str1,str2);
	strcat(str1,str3);
	puts(str1);
	}
