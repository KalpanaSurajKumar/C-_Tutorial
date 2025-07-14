# include<stdio.h>
//
////4
//void value(int,int,int);
//void value(int x,int y,int z){
//	x = 100;
//	y= x+200;
//	z = y+x;
//	
//}
//void main(){
//	int x= 10,y = 20,z =30;
//	printf("The value of x is:%d and The value of y is:%d and The value of z is:%d",x,y,z);
//	value(x,y,z);
//	printf("The value of  x is: %d and The value of y is:%d and The value of z is:%d",x,y,z);
//}
//5
void Gamer(int,int,int);
void Gamer(int a,int b,int c){
	a = 100;
	b = 200;
	c = 300;
	
}
void main(){
	int a =1,b = 2, c= 5;
	printf("The value of a is:%d and the value of b is :%d and the value of c is %d",a,b,c);
    Gamer(a,b,c);
    printf("The value of a is:%d and the value of b is %d and the value of c is %d",a,b,c);
}

