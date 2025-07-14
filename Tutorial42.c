// Static variables in C
//1
//# include<stdio.h>
//void general(){
//	static int b = 4;
//	printf("%d\n",b);
//	b++;
//}
//void main(){
//	
//	 general();
//	 general();
//	 general();
//	 general();
//}
//2
//# include<stdio.h>
//void counter(){
//	static int a = 100;
//	printf("%d\n",a);
//	a++;
//}
//void main(){
//counter();
//counter();
//counter();
//}

//3 
//# include<stdio.h>
//static int a = 100;
//void checker(){
//	a++;
//	printf("The value of a in Checker funtion is:%d\n",a);
//}
//void main(){
//	checker();
//	printf("The value of inside the main function is:%d",a);
//	
	
	
//}


//4
//# include<stdio.h>
//void call_checker(){
//	static int num = 10;
//	printf("The value of num is:%d\n",num);
//	num++;
//}
//void main(){
//	call_checker();
//	call_checker();
//	call_checker();
//	call_checker();
//	call_checker();
//	
//}

//5
//# include<stdio.h>
//void checker(){
//	static int x = 90;
//	printf("%d\n",x);
//	x++;
//}
//void main(){
//	checker();
//	checker();
//	checker();
//	checker();
//}

//6
//#include<stdio.h>
//void count(){
//	static int num = 20;
//	printf("%d",num);
//	num++;
//}
//void main(){
//	int i;
//	for(i =0;i<=10;i++){
//		printf("%d",count);
//	}
//	
//}

//7
//# include<stdio.h>
//void calling(){
//	static int value=100;
//	printf("%d\n",value);
////	value++;
////}
////void main(){
////	calling();
////	calling();
////	calling();
////}
////8
//# include<stdio.h>
//void ga(){
//	static int nu1 = 100;
//	printf("%d\n",nu1);
//	nu1++;
//
//}
//void main(){
//	ga();
//	ga();
//	ga();
//	ga();
//	ga();
//
//	
//}


//9
# include<stdio.h>
void getter(){
	static int x = 100;
	printf("%d\n",x);
	x++;
}
void main(){
	getter();
	getter();
	getter();
	
}
