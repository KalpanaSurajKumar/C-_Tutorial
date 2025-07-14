# include<stdio.h>
void main(){
	FILE * ptr;
	ptr = fopen("myfile.txt","a");
	char str[97]= "\nLady gaga is the boss in the world of game";
	fprintf(ptr,"%s",str);
	fclose(ptr);
}
