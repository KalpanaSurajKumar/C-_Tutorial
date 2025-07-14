// Preprocessor in c

// A. File inclusion

// (i) Standard header files 
//1 
//# include <stdio.h>
//void main(){
//	int a,b;
//	printf("Enter the length of Rectangle\n");
//	scanf("%d",&a);
//	
//	printf("Enter the breadth of Rectangle\n");
//	scanf("%d",&b);
//	printf("The Area of the rectangle is:%dm^2",a*b);
//}

//2
//# include<stdio.h>
//# include<math.h>
//void main(){
//	int a,b,c;
//// program to find the power of any number
//printf("Enter the number\n");
//scanf("%d",&a);
//printf("Enter the exponential power\n");
//scanf("%d",&b);
//c = pow(a,b);
//printf("The exponential of  number %d is:%d",a,c);
//}

//3
//# include<stdio.h>
//# include<stdlib.h>
//void main(){
//
//int* num;
//num = (int*) malloc(3*sizeof(int));
//free(num);
//printf("%d",num);
//}

// (ii) user defined header files
////1
//# include<stdio.h>
//# include "Sum.h"
//void main(){
//	int a = 100,b = 200,c;
//	c = sum(1000,2000);
//	printf("%d",c);
//	
//}
//2
//# include<stdio.h>
//# include "Sum.h"
//void main(){
//	int a = 100, b = 200,c;
//	c = multiplication(a,b);
//	printf("The multiplication of these numbers is:%d",c);
//	
//	
////}
//
////3
////# include<stdio.h>
////void main(){
////	int c;
////	c = Area_rect(100,200);
////	printf("The Area of rectangle is:%d",c);
////}
// B. macros

//(i) without arguments

////1
//# include<stdio.h>
//# define LIMIT 5
//void main(){
//
//int i;
//for(i=0;i<=LIMIT;i++){
//	printf("%d\n",i);
//}
//}


//2
//# include<stdio.h>
//# define pi 3.14
//# define Suraj printf
//void main(){
//	Suraj("The value of pi is:%f\n",pi);
//	Suraj("Suraj is king which\n");
//	Suraj("Which is your name in that is super cooling that is good and which is good\n");
//}
 
 // Note --- syntax ---   # define variable value --- ex -- #define pi 3.14

////3
//# include<stdio.h>
//# define s void
//# define u main
//# define num 1000
//s u(){
//	printf("hello\n");
//	int i;
//	for(i=0;i<=num;i++){
//		printf("%d\n",i);
//	}
//}

// (ii) with arguments
//1
//#include<stdio.h>
//#define Area_Rect(l,b) (l*b) 
//void main(){
//	int l,b,r;
//	printf("Enter the length of rectangle\n");
//	scanf("%d",&l);
//	printf("Enter the breadth of rectangle\n");
//	scanf("%d",&b);
//	r = Area_Rect(l,b);
//	printf("The area of rectangle is:%d\n",r);
//}
//2
//# include<stdio.h>
//# define pi 3.14
//# define square(n) (n*n)
//void main(){
//	int s;
//	printf("Enter the side of square\n");
//	scanf("%d",&s);
//	printf("The Area of the Square is %d\n",square(s));
//	printf("The Area of the circle is %f\n",pi*square(s));
//	
//	
//}
////3
//# include<stdio.h>
//# define say printf("hello World\n\n");
//# define mean(a,b,c,d,e) (a+b+c+d+e)/5
//
//void main(){
//	float c;
//	say
//	say
//	
//	c = mean(10,20,30,40,50);
//	printf("The mean of these five values is:%f",c);
//	
//	
//}

// C. Conditional compilation directives
//(i) # if
// 1.
//# include<stdio.h>
//# define num 345
//void main(){
//	#if num<500
//	printf("you are less than 500\n");
//	
//	#else
//	printf("you are greater than 500\n");
//	#endif
	
//}


// 2.
//# include<stdio.h>
//#define ank 130
//
//	
//void main(){
//#if ank>100
//	printf("You are greater than 100\n");
//	
//
//	
//	#else
//	printf("You are doing wrong which is not good which is amazing\n");
//	
//	
//	#endif	
//	
//}

// (ii) #elif
// 1.
//# include<stdio.h>
//#define A  356
//void main(){
//	#if A<3
//	printf("Hey you are less than three\n");
//	
////	#elif A==2
////	printf("You are equal to 2\n");
//	
//	#else
//	printf("You are greater than 3\n");
//	
//	#endif
//}
// 2.
//# include<stdio.h>
//# define a 100
//void main(){
//	#if a<34
//	printf("You are less than 34\n");
//	#elif a == 80
//	printf("You are Equal to 80\n")
//	
//	#else
//	printf("You are equal to 100\n");
//	
//	#endif
	
//}


// (iii) #else
//// 1.
//# include<stdio.h>
//# define su 100
//void main(){
//	#if su<400
//	printf("this is a very big number\n");
//	
//	#else
//	printf("This is equal to 100\n");
//	
//	#endif
//
//}


//// 2.
//# include<stdio.h>
//# define sat 400
//
//
//void main(){
//#if sat >600
//printf("You are greater than 600\n");
//
//#else
//printf("You are 400\n");
//
//#endif
//	
//}

// (iv) #ifdef
//// 1.
//# include<stdio.h>
//# define ak 200
//void main(){
//	#ifdef ak
//	printf("You are welcome ak you are well defined\n");
//	
//	#endif
//}

//// 2.
//# include<stdio.h>
//# define pi 3
//
//void main(){
//	#ifdef pi
//	printf("Pi is the greatest invention of all time\n");
//	
//	#ifndef pi
//	printf("Sorry pi you are not defined\n");
//	
//	#endif
//}
//// (v) #ifndef
//// 1.
//// 2.
//// (vi) #endif
//// 1.
//// 2.
// D. Other directives
// #undef
//// 1.
//# include<stdio.h>
//# define say 100
//void main(){
//	printf("%d\n",say);
//	# undef  say
//	
//	# define say 200
//	printf("%d\n",say);
//	
//}
// 2.
//# include<stdio.h>
//# define ka 200
//void main(){
//	printf("%d\n",ka);
//	# undef ka
//	# define ka 30000
//	printf("%d\n",ka);
//}

// pragma
// 1. #pragma startup
//#include<stdio.h>
//void sita(){
//	printf("I am sita\n");
//	
//}
//
//void ram(){
//	printf("I am ram\n");
//}
//void main(){
//	# pragma startup
//	# pragma exit
//	printf(" You are in main()");
//	
//	
//	
//	sita();
//	ram();
//	
//}
//// 2.#pragma exit


// Multiline Macros
//1
//#include<stdio.h>
//#define arr  \
//             1,\
//            2,\
//            3,\
//            4 \
//            
//void main(){
//          
//int a[] ={arr};
//printf("%d\n",a[0]);
//printf("%d\n",a[1]);
//printf("%d\n",a[2]);
//}


////2
//# include<stdio.h>
//# define sa int i; \
//     for(i=0;i<=10;i++){ \
//     printf("%d\n",i);} \
//     
//void main(){
//	sa
//	sa
//}
	 

//3
# include<stdio.h>
# define Ha  int arr[10]; \
int i; \
printf("Enter the 10 digits\n"); \
for(i=0;i<10;i++){ \
scanf("%d",&arr[i]);} \
printf("Your 10 digits are\n"); \
for(i=0;i<10;i++){ \
printf("%d",arr[i]);\
printf(" "); } 


void main(){
	Ha
	
	
}



