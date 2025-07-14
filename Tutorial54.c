// Dangling pointer in C

// Dangling pointer due to deallocating memory allocation
//1
//# include<stdio.h>
//void main(){
//	int * ptr = (int *) malloc(4*sizeof(int));
//	ptr[0] =100;
//	ptr[1] = 200;
//	ptr[2] = 300;
//	ptr[3] = 400;
//	free(ptr); // Now it becomes dangling pointer
//	printf("%d",*ptr);
	
//}


//2
//# include<stdio.h>
//void main(){
//	char * name = (char *) malloc(3*sizeof(int));
//	name = "Suraj";
//	printf("The name is:%s",name);
//	free(name);
//	if(!strcmp(name,"Suraj")){
//		printf("Memory Deallocation is Successfully Done!\n");
//	}
//	else{
//		printf("Now here the dangling pointer is created\n");
//	}
//	name == NULL; // Now it is not a dangling pointer 
//	
//}


//3
//# include<stdio.h>
//void main(){
//	float n = 25.536;
//	float *num = (float *) malloc(5*sizeof(float));
//	num = &n;
//	printf("%0.3f",*num);
//	free(num); // Memory is freed now it is deallocated (It becomes Dangling pointer)
//	num == NULL;
//	
//}

// Dangling pointer due to returning local variables to the function calls

//4
//# include<stdio.h>
//int * number(){
//	int a = 164578;
//	return &a;
//	
//}
//int main(){
//	int * ptr = number();
//	printf("%d",* ptr);
//	return 0;
//}


//5
//# include<stdio.h>
//float * func(){
//	float num = 35.378;
//	return &num;
//}
//int main(){
//	float * ptr = func();
//	printf("%d",*ptr);
//}
//6
//# include<stdio.h>
//char * fun(){
//
//char * nam;
//nam = "Suraj";
//return &nam;
//}
//int  main(){
//	char * name;
//	name = fun();
//	printf("%s",name);
//	return 0;
//	
//}
// Dangling pointer due to the variabel going out of Scope

//7
//# include<stdio.h>
//int main(){
//	int * ptr;
//	{
//		int a = 400;
//		ptr = &a;
//	}
//	printf("%d",*ptr);
//	return 0;
//}

//8
//# include<stdio.h>
//int main(){
//	float * ptr;
//	{
//		float num = 45.5666;
//		ptr = &num;
//		
//	}
//	printf("%f",*ptr);
//	return 0;
//}

//9
//# include<stdio.h>
//int main(){
//	char * name; {
//	char * game;
//	game = "Freefire";
//	name = &game;
//	}
//	printf("%s",name);
//	return 0;
//}

//  Making the danging pointer NULL to avoid nasty bugs

//10
# include<stdio.h>
// dangling  pointer using the memory deallocation method
int main(){
	int * ptr;
	ptr = (int *) malloc(sizeof(int));
	ptr[0] = 100;
	printf("The  value is:%d\n",*ptr);
	free(ptr);
// Now it becomes a dangling pointer
printf("%d",*ptr); // now memory is freed;
	return 0;
}

