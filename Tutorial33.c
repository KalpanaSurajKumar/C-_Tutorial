# include<stdio.h>
void ma(int arr){

	printf("The value is %d",*(arr+3));
}
void main(){
	int arr[]= {10,20,30,40,50};
	ma(arr);
}
