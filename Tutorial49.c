// Storage Class in C

//auto class
//1
//# include<stdio.h>
//void printnum(n){
//	printf("The value of the number in the function is:%d\n",n);
//}
//void main(){
//	auto int  a = 100;
//	printf("The value of the number is:%d\n",a);
//	printnum(2000);
//}

//2
//# include<stdio.h>
//void main(){
//	int num = 100;
//	printf("The value of the num is:%d",num);
//}

//2.extern class
//1

//# include<stdio.h>
//int extern sum = 1000;
//void main(){
////	int sum;
//	printf("The value of sum is:%d\n",sum);
//}


////2
//# include<stdio.h>
//# include"Game.h"
//num = 100;
//void main(){
//
//	printf("%d",num);
//	
//}
//3
//# include<stdio.h>
// num;
//void main(){
//	
//	printf("The value of a is:%d",num);
//}
//num = 2000;


//3.static class

//1
//# include<stdio.h>
//void main(){
//	int i;
//	for(i=0;i<8;i++){
//		static int a = 100;
//		printf("%d\n",a);
//		a++;;
//	}
//}

//2
//# include<stdio.h>
//void func(){
//
//static int num = 100;
//printf("The value of num is %d\n",num);
//num++;
//}
//void main(){
//	func();
//	func();
//	func();
//	func();
//	
//}
//3
// program to illustrate the by default value of the static variable
//# include<stdio.h>
//void main(){
//	static int num;
//	printf("%d",num);
//}

//4.register class

//1
// To demonstrate the default value of the register class
//# include<stdio.h>
//void main(){
//	register int num;
//	printf("%d",num);
//}


//2
# include<stdio.h>
void gater(){
	register number;
	number = 300;
	printf("%d\n",number);
}
void main(){
	register num = 100;
	printf("The value of num is %d\n",num);
	gater();
}

//3

