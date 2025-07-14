#include<stdio.h>
int fibonacci(int);
 int fibonacci(int x){
 	if(x==0 ||x==1){
 		return 0;
	 }
	 else if(x==2){
	 	return 1;
		 }
	 	else{
	 		return(fibonacci(x-2)+fibonacci(x-1));
		 }
	 }
 	
int main(){
int x,i;
printf("Enter the term until you want the fibonacci series\n");
scanf("%d",&x);
for( i=1;i<=x;i++){
printf("%d",fibonacci(i));
printf(" ");

}
	return 0;
}

