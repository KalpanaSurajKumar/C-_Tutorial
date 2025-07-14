// conditional directives

//#if
// 1.
//# include<stdio.h>
//# define num 100
//void main(){
//	#if num>30
//	printf("I am 100 and greater than 30\n");
//	#else
//	printf("This is not a good thing which is not good\n");
//	
//	#endif
	
//}

// #elif
//2.
//# include<stdio.h>
//#define sa 215
//void main(){
//	#if sa <34
//	printf("You are less than 34\n");
//	
//	#elif sa ==215
//	printf("You are equal to 215\n");
//	
//	
//	#endif
//
//}

//# else


//3.
//#include<stdio.h>
//# define sa 340
//void main(){
//	#if sa>500
//	printf("You are greater than 500\n");
//	
//	#else
//	print("You are something but i know nothing\n");
//	
//	#endif
//	
//	
//}


// #ifdef

//4.
//# include<stdio.h>
//# define kat 100
//void main(){
//	#ifdef kat
//	print("Mr.kat you are defined\n");
//	#endif
//	
//}

//# ifndef


//5.

//#include<stdio.h>
//#define sa 200
//void main(){
//	#ifdef sa
//	printf("You are done sa\n");
//	
//	#ifndef sa
//	printf("You are amazing which is not");
//	
//	#endif
//}
// # undef
//6.
//# include<stdio.h>
//# define SA 10
//void main(){
//	int i;
//	for(i=0;i<SA;i++){
//		printf("%d\n",i);
//	}
//	
//	printf("\n\n\n\n\n\n");
//	
//	#undef SA 
//	
//	#define SA 20
//	
//	for(i=0;i<SA;i++){
//		printf("%d\n",i);
//	}
//	
//	
//}

//// # endif
//
////7.
//# include<stdio.h>
//# define w 200
//void main(){
//
//#if w == 200
//printf("You are equal to 200\n");
//
//}
//
//#endif

//
//// # pragma
//
////8.
//# include<stdio.h>
//void A();
//void B();
//void C();
//# pragma startup
//# pragma exit
//
//void A(){
//	printf("I am A\n");
//}
//
//void B(){
//	printf("I am B\n");
//
//}
//void C(){
//	printf("I am C\n");
//}
//void main(){
//	printf(" I am a Main()\n");
//	A();
//	B();
//	C();
//}


// Other important predefined directives

// __FILE__
//9.
//# include<stdio.h>
//void main(){
//	printf("The name of this file is%s",__FILE__);
//}

// __LINE__

//10.
//# include<stdio.h>
//void main(){
//	printf("The number of this line is:%d",__LINE__);
//}

// __DATE__
//11.
//# include<stdio.h>
//void main(){
//	printf("Today date is:%s",__DATE__);
//}


// __TIME__


//12. 
//#include<stdio.h>
//void main(){
//	printf("The time is:%s",__TIME__);
//}

// __STDC__


//13.

# include<stdio.h>

void main(){
	printf("The Ansi compiler is:%d",__STDC__);
	
}
