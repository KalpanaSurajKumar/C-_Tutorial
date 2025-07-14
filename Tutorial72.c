// Function pointers in C

//#include<stdio.h>
//int sum(int a,int b){
//	return a+b;
//}
//void main(){
//	int d;
//	int (*fptr) (int ,int); // Declaring a Function pointer
//	fptr = sum;
//	d = fptr(1000,7000);
//	
//	printf("The sum of a and b is:%d",d);
//	
//}


//// Function Pointers in C
////1
//#include<stdio.h>
//void mul(int x,int y){
// printf("The product of %d and %d is :%d",x,y,x*y);
//}	
//void main(){
//	int  (*ptr)(int,int);
//	ptr = mul;
//	(&mul)(10,20);
//	printf("\n");
//	(*ptr)(30,40);
//	printf("\n");
//	ptr(500,300);
//
//}

//2
//#include<stdio.h>
//void  name(){
//	printf("My name is Suraj Kumar Jha\n");
//}
//void main(){
//	void (*some)();
//	some = &name;
//	(*some)();
//	some();
//	(&name)();
//	name();
//	
//}
////3
//#include<stdio.h>
//void Area_rec(length,breadth){
//	printf("The Length of rectangle is:%d\n",length);
//	printf("The Breadth of rectangle is:%d\n",breadth);
//	printf("The Area of the rectangle is:%d\n",length*breadth);
//}
//
//void main(){
//	void (*Era)(int ,int);
//	Era = &Area_rec;
//	Era(10,20);
//	printf("\n\n\n");
//	(*Era)(30,50);
//	printf("\n\n\n");
//	(&Area_rec)(200,100);
//	printf("\n\n\n");
//	Area_rec(400,200);
//}


//4
//#include<stdio.h>
//#include<math.h>
//int Square_root(int x){
//	int j;
//	 j = sqrt(x);
//	return j;
//	
//	
//}
//
//void main(){
//	int t  = 10000;
//int (*Root)(int);
//Root = &Square_root;
//printf("The Square root of the number %d is:%d",t,(*Root)(t));
//	
//}


//5
//#include<stdio.h>
//void add(int x,int y){
//	printf("The sum of the the numbers %d and %d is:%d\n",x,y,x+y);
//}
//
//void sub(int x,int y){
//	printf("The difference of the the numbers %d and %d is:%d\n",x,y,x-y);
//}
//void mul(int x,int y){
//	printf("The product of the the numbers %d and %d is:%d\n",x,y,x*y);
//}
//void div(int x,int y){
//	printf("The division of the the numbers %d by %d is:%d\n",x,y,x/y);
//}
//void main(){
//	int a,b,j;
//	void (*ptr[])(int,int) = {add,sub,mul,div};
//printf("Enter the 0 to add ,1 to subtract,2 to multiply, and 3 to divide the two numbers\n");
//scanf("%d",&j);
//printf("Enter the First number\n");
//scanf("%d",&a);
//printf("Enter the second number\n");
//scanf("%d",&b);
//
//(*ptr[j])(a,b);
//
//	
//	
//}

//6
//#include<stdio.h>
//void Area_rec(int x ,int y){
//	printf("The Area of the Rectangle is :%d",x*y);
//	
//}
//
//void Peri_rec(int l, int b){
//
//printf("The perimeter of the Rectangle is :%d",2*(l+b));
//}
//void main(){
//	int a,b,i;
//void (*Rec[])(int ,int)= {Area_rec,Peri_rec};
//	printf("Enter 0 to find the Area of the Rectange or Enter 1 to find the perimeter of the Rectangle\n");
//	scanf("%d",&i);
//	printf("Enter the length of the Rectangle\n");
//	scanf("%d",&a);
//	printf("Enter the breadth of the Rectangle\n");
////	scanf("%d",&b);
////	Rec[i](a,b);
////	
////}
//
////7
//#include<stdio.h>
//void greet(){
//	printf("Hello , Very warm welcome from our team\n");
//}
//
//void Eat(){
//	printf("Why Panner is your favourite food\n");
//	
//	}
//	
//	
//void health(){
//	printf("Do daily Exercise to improve your Health\n");
//}
//
//void  pledge(){
//	printf("I take 10 pledges to change the world\n");
//}

//void main(){
//	int num;
//	void (*ptr[])() = {greet,Eat,health,pledge};
//	printf("Enter 0 for greet call 1 for Eat ,2 for health and 3 for pledge\n");
//	scanf("%d",&num);
//	
//	(*ptr[num])();
//	
//	
//}


//8
//#include<stdio.h>
//void fun1(){
//	printf("Hey Hello I am fun1\n");
//}
//
//void fun2(){
//	printf("Hey Hello I am fun2\n");
//}
//
//void wrapper(void(*ptr)()){
//		ptr();
//	}
//void main(){
//	
//	wrapper(fun1);
//	wrapper(fun2);
	
//	}
//9

#include<stdio.h>
void name(){
	char *nam;
	printf("Enter your name\n");
	gets(nam);
	
	printf("Your name is:%s\n",nam);
}
void food(){
	char*foo;
	printf("Enter your favourite food\n");
	gets(foo);
	printf("Your favourite food is:%s\n",foo);
}

void Exercise(){
	char *ex;
	printf("Enter one  exercise which is your favourite exercise\n");
	gets(ex);
	printf("Your Favourite Exercise is:%s\n",ex);
	
}

void Teller(void (*tell)()){
	(*tell)();
}
void main(){
	
	 Teller(food);
	 Teller(Exercise);
	
}



