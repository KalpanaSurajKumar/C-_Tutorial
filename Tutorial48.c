# include<stdio.h>
# include<stdlib.h>
// Using the simple method
//void main(){
//	int n;
//	char * ptr;
//	printf("Enter the length of id of the first Employee\n");
//	scanf("%d",&n);
//	
//	ptr = (char *) malloc((n+1)*sizeof(char));
//	printf("Enter the id of the First Employee\n");
//	scanf("%s",ptr);
//	
//	
//	printf("The id of the  First Employee is :%s\n",ptr);
//
//	free(ptr);
//	printf("\n\n");
//	
//	printf("Enter the length of id of the Second Employee\n");
//	scanf("%d",&n);
//	
//	ptr = (char *) malloc((n+1)*sizeof(char));
//	printf("Enter the id of the Second Employee\n");
//	scanf("%s",ptr);
//	
//	
//	printf("The id of the  Second Employee is :%s\n",ptr);
//
//	free(ptr);
//	printf("\n\n");
//	
//	
//	printf("Enter the length of id of the Third Employee\n");
//	scanf("%d",&n);
//	
//	ptr = (char *) malloc((n+1)*sizeof(char));
//	printf("Enter the id of the Third Employee\n");
//	scanf("%s",ptr);
//	
//	
//	printf("The id of the Third Employee is :%s\n",ptr);
//
//	free(ptr);
//	printf("\n\n");
//}



// Using the loop

void main(){

int i=1,n;
char * ptr;

while(i<4){
	printf("Enter the length of the characters in Employee %d\n",i);
	scanf("%d",&n);
	ptr = (char *) malloc((n+1)*sizeof(char));
	
	printf("Enter the id of the Employee %d\n",i);
	scanf("%s",ptr);
	printf("The id of the Employee %d is:%s\n",i,ptr);
	i++;
	free(ptr);

}

}
