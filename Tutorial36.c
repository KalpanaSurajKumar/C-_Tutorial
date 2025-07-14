// Array Reversal Program in C
# include<stdio.h>

void Reversal(int arr[]);
void Reversal(int arr[]){
	int i,j=9;
	int arri[10];
	printf("The given array is:");
	
	for(i=0;i<=9;i++){
		arri[i]=arr[j];
		j= j-1;
		printf("%d",arr[i]);
		printf(" ");
		}
		printf("\n");
		
    printf("The Reversal of this array is:");
    for(j=0;j<=9;j++){
    	printf("%d",arri[j]);
    	printf(" ");
	}
		
		}

void main(){
	int list_arr[] = {10,20,30,40,50,60,70,80,90,100};
	Reversal(list_arr);
	
}
