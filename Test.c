# include<stdio.h>
int main(){
	int i,j,k;
	printf("Enter the rows to get the reverse star pattern\n");
	scanf("%d",&i);
	for(j=i;j>=1;j--){
		for(k=j;k>=1;k--){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
