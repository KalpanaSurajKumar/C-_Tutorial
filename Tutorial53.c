// Null pointer in C
//1
//# include<stdio.h>
//void main(){
//	int * num = NULL;
//	int a = 100;
//	num = &a;
//	printf("%d",*num);
//}

//2
//# include<stdio.h>
//void main(){
//	int a =200;
//	int *ptr = &a;
//	if(ptr!=NULL){
//		printf("Pointer ptr you are not null\n");
//	}
//	else{
//		printf("Pointer ptr you are null\n");
//	}
//}


//3
//# include<stdio.h>
//void main(){
//	int * ptr;
//	ptr = (int *) malloc(5*sizeof(int));
//	if(ptr!= NULL){
//		printf("The Memory space is allocated successfully\n");
//	}
//	else{
//		printf("The Memory space is not allocated\n");
//	}
//	
//}


//4
//# include<stdio.h>
//void func(int *num){
//	if(num!=NULL){
//		int n,m;
//		printf("Here we are executing some code \n");
//		printf("*****Program to find the sum of the two numbers******\n");
//		printf("Enter the first number\n");
//		scanf("%d",&n);
//		printf("Enter the second number\n");
//		scanf("%d",&m);
//		printf("The sum of the numbers is:%d",n+m);
//		
//	}
//	else{
//		printf("Something Went wrong which is not good\n");
//	}
//}
//void main(){
//	
//	func(100);
//}


//5
//# include<stdio.h>
//void main(){
//	int * ptr = 100;
//	if(ptr!=NULL){
//		printf("You are not a null\n");
//	}
//	else{
//		printf("You are a null");
//	}
//}


//6
//# include<stdio.h>
//void checkname(char * name){
//	if(name!=NULL){
//		printf("%s",name);
//		
//	}
//	else{
//		printf("you are null");
//	}
//	
//}
//void main(){
// char * name;
// name = "Suraj";
//checkname(name);
//}


//7
# include<stdio.h>
void Is_Empty(char *name){
	if(name!=NULL){
		printf("As it is not null so some operation is performed which is good\n");
		printf("*****Vote Egibility checker*****\n");
		int age ;
		printf("Enter your age\n");
		scanf("%d",&age);
		if(age>=18){
			printf("Welcome my friend you can vote!\n");
		}
		else{
			printf("Sorry! my friend you cannot vote\n");
		}
	}
}
void main(){
	char * name;
	name = "Nothing";
	Is_Empty(name);
	
}
