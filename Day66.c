#include<stdio.h>
#include<string.h>
void main(){
	char name[28];
	char item[30];
	char outlet[35];
	char str[200];
	FILE * ptr;
	FILE * ptr2;
	ptr = fopen("reciept.txt","w");
	ptr2 = fopen("Bill.txt","r");
	fgets(str,200,ptr2);
		printf("Enter your name\n");
		gets(name);
		printf("Enter your item name\n");
		gets(item);
		printf("Enter the name of your outlet\n");
		gets(outlet);
		printf("\n\n");
		printf(" Bill template is:\n\n %s",str);
		printf("\n\n");
		fprintf(ptr,"Thanks %s for purchasing %s from our outlet %s.\n Please visit our outlet %s for any kind of problems.\n We plan to serve you again Soon. \n",name,item,outlet,outlet);
		printf("Thanks %s for purchasing %s from our outlet %s.\n Please visit our outlet %s for any kind of problems.\n We plan to serve you again Soon. \n",name,item,outlet,outlet);
		printf("\n\n");
		printf("The bill has been generated in reciept.txt\n");
		fclose(ptr);
		fclose(ptr2);
}
