# include<stdio.h>
int main(){
	int i,j,k,m;
	printf("Press 0 for triangular star pattern  or press 1 for Reversed star Triangular Pattern\n");
	scanf("%d",&i);
	printf("Enter the no. of rows you want to create the pattern\n");
	scanf("%d",&j);
	if(i==0){
	for(k=1;k<=j;k++){
		for(m=1;m<=k;m++){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
}
	else if(i==1){
		for(k=j;k>=1;k--){
		for(m=k;m>=1;m--){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	}
	else{
		printf("------------Sorry! Something went wrong--------------------------");
	}

return 0;
}
