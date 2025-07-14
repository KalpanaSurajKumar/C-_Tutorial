//  Program to make commandline calculator

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(int argc,char*argv[]){
	char *operation;
	int num1,num2;
	operation = argv[1];
	num1 = atoi(argv[2]);
	num2 = atoi(argv[3]);
	if(!(strcmp(operation,"add"))){
		printf("The Sum of %d and %d is:%d",num1,num2,num1+num2);
	}
	
	else if(!(strcmp(operation,"sub"))){
		printf("The difference of %d and %d is:%d",num1,num2,num1-num2);
		
	}
	
	else if(!(strcmp(operation,"mul"))){
		printf("The product of %d and %d is:%d",num1,num2,num1*num2);
		
	}
	
	
	
	else if(!(strcmp(operation,"div"))){
		printf("The division of %d by %d is:%0.2f",num1,num2,((float)num1)/((float)num2));
		
	}
	
	
	else if(!(strcmp(operation,"mod"))){
		printf("The modulus of %d and %d is:%d",num1,num2,(num1%num2));
		
	}
	
	else if(!(strcmp(operation,"pow"))){
		printf("The number %d raises to the power %d is :%0.1f",num1,num2,pow(num1,num2));
		
	}
	
	else{
		printf("Something Went Wrong");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
