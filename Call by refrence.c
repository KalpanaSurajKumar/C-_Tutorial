# include<stdio.h>
//void sumer(int* ,int* );
//void sumer(int *x,int *y){
//	int temp,amp;
//	temp = *x+*y;
//	amp = *x-*y;
//	*x = temp;
//	*y = amp;	
//}
//int main(){
//	int a=4,b=3;
//	printf("The value of a is:%d and b is:%d\n",a,b);
//	sumer(&a,&b);
//	printf("Now The value of a is:%d and b is %d:",a,b);
//	
//	return 0;
//}

//1
//void changer(int *); 
//void changer(int *c){
//	*c =5888849;
//}
//void main(){
//	int c = 120;
//	printf("The value of c is:%d",c);
//	changer(&c);
//	printf("The value of c is:%d",c);
//}
//2
//void Taker(int*,int*);
//void Taker(int *x, int *y){
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	
//}
//void main(){
//	int x = 20, y = 40;
////	printf("The value  of x is:%d and The value of y is:%d",x,y);
////	Taker(&x,&y);
////	printf("The value  of x is:%d and The value of y is:%d",x,y);
////}
////3
//void checker(int *,int *);
//void checker(int *x, int *y){
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	
//}
//void main(){
//	int a = 100, b = 240;
//	printf("The value of a is:%d and The value of b is:%d",a,b);
//	checker(&a,&b);
//	printf("The value of a is:%d and The value of b is:%d",a,b);
//	
//}
//4
void testi(int *,int *);
void testi(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
void main(){
	int x= 100, y= 200;
	printf("The value of x is:%d and The value of y is:%d",x,y);
	
    testi(&x,&y);
	printf("The value of x is:%d and The value of y is:%d",x,y);
	
}

