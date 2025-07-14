// Passing arrays as Function arguments

//1. By declaring array as a function parameter
//i
//# include <stdio.h>
//void chaser(int arr[]);
//void chaser(int arr[]){
//	int i;
//	for(i=0;i<=9;i++){
//		printf("The value at %d is:%d\n",i,arr[i]);
//		
//	
//	}
//	
//}
//void main(){
//int arr[10]	 = {100,200,300,400,500,600,700,800,900,1000};
//chaser(arr);
//}
//ii
//# include<stdio.h>
//void Gamer(int marks[]);
//void Gamer(int marks[]){
//	int i;
//	for(i=0;i<=9;i++){
//		printf("The Marks obtained by the student[%d] is %d\n",i,marks[i]);
//	}
//}
//void main(){
//	int num[10]={83,89,91,93,96,99,92,83,73,87};
//	Gamer(num);
//}
//iii
//// Finding the average of student marks
//# include<stdio.h>
//void info(int average[]);
//void info(int average[]){
//	int i,sum=0,avg,n=0;
//	for(i=0;i<=9;i++){
//		sum = sum+ average[i];
//		n=n+1;
//		
//}
//avg  = sum/n;
//printf("The average marks of the 10 Student in mathematics is: %d",avg);
//}
//void main(){
//	int num[10]={83,89,91,93,96,99,92,83,73,87};
//	info(num);
//}
//

		
	
//iv
//# include<stdio.h>
//void Manner(char name[]);
//void Manner(char name[]){
//	int i;
//	printf("Your name is:");
//	for(i=0;i<=9;i++){
//	printf("%c",name[i]);
//	
//	}
//}
//void main(){
//	char nam[]={'S','u','r','a','j','K','u','m','a','r'};
//	Manner(nam);
//}

//v
//# include<stdio.h>
//void Temper(int gami[]);
//void Temper(int gami []){
//	int max=0,value=0,i,j;
//for(i=0;i<=9;i++){
//	int counter =0;
//	for(j=0;j<=9;j++){
//		if(gami[i]==gami[j]){
//			counter= counter+1;
//			
//		}
//	}
//	if(counter>max){
//		max = counter;
//		value = gami[i];
//	}
//	
//}
//printf("The mode of the data is %d because it occurs %d times which is the most occurence",value,max);
//}
//void main(){
//	int arr[]={40,20,40,20,40,40,80,30,40,49};
//	Temper(arr);
//}

//2. By passing the base address of the array as an function parameter

//i
//# include<stdio.h>
//void salaries(int money[]);
//void salaries(int money []){
//	int i;
//	for(i=0;i<10;i++){
//		printf("The marks of Student %d is:%d\n",i+1,money[i]);
//	}
//}
//void main(){
//	int arr[]={93,92,91,83,81,92,73,75,72,90};
//	salaries(arr);
//}
//ii
//# include<stdio.h>
//void Small_num(int *);
//void Small_num(int *ptr){
//	int small=0,i,j;
//	for(i=0;i<=9;i++){
//		for(j=0;j<=9;j++){
//			if(*(ptr+i)>*(ptr+j)){
//				*(ptr+i)= *(ptr+j);
//				small= *(ptr+i);
//			}
//		}
//	}
//printf("The smallest number in the list is:%d",small);	
//}
//void main(){
//	int num[]={100,200,90,300,400,20,73,93,71,1};
//	Small_num(num);
//}
//iii To find the greatest number in the list
//# include<stdio.h>
//void Greatest_num(int *);
//void Greatest_num(int * ank){
//	int i, max =0,j;
//	for(i=0;i<=9;i++){
//		for(j=0;j<=9;j++){
//			if(ank[i]<ank[j]){
//				ank[i]=ank[j];
//				max = ank[i];
//				
//			}
//		}
//	}
//	printf("The greatest number in the given list is %d",max);
//}
//void main(){
//	int number[]={100,200,300,400,500,100000,39,30,30,59595};
//	Greatest_num(number);
//}

//iv. Mean of the marks scored by the student in ten subjects
# include<stdio.h>
void Mean(int *);
void Mean(int * mean){
	int i,sum=0,n=0;
	float avg;
	for(i=0;i<=9;i++){
		sum = sum + mean[i];
		n +=1;
	}
	avg = sum/n;
	printf("The average marks scored by the student in 10 subjects is:%f",avg);
}
void main(){
	int arri[]= {100,100,100,100,100,100,100,100,,100};
	Mean(arri);
}

//v
