// Commandline arguments  in C
//1
//# include<stdio.h>
//int main(int argc, char *argv[]){
//	int i;
//	for(i=0;i<argc;i++){
//		printf("The Argument count is:%d\n",i);
//		printf("The Argument value is:%s\n",argv[i]);
//	}
//return 0;	
//}
//2
//# include<stdio.h>
//int   main(int argc,char* argv[]){
//	int i;
//	for(i=0;i<argc;i++){
//		printf("The Argument number is:%d",i);
//		printf("\n");
//		printf("The name of the Arguments:%s",argv[i]);
//	}
//	return 0;
//}
//3
//#include<stdio.h>ss
//#include<stdlib.h>
//// Program to find the cube of the given argument
//int main(int argc,char *argv[]){
//	int i,j;
//	for(j=1;j<argc;j++){
//	
//	i = atoi(argv[j]);
//	printf("The cube of the number %d is:%d\n",i,i*i*i);
//}
//	return 0;
//}


//4
//#include<stdio.h>
//#include<stdlib.h>
//int main(int argc,char *argv[]){
//	// Greater between two numbers
//	int i,j;
//
//		if(atoi(argv[1])>atoi(argv[2])){
//			printf("The number %d is greater than the number %d",atoi(argv[1]),atoi(argv[2]));
//			
//		}
//		
//		else{
//			printf("The number %d is greater than the number %d",atoi(argv[2]),atoi(argv[1]));
//		}	
//
//	return 0;
//}


////5
//#include<stdio.h>
//#include<stdlib.h>
//int  main(int argc,char *argv[]){
//	// To Find the Factorial of the given number
//	int num,mul=1,n;
//	num = atoi(argv[1]);
//	n = num;
//	while(num!=0){
//		mul = mul*num;
//		num = num-1;
//	}
//	printf("The factorial of the number %d is:%d",n,mul);
//	
//	return 0;
//}
//6
//#include<stdio.h>
//#include<stdlib.h>
//void main(int argc,char *argv[]){
//	// To Find the area of the rectangle
//int length,breadth;
//length = atoi(argv[1]);
//breadth = atoi(argv[2]);
//printf("The length of the rectangle is:%d\n",length);
//printf("The breadth of the rectangle is:%d\n",breadth);
//printf("The Area of the rectangle is:%d\n",length*breadth);
//	
//}
//7
//# include<stdio.h>
//void main(int argc,char*argv[]){
//	int i;
//	char * name;
//	for(i=1;i<argc;i++){
//		name = argv[i];
//		
//		printf("The name of my friend %d is %s\n",i,name);
//		
//	}
//}

