#include<stdio.h>
void main(){
	// File pointer declared
	FILE *Fu;
	// File opened
	Fu = fopen("some.txt","w");
	if(Fu==NULL){
		printf("Error Occured while creating a file!");
		exit(1);
	}
	// File closed
	fclose(Fu);
	printf("File created Successfully\n\n");
	return 0;
}
