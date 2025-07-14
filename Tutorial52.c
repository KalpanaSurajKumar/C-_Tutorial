// void pointer in c
//1
//# include<stdio.h>
//void main(){
//	int number = 100;
//	void * num;
//	num = &number;
//	printf("The value of num is %d",*((int*)num));
//}


//2
//# include<stdio.h>
//void main(){
//int num = 100;
// char ak = 'S';
//void * ptr;
//ptr = &num;
//printf("%d\n",ptr);
//ptr = & ak;
//printf("%c",ptr);
//}

//3
//# include<stdio.h>
//void main(){
//	char name[] = "Suraj";
//	void * nam;
//	nam = & name;
//	printf("The name of the person is:%s\n",((int*)nam));
//}


//4
//# include<stdio.h>
//void main(){
//	int num = 100;
//	char name[] = "Suraj";
//	char ak = "G";
//	void * check;
//	check = &num;
//	printf("The value of the integer is:%d\n",*((int*) check));
//	check = &name;
//	printf("The name of the employee is:%s\n",(char*)name);
//	check = &ak;
//	printf("The favourite character is:%c",*((char*)check));
	
//}

////5
//# include<stdio.h>
//void main(){
//	 char name[] = "Suraj";
//	void * kisi_ka_nahi;
//	kisi_ka_nahi = &name;
//	printf("Your name is %s",((char*)kisi_ka_nahi));
//	
//}

//6
# include<stdio.h>
void main(){
	int game= 200;
	char *name;
	name = "Maya is great";
	float fl = 356.353;
	void *some[3];
	some[0] = &game;
	some[1] = name;
	some[2] = &fl;
	printf("The game is:%d\n",*((int*)some[0]));
	printf("The name of the person is:%s\n",(char*)some[1]);
	printf("The value of the float is:%f\n",*((float*)some[2]));
}


