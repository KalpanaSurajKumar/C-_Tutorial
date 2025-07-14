// Enumeration in C

//1
//#include<stdio.h>
//enum level{
//	LOW,
//	MEDIUM,
//	HIGH
//	};
//
//void main(){
//	enum level num;
//	num = LOW;
//	printf("%d",LOW);
//	
//}
//
////2
//#include<stdio.h>
//enum weeks { Sunday ,Monday,Tuesday,Wednesday,Thrusday,Friday,Saturday};
//void main(){
//	int i;
////	enum weeks {Sunday ,Monday,Tuesday,Wednesday,Thrusday,Friday,Saturday,Sunday};
//	for(i=Sunday;i<=Saturday;i++){
//		printf("The value at weeks is:%d\n",i);
////	}
////}

//3
//#include<stdio.h>
//void main(){
//	enum Fruits{ 
//	Apple=400,
//	Banana,
//	Orange,
//	Litchi
//	};
//	
//enum Fruits myVar;
//myVar = Orange;
//
//printf("The value at the Orange is:%d",myVar);
//}

//4
//#include<stdio.h>
//void main(){
//	enum Vegetable{Onion,
//	Cabbage=100,
//	Brijal,
//	Garlic,
//	};
//	enum Vegetable sabji ;
//	sabji = Garlic;
//	
//	printf("The value of this vegetable is:%d",sabji);
//}

//5
//#include<stdio.h>
//void main(){
//	enum Week{Sunday,Monday Tuesday,Wednesday,Thrusday,Friday,Saturday,Sunday};
//	enum Week Var;
//	var = Monday;
//	switch(var){
//		case 0:
//			printf("It is Sunday");
//			break;
//			
//		case 1:
//			printf("It is Monday");
//			break;
//			
//		case 2:
//			printf("It is Tuesday");
//			break;
//			
//		case 3:
//			printf("It is Wednesday");
//			break;
//			
//	}
//}
//6
//#include<Stdio.h>
//enum Month{ 
//January=100,
//Febrary,
//March,
//April
//};
//void main(){
//	int i;
//	for(i=January;i<=April;i++){
//		printf("%d\n",i);
//	}
//	
//	
//}

//7
//#include<stdio.h>
//enum Colors{Red=1000000,
//blue,
//green,
//yellow
//};
//void main (){
//	enum Colors var = yellow;
//	printf("The color of the my var is:%d",var);
//	
//}
//8
#include<stdio.h>
enum phones{Apple ,Samsung,Nokia,Mac,Jio };
void main(){
	
	enum phones mobile = Jio;
	switch (mobile){
		case 0:
			printf("I am a Apple company phone\n");
			break;
			
		case 1:
			printf("I am a Samsung company phone\n");
			break;
			
		case 2:
			printf("I am a Nokia phone\n");
			break;
			
		case 3:
			printf("I am a Mac phone\n");
			break;
			
			
		case 4:
			printf("I am a  Jio phone\n");
			

	}
	
}
