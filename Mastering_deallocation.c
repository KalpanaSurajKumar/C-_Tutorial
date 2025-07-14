// Dynamic memory deallocation in C
// Malloc()
////1
//#include<stdio.h>
//#include<stdlib.h>
//void main(){
//	int *ptr;
//	int i;
//	ptr  = (int*) malloc(3*sizeof(int));
//	
//	for(i=0;i<4;i++){
//		printf("Enter the value at index %d:",i);
//		scanf("%d",&ptr[i]);
//		
//		
//	}
//	
//	for(i=0;i<4;i++){
//		printf("The value at the index %d is : %d\n",i,ptr[i]);
//	}
//}
//2
//#include<stdio.h>
//#include<stdlib.h>
//void main(){
//	int *ptr;
//	int i,j;
//	printf("Enter the size of integers\n");
//	scanf("%d",&i);
//	ptr = (int*) malloc(i*sizeof(int));
//	for(j=0;j<i;j++){ 
//		scanf("%d",&ptr[j]);
//			}
//			
//			printf("\n\n\n");
//			printf("The Stored integers is:\n");
//			
//	for(j=0;j<i;j++){
//		printf("%d\n",ptr[j]);
//	}
//}


// Calloc()
//3
//#include<stdio.h>
//void main(){
//	int *ptr;
//	int i;
//ptr = (int*) calloc(10,sizeof(int));
//for(i=0;i<10;i++){
//	printf("Enter the value at the index %d:",i);
//	scanf("%d",&ptr[i]);
//}
//
//for(i=0;i<10;i++){
//	printf("The value at the index %d is:%d\n",i,ptr[i]);
//}
//
//}
//4
//#include<stdio.h>
//#include<stdlib.h>
//void main(){
//	int *ptr;
//	int i,j;
//	printf("Enter the size of the integer\n");
//	scanf("%d",&i);
//	for(j=0;j<i;j++){
//		printf("Enter the value at the index:%d\n",j);
//		scanf("%d",&ptr[j]);
//		
//	}
//	for(j=0;j<i;j++){
//		printf("The value at the index %d is :%d\n",j,ptr[j]);
//	}
//	
//}

// Realloc()
//5
//#include<stdio.h>
//#include<stdlib.h>
//void main(){
//	int *ptr;
//	int i;
//	ptr = (int*) malloc(4*sizeof(int));
//	for(i=0;i<4;i++){
//		printf("Enter the value at the index %d:",i);
//		scanf("%d",&ptr[i]);
//	}
//	for(i=0;i<4;i++){
//		printf("The value at the index %d is :%d\n",i,ptr[i]);
//	}
//	
//printf("Reallocating the memory space \n");
//ptr = (int*) realloc(ptr,10*sizeof(int));
//
//for(i=0;i<10;i++){
//		printf("Enter the value at the index %d",i);
//		scanf("%d",&ptr[i]);
//	}
//	for(i=0;i<10;i++){
//		printf("The value at the index %d is :%d\n",i,ptr[i]);
//	}
//
//}
//6
//#include<stdio.h>
//void main(){
//	int *ptr;
//	int i;
//	ptr = (int*) malloc(4*sizeof(int));
//	for(i=0;i<4;i++){
//		printf("Enter the value at index %d:",i);
//		scanf("%d",&ptr[i]);
//		
//	}
//	for(i=0;i<4;i++){
//		printf("The value at the index %d is: %d\n",i,ptr[i]);
//	}
//	
//	ptr = (int *) realloc(ptr,10*sizeof(int));
//	for(i=0;i<10;i++){
//		printf("Enter the value at index %d:",i);
//		scanf("%d",&ptr[i]);
//	}
//	
//	for(i=0;i<10;i++){
//		printf("Enter the value at index %d is:%d\n",i,ptr[i]);
//	}
//	
//	
//}

// free()
//7
#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr;
	int i;
	for(i=0;i<4;i++){
		printf("Enter the element at the index:\n");
		scanf("%d",&i);
		
	}
	
   for(i=0;i<4;i++){
   	printf("The value at the index %d is : %d\n",i,ptr[i]);
   }
}
//8
