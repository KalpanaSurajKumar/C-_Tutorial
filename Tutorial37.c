// Structures in C programming

//1.
//# include<stdio.h>
//struct Employee{
//	int id;
//	int salary;
//	int name[35];
//};
//void main(){
//
//struct Employee info;
//info.id = 302;
//info.salary = 23543;
//strcpy(info.name,"Suraj");
//printf("The information of this employee is\n");
//printf("The name of the employee is:%s\n",info.name);
//printf("The id of the employee is:%d\n",info.id);
//printf("The salary of the employee is:%d",info.salary);
//
//}

////2.
//# include<stdio.h>
//struct Foods{
//	int quantity;
//	char name[35];
//};
//void main(){
//
// struct Foods f1 = {5,"Paneer"};
// struct Foods f2 = {10,"Meat"};
// struct Foods f3 = {3,"Milk"};
//printf("Our first food is:%s and its quantity is:%dkg\n",f1.name,f1.quantity);
//printf("Our second food is:%s and its quantity is:%dkg\n",f2.name,f2.quantity);
//printf("Our Third food is:%s and its quantity is:%dkg\n",f3.name,f3.quantity);
//}


//3.
//# include<stdio.h>
//struct Animals{
//	char name[53];
//	int weight;
//};
//struct Animals A1 = {"Lion",53};
//struct Animals A2 = {"Monkey",32};
//
//void main(){
//	printf("The name of the animal is:%s and its weight is:%d\n",A1.name,A1.weight);
//	printf("The name of the animal is:%s and its weight is:%d\n",A2.name,A2.weight);
//}

////4.
//# include<stdio.h>
//# include<string.h>
//struct stationary{
//	 char prod_name[73];
//	 int quantity;
//	}s1,s2;
//	void main(){
//	
//strcpy(s1.prod_name,"Pen");
//strcpy(s2.prod_name,"Book");
//s1.quantity = 3;
//s2.quantity = 5;
//printf("The name of the product is:%s and its quantity is:%d\n",s1.prod_name,s1.quantity);
//printf("The name of the product is:%s and its quantity is:%d\n",s2.prod_name,s2.quantity);
//}
//5.
//	# include<stdio.h>
//	# include<string.h>
//	struct Apps{
//		char app_name[87];
//		int price;
//
//	};
//	void main(){
//	struct	Apps a1,a2;
//	strcpy(a1.app_name,"Excel");
//	a1.price = 4500;
//	a2 =a1;
//	strcpy(a2.app_name,"Powerpoint");
//	printf("The name of the app is %s",a2.app_name);
//	}
////6.
//# include<stdio.h>
//# include<string.h>
//struct Books{
//	char name[87];
//	int page_number;
//};
//
//struct Books b1,b2,b3;
//strcpy(b1.name,"Bhagwat Geeta");
//strcpy(b2.name,"Quran");
//strcpy(b3.name,"Bible");
//b1.page_number = 220;
//b2.page_number = 300;
//b3.page_number = 230;
// void print(){
//	printf("The name of the first book is:%s and the no.of pages:%d",b1.name,b1.page_number);
//	printf("The name of the second book is:%s and the no.of pages:%d",b2.name,b2.page_number);
//	printf("The name of the third book is:%s and the no.of pages:%d",b3.name,b3.page_number);
//}
//void main(){
//	print();
//}




//7.
//# include<stdio.h>
//struct Westler{
//	char fighter[24];
//	float height,weight;
//};
//void main(){
//	struct Westler s1 = {"Khali",210,150};
//	struct Westler s2 = {"John Sina",183,100};
//	printf("The name of the westler is:%s and its height is:%fm and its weight is:%fkg\n",s1.fighter,s1.height,s1.weight);
//	printf("The name of the westler is:%s and its height is:%fm and its weight is:%fkg",s2.fighter,s2.height,s2.weight);
//	
//}
//8.
//
//# include<stdio.h>
//struct Robots{
//	char name[35];
//	int IQ;
//};
// This is a Global Scope Stucture variable
//struct Robots r1 ={"Asimo",190};
//struct Robots r2 = {"Vinod",210};
//void print();
//void print(){
//	printf("The name of the Robot is:%s and its IQ is:%d\n",r1.name,r1.IQ);
//	printf("The name of the Robot is:%s and its IQ is:%d",r2.name,r2.IQ);
//}
//void main(){
//	print();
//}


// Quick quiz
#include<stdio.h>
struct Student{
	char name[34];
	int roll_no;
	char course[83];
	long long  phone_no;
	
};

void main(){
	struct Student s1 = {"Suraj",84,"BCA",8219534478};
	printf("The name of the Student is:%s\n and its roll no is:%d\n and course taken by him is:%s\n and his phone number is:%lli",s1.name,s1.roll_no,s1.course,s1.phone_no);
}
