//1. malloc()
//(i)
# include<stdio.h>
# include<stdlib.h>
//void main(){
//	int * ptr;
//	int i;
//	ptr = (int*) malloc(5*sizeof(int));
//	
//	for(i=0;i<5;i++){
//		printf("The value of %d is\n",i);
//		scanf("%d",&ptr[i]);
//		
//	}
//	
//	
//	for(i=0;i<5;i++){
//		printf("The value at %d is:%d\n",i,ptr[i]);
//	
//		
//	}
//	
//	
//}
//(ii)
//void main(){
//	int * ptr;
//	int i;
//	ptr = (int*) calloc(5,sizeof(int));
//	for(i=0;i<5;i++){
//		printf("%d\n",ptr[i]);
//	}
//	free(ptr);
//	for(i=0;i<5;i++){
//		printf("%d\n",ptr[i]);
//	}
//}


//(iii)
//void main(){
//	char *ptr;
//	ptr = (char *) malloc(6*sizeof(char));
//	printf("Enter the name\n");
//	scanf("%s",ptr);
//	
//	printf("Your name:%s",ptr);
//	
//	
//	
//
//}
//(iv)
//void main(){
//	int n,i;
//	int *ptr;
//	printf("Enter the size of elements\n");
//	scanf("%d",&n);
//	ptr = (int*) malloc(n*sizeof(int));
//	
//	for(i=0;i<n;i++){
//		printf("Enter the  element at position %d\n",i);
//		scanf("%d",&ptr[i]);
//	}
//	
//	for(i=0;i<n;i++){
//		printf("The value at index %d is:%d\n",i,ptr[i]);
//	}
//	
//}

//2. calloc()
//(i)
//void main(){
//	int i;
//	int * ptr;
//	ptr = (int*) calloc(5,sizeof(int));
//	for(i=0;i<5;i++){
//		printf("Enter the element at the index %d\n",i);
//		scanf("%d",&ptr[i]);
//	}
//	
//	for(i=0;i<5;i++){
//		printf("The value at the index %d is:%d\n",i,ptr[i]);
//		
//	}
//}


//(ii)
//void main(){
	// To check the initialised value at the allocated memory space
//	int * ptr;
//	int i;
//	ptr = (int *) calloc(5,sizeof(int));
//	for(i=0;i<5;i++){
//		printf("%d\n",ptr[i]);
//	}
//}

//(iii)
//void main(){
//	char * ptr;
//	
//	ptr = (char *) calloc(5,sizeof(char));
//	printf("Enter the your name\n");
//	gets(ptr);
//	printf("your name is:%s",ptr);
//	
//}


//(iv)
//void main(){
//	int i,n;
//	int * ptr;
//	printf("Enter the number of elements\n");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("Enter the element at index %d\n",i);
//		scanf("%d",&ptr[i]);
		
//	}
	
//   for(i=0;i<n;i++){
//   	printf("The element at index %d is: %d\n",i,ptr[i]);
//   }
//}

//3. realloc()
//(i)
//void main(){
//	int i;
//	int * ptr;
//	ptr = (int *) malloc(3*sizeof(int));
//	for(i=0;i<3;i++){
//		printf("Enter the value at index %d\n",i);
//		scanf("%d",&ptr[i]);
//	}
//	for(i=0;i<3;i++){
//		printf("The value at the index %d is: %d\n",i,ptr[i]);
//	}
//	
//	// To reallocate the memory space
//	ptr = (int *) realloc(ptr,10*sizeof(int));
//	
//	for(i=0;i<10;i++){
//		printf("Enter the value at index %d\n",i);
//		scanf("%d",&ptr[i]);
//	}
//	for(i=0;i<10;i++){
//		printf("The value at the index %d is: %d\n",i,ptr[i]);
//	}
//	
//}


