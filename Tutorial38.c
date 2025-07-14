// typedef in c programming
////1.
//# include <stdio.h>
//void main(){
//
//typedef int integer;
//integer a = 100;
//printf("The value of a is:%d",a);
//
//}
////2.
//# include<stdio.h>
//void main(){
//typedef unsigned int x;
//x Su = 100;
//printf("%u",Su);
//}


//3.
//# include <stdio.h>
// typedef struct Student{
// 	char name[35];
// 	int id;
// 	
// }St;
// void main(){
// 
// St s1 = {"Suraj",84};
// St s2 = {"Maya",93};
// printf("The name of the student is:%s and his id is:%d\n",s1.name,s1.id);
// printf("The name of the student is:%s and his id is:%d\n",s2.name,s2.id);
// }


//4.
//# include<stdio.h>
//struct Mobiles{
//	char name[35];
//	int price;
//	
//};
//void main(){
//
//typedef struct Mobiles s;
//s s1 = {"Samsung",34000};
//s s2 = {"Apple",54000};
//printf("The name of the brand is:%s and its rate is:%d\n",s1.name,s1.price);
//printf("The name of the brand is:%s and its rate is:%d",s2.name,s2.price);
//
//}


////5.
//# include<stdio.h>
//void main(){
//	typedef int * ptr;
//	int c = 35,d = 83;
//	ptr k = &c;
//	ptr m = &d;
//	printf("The pointer k points to the value:%d\n",  *k);
//	printf("The pointer m points to the value:%d",*m);
//}

//6.
//# include<stdio.h>
//void main(){
//	typedef int* pointer_integer;
//	int c = 100, d = 200, e = 300;
//	pointer_integer a = &c;
//	pointer_integer b = &d;
//	pointer_integer x = &e;
//	
//	printf("The value at the pointer a points to  the address c is:%d\n",*a);
//	printf("The value at the pointer b points to the address d is:%d\n",*b);
//	printf("The value at the pointer c points to the addres e is:%d\n",*x);
//}
//7.
//# include<stdio.h>
//void main(){
//typedef int arr[4];
//arr temp = {10,20,30,40};
//int i;
//for(i=0;i<4;i++){
//	printf("%d\n",temp[i]);
//}
//}
//8.
# include<stdio.h>
void main(){
	typedef int marks[10];
	int i;
	marks ma ={80,30,49,49,39,59,5l,84,81,90};
	for(i = 0; i<=9;i++){
		printf("%d\n",ma[i]);
	}
	}
	
	

