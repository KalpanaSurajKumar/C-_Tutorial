// Callback Functions using Function Pointers in C

//#include<stdio.h>
//int sum(int a,int b){
//	return a+b;
//}
//void hello_and_execute(int(*ptr)(int,int)){
//	printf("Hello user\n");
//	printf("The value of the sum is:%d\n",ptr(10,20));
//}
//void gm_execute(int(*ptr)(int,int)){
//	printf("Good Morning\n");
//	printf("The value of the sum is:%d\n",ptr(20,30));
//}
//int main(){
//	int (*ptr)(int ,int) = sum;
// hello_and_execute(ptr);
// gm_execute(ptr);
//	
//	return 0;
//	
//}

//#include<stdio.h>
//float average(int x ,int y){
//	float c ;
//	c = ((float)(x+y))/2;
//	return c;
//}
//void greet_noon(float (*ptr)(int ,int)){
//	printf("Hello good Afternoon User\n");
//	printf("The value of the average is:%0.1f\n",ptr(30,50));
//}
//
//void greet_Night(float (*ptr)(int,int)){
//	printf("Hello good night user\n");
//	printf("The value of the average is:%0.1f\n",ptr(300,80));
//}
//void main(){
//	float (*ptr)(int,int)= average;
//	greet_noon(average);
//	greet_Night(average);
//}

//1
//#include<stdio.h>
//int num(int x){
//	return x;
//}
//
//void name(int(*ptr)(int)){
//printf("Hello I am inside the main funtion and my name is Suraj kumar Jha\n");
//printf("My favourite number is:%d\n",ptr(10));	
//	}
//	
//void subject(int(*ptr)(int)){
//	printf("Hello My favourite subject is Mathematics\n");
//	printf("My Bad number is:%d",ptr(30));
//	
//}
//
//void main(){
//	int (*ptr)(int,int); // function pointer declaration
//	
//	ptr = num; // function pointer definition
//	
//	name(ptr);
//	subject(ptr);
//	
//	
//}


//2
//#include<stdio.h>
//void watch(){
//	printf("My favourite watch is Rolex\n");
//	
//}
//void subject(){
//	printf("My favourite subject is Mathematics\n");
//}
//
//void door(void (*ptr)()){
//	printf("I am Three doors in my home\n");
//	ptr();
//}
//
//void food(void (*ptr)()){
//	printf("My favourite food is Paneer\n");
//	ptr();
//	
//}
//void main(){
//	void (*ptr)();
//	
//	ptr = watch;
//	food(ptr);
//	
//}
////3
//#include<stdio.h>
//void chainer(){
//	printf("Changing the space and time is the best things in the world of space\n");
//	}
//	
//void some(void (*ptr)()){
//	printf("We are doing somethings in the world of space and time that is important\n");
//	ptr();
//}
//void main(){
//	void (*ptr)();
//	ptr = chainer;
//	some(ptr);
//	
//}

//4
//#include<stdio.h>
//int sum(int x,int y){
//	return x+y;
//}
//
//int prod(int x ,int y){
//	return x*y;
//}
//
//void mess(int (*ptr)(int ,int)){
//	printf("Hey Don't  mess with me that is somethings that is mostly important\n");
//	printf("The operation applied here is:%d\n",ptr(20,3));
//	
//		
//}
//void main(){
//	int (*ptr)(int ,int);
//	ptr = prod;
//	mess(ptr);
//	ptr = sum;
//	mess(ptr);
//	
//	
//}

//5
//#include<stdio.h>
//void  area_rec(int len,int br){
//	printf("We are finding the Area of the Rectangle which is very important\n");
//	printf("The Area of the rectangle is:%d\n",len*br);
//}
//
//void area_peri (int len ,int br){
//	printf("We are finding the Perimeter of the Rectangle which is very important\n");
//	printf("The perimeter of the Rectangle is:%d",2*(len+br));
//}
//void all_info(void(*ptr)(int ,int)){
//	printf("We are in the all_info function and want to access all the information from you\n");
//	ptr(10,20);
//}
//void main(){
//	void (*ptr)(int ,int);
//	ptr = area_rec;
//	all_info(ptr);
//	
//	ptr = area_peri;
//	all_info(ptr);
//	
//}
//6
//#include<stdio.h>
//void sum(int a ,int b){
//	printf("The sum of the numbers %d and %d is:%d\n",a,b,a+b);
//}
//
//void sub(int a,int b){
//	printf("The difference of the numbers %d and %d is:%d\n",a,b,a-b);
//}
//
//void mul(int a,int b){
//	printf("The product of a and b is:%d\n",a*b);
//}
//void all_infone(void (*ptr)(int ,int)){
//	printf("Hey we are all in one which is amazing that is super cooling in the world of justice\n");
//	ptr(200,120);
//}
//void main(){
//	void(*ptr)(int,int);
//	ptr = sum;
//all_infone(ptr);
//
//ptr = sub;
//all_infone(ptr);
//
//ptr = mul;
//all_infone(ptr);
//	
//}
//7
//#include<stdio.h>
//void food(char*name){
//	printf("I am inside the food function\n");
//	printf("My favourite food name is:%s\n",name);
//}
//
//void clothes(char*name){
//	printf("I am inside the clothes function\n");
//	printf("My favourite clothes is:%s\n",name);
//}
//
//void book(char*name){
//	printf("I am inside the book function\n");
//	printf("My favourite book is:%s\n",name);
//} 
//
//void love_all(void(*ptr)(char*)){
//	printf("I am inside the love_all function\n");
//	ptr("Paneer Masala");
//}
//void main(){
//	void (*ptr)(char*);
//	ptr = food;
//	love_all(ptr);
//	ptr = book;
//	love_all(ptr);
//}

//8
//#include<stdio.h>
//void Disease(){
//	printf("Your Disease is not a good diseases which is not good think about it which is not \n");
//	
//}
//void chup(){
//	printf("I wil live always silent which is the natural state of the universe\n");
//}
//
//void something(void (*ptr)()){
//	printf("We are inside the something function that is very important\n");
//	ptr();
//}
//void main(){
//	void (*ptr)();
//	ptr = Disease;
//	something(ptr);
//	
//	ptr = chup;
//	
//	something(ptr);
//}
//9
#include<stdio.h>
void Area(){
	printf(" I am the Area Function\n");
	printf("Area is the region enclosed by the figure\n");
}

void sound(){
	printf("I am inside the sound function\n");
	printf("My favourite sound is OM\n");
}

void Habit(){
	printf("My painfull habit is doing exercise regularly which is not a easy task\n");
}
void Decorator(void (*ptr)()){
	printf("I am inside the Decorator function which is amazing\n");
	ptr();
}
void main(){
	printf("Hey Hello I am inside the main function\n");
	void (*ptr)();
	ptr = Area;
	Decorator(ptr);
	
	ptr = sound;
	Decorator(ptr);
	
	ptr = Habit;
	Decorator(ptr);
}