//(ii)
//void main(){
//	int * ptr;
//	int i,n;
//	printf("Enter the number of elements\n");
//	scanf("%d",&n);
//	
//	ptr = (int *) malloc(n*sizeof(int));
//	for(i=0;i<n;i++){
//		printf("Enter the value at index %d\n",i);
//		scanf("%d",&ptr[i]);	
//		}
//		
//	for(i=0;i<n;i++){
//		printf("The value at the index %d is: %d\n",i,ptr[i]);
//	}
//	
//	
//	printf("\n");
//	printf("Enter the new number of elements\n");
//	scanf("%d",&n);
//	
//	ptr = (int *) realloc(ptr,sizeof(int));
//	
//	
//	for(i=0;i<n;i++){
//		printf("Enter the value at index %d\n",i);
//		scanf("%d",&ptr[i]);	
//		}
//		
//	for(i=0;i<n;i++){
//		printf("The value at the index %d is: %d\n",i,ptr[i]);
//	}
	
	
	
	
		
//	}


//(iii)

//void main(){
//	int i,n;
//	int * ptr;
//	
//	printf("Enter the number of elements\n");
//	scanf("%d",&n);
//	
//	ptr = (int *) calloc(n,sizeof(int));
//	
//	for(i=0;i<n;i++){
//		printf("Enter the element at the index %d \n",i);
//		scanf("%d",&ptr[i]);
//	}
//	
//	for(i=0;i<n;i++){
//		printf("The value at the index %d is: %d\n ",i, ptr[i]);
//	}
//	
//
//printf("Enter the number of elements\n");
//	scanf("%d",&n);
//	
//	ptr = (int *) realloc(ptr,n*sizeof(int));
//	
	

//	for(i=0;i<n;i++){
//		printf("Enter the element at the index %d \n",i);
//		scanf("%d",&ptr[i]);
//	}
//	
//	for(i=0;i<n;i++){
//		printf("The value at the index %d is: %d\n ",i, ptr[i]);
//	}	
//	
//}

//4. free()
//(i)
//void main(){
//	int * ptr;
//	int i,n;
//	printf("Enter the number of elements\n");
//	scanf("%d",&n);
//	
//	ptr = (int *) malloc(n*sizeof(int));
//	for(i=0;i<n;i++){
//		printf("Enter the value at index %d\n",i);
//		scanf("%d",&ptr[i]);	
//		}
//		
//		
//	for(i=0;i<n;i++){
//		printf("The value at the index %d is %d\n",i,ptr[i]);
//	}
//	free(ptr);
//		
//	for(i=0;i<n;i++){
//		printf("The value at the index %d is %d\n",i,ptr[i]);
//	}
//	}
//(ii)
//void main(){
//	int i,n;
//	int * ptr;
//	
//	printf("Enter the number of elements\n");
//	scanf("%d",&n);
//	 
//	ptr = (int *) malloc(n*sizeof(int));
//	
//	for(i=0;i<n;i++){
//		printf("Enter the element at index %d \n",i);
//		scanf("%d",&ptr[i]);
//	}
//	
//	for(i=0;i<n;i++){
//		printf("The value at index %d is %d\n",i,ptr[i]);
//	}
//	
//	free(ptr);
//	
//	
//	printf("Enter the number of elements\n");
//	scanf("%d",&n);
//	 
//	ptr = (int *) malloc(n*sizeof(int));
//	
//	for(i=0;i<n;i++){
//		printf("Enter the element at index %d \n",i);
//		scanf("%d",&ptr[i]);
//	}
//	
//	for(i=0;i<n;i++){
//		printf("The value at index %d is %d\n",i,ptr[i]);
//	}
//	
//	
//	
//}
//(iii)

void main(){
	 
int * ptr;
	int i,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	
	ptr = (int *) malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the value at index %d\n",i);
		scanf("%d",&ptr[i]);	
		}
		
	for(i=0;i<n;i++){
		printf("The value at the index %d is: %d\n",i,ptr[i]);
	}
	
	
	printf("\n");
	printf("Enter the new number of elements\n");
	scanf("%d",&n);
	
	ptr = (int *) realloc(ptr,sizeof(int));
	free(ptr);
	
	for(i=0;i<n;i++){
		printf("Enter the value at index %d\n",i);
		scanf("%d",&ptr[i]);	
		}
		
	for(i=0;i<n;i++){
		printf("The value at the index %d is: %d\n",i,ptr[i]);
	}
		
	
}

