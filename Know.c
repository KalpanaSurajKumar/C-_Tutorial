# include<stdio.h>
void main(){

char str[200];
FILE * ftr;
ftr = fopen("Bill.txt","r");
fgets(str,200,ftr);
puts(str);
fclose(ftr);
}
