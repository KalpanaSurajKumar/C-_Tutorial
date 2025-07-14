

//2
//# include<stdio.h>
//void main(){
//	int arr[5] = {100,200,300,400,500};
//	int *ptr;
//	ptr = arr;
//	printf("%d",*ptr);
//	
//	}

//3
//# include<stdio.h>
//void  main(){
//	int arr[2][3] ={ {10,20,30},
//	                {50,70,80}
//					};
//	int (*ptr)[3];
//	ptr = &arr;
//	printf("%d",*ptr[0][1]);
//# include<stdio.h>
//void main(){
//	int arr[3][2] = {{1,8},
//	                 {2,4},
//	                 {3,5},
//	
//	                      };
//	                      
//int (*ptr)[2];
//ptr = &arr;
//printf("%d\n",*ptr[0]);
//printf("%d\n",*ptr[1]);
//printf("%d\n",*ptr[2]);
//printf("%d\n",*(ptr[0]+1));
//printf("%d\n",*(*(ptr+1)+2));
//printf("\n\n\n");
//
//printf("%d\n",*ptr[0]);
//printf("%d\n",*arr[0]);
//printf("%d\n",**(arr+1));   // *arr = *(arr+0) = a[0]
//
//printf("\n\n\n");
//printf("%d",*ptr[0]);
//printf("%d\n",*(ptr[0]+1));
//printf("%d",*ptr[1]);
//printf("%d\n",*(ptr[1]+1));
//printf("%d",*ptr[2]);
//printf("%d\n",*(ptr[2]+1));
//
//
//printf("\n\n\n");
//
//printf("%d",*arr[0]);
//printf(" ");
//printf("%d\n",(*(arr+1))[1]);
//
//printf("\n\n\n");
//
//printf("%d",*arr[0]);
//printf("%d",*arr[1]);
//printf("%d",*arr[2]);
//
//printf("%d\n",*(*(arr+1)+1));
//printf("%d\n",*)
//
////	
////}
// 4
//# include<stdio.h>  //  Here I created an array of strings
//void main(){
//	char *ptr[][4] = {{"Suraj","Delhi","phone","laptop"},
//	                  {"Make","Take","Cake","help"} };
//	printf("%s\n",ptr[0][0]);
//	printf("%s\n",ptr[0][1]);
//	printf("%s\n",ptr[0][2]);
//	printf("%s\n",ptr[0][3]);
//	printf("%s\n",*ptr[0]);
//	printf("%s\n",*ptr[1]);
//	printf("%s\n",*(ptr[1]+1));
//	printf("%s\n",*(ptr[1]+2));
//	printf("%s\n",*(ptr[1]+3));
//}

//# include<stdio.h>
//void main(){
//	char *car[]= {"Ford","Tata","Lamb"};
//	
//	printf("%s\n",car[0]);
//	printf("%s\n",car[1]);
//	printf("%s\n",car[2]);
//}

// 6.
//# include<stdio.h>
//// Array of integers pointers to store the address of the multiple  integer variables
//void main(){
//	int a = 10,b = 20, c= 30;
//	int * arr [3] = {&a,&b,&c};
//	
//	printf("%d\n",*arr[0]);
//	printf("%d\n",*arr[1]);
//	printf("%d\n",*arr[2]);
//}


// 7 .
// Array of character pointers to store the address of the multiple char varibles
//# include<stdio.h>
//void main(){
//	char a = 'A',b = 'B',c = 'C';
//	char * some[] = { &a,  &b, &c};
//	printf("%c\n",*some[0]);
//	printf("%c\n",*some[1]);
//	printf("%c\n",*some[2]);
//}



//8. // 
# include<stdio.h>
void main(){
char *names[] = {"Suraj","Maya","Chaska","Gamer","India"};
printf("%s\n",names[0]);
printf("%s\n",names[1]);
printf("%s\n",names[2]);
printf("%s\n",names[3]);
printf("%s\n",names[4]);
	
}
