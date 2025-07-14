# include<stdio.h>
void main(){
int a,b,c,d,i,j,k,sum =0;
printf("****************Matrix Multiplication Calculator************\n\n");
printf("Enter the  number of rows of first matrix\n\n");
scanf("%d",&a);
printf("Enter the number of columns of first matrix\n\n");
scanf("%d",&b);
printf("\n\n");
printf("Enter the  number of rows of second matrix\n\n");
scanf("%d",&c);
printf("Enter the number of columns of second matrix\n\n");
scanf("%d",&d);

printf("\n\n");
int arr1[a][b];
int arr2[c][d];
int result[a][d];
printf(" For  our First Matrix\n\n");
for(i=0;i<a;i++){
	for(j=0;j<b;j++){
		printf("Enter the value at index row = %d and column = %d\n\n",i,j);
		scanf("%d",&arr1[i][j]);
	}
}

printf("Our First matrix is\n\n");

for(i=0;i<a;i++){
	for(j=0;j<b;j++){
		printf("%d",arr1[i][j]);
		printf(" ");
	}
	printf("\n");
	
}
printf("\n\n");
printf(" For our Second Matrix\n\n");
for(i=0;i<c;i++){
	for(j=0;j<d;j++){
		printf("Enter the value at index row = %d and column = %d\n\n",i,j);
		scanf("%d",&arr2[i][j]);
	}
}

printf("Our Second matrix is\n\n");

for(i=0;i<c;i++){
	for(j=0;j<d;j++){
		printf("%d",arr2[i][j]);
		printf(" ");
	}
	printf("\n");
	
}
printf("\n\n");

if(b!= c){
	printf("As the number of columns of first  matrix is not equal to number of rows of second matrix \n So the matrix multiplication is not possibe\n");
}

else{
	for(i=0;i<a;i++){
		for(k=0;k<d;k++){
			
			for(j=0;j<b;j++){
				sum = sum+ (arr1[i][j] * arr2[j][k]);
				
			}
			result[i][k] = sum;
			sum = 0;
		}
	}
	
}


if(b==c){
	printf("After the product the resultant matrix is:\n\n");
for(i=0;i<a;i++){
	for(k=0;k<d;k++){
		printf("%d",result[i][k]);
		printf(" ");
	}
	printf("\n");
}
}

printf("\n");
printf("****************Created by Suraj Kumar Jha**************");
}
