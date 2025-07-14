// Wild pointers in C
//1
//# include<stdio.h>
//void main(){
//	int * ptr; // This is a wild pointer
//	printf("%d",*ptr);
//}

//2
//# include<stdio.h>
//void main(){
//	int * ptr; // This is a wild pointer
//	printf("%d",ptr);
//	
//}

//3
//# include<stdio.h>
//void main(){
//
//int * ptr; // This is a wild pointer
//ptr = NULL;
//printf("%d",*ptr);
//}

//4
//# include<stdio.h>
//void main(){
//	int * ptr; // This is a Wild pointer
//	*ptr = 100 ; // randomly store the value at any address
//	printf("%d",ptr);
//}


//5
//# include<stdio.h>
//void main(){
//	int * ptr; // This is a /wild pointer. This points to any arbitrary address.
//	ptr = NULL; // Now it is not a wild pointer it becomes a NULL pointer
//}

//6
//# include<stdio.h>
//void main(){
//	int * ptr = NULL; // Always intialise it with null otherwise it causes bugs issues.
//	int a = 100;
//	ptr = &a;
//	printf("Now the value of ptr is:%d",*ptr);
//}

//7 
# include<stdio.h>
void main(){
	char * name; // This is a Wild pointer 
	printf("%d",name);
	// everytime points to a different value 
	name = NULL; // if not using the pointer intialize it with NULL to avoid such issues
	
}
