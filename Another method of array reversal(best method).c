# include<stdio.h>
void main(){
	void reversal(int * rev){
		int temp,i ;
    for(i=0;i<10/2;i++){
    	temp = rev[i];
    	rev[i] = rev[9-i];
    	rev[9-i] = temp;
    	
	}
	}
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	printf("Original Array is:\n");
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
		printf(" ");
	}
	printf("\n\n");
	printf("After the reversal of the Array:\n");
	
	reversal(arr);
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
		printf(" ");
	}
	
}
