// Exercise Travel Agency Manager
# include<stdio.h>
struct Travel_Agency{
		char name[25];
		char license[30];
		char Route[30];
		int Kms;
	};
void main(){
	int n,i;
	printf("Enter the number of Driver's Record\n");
	scanf("%d",&n);
	
	
	struct Travel_Agency Driver[n];
	for(i=1;i<=n;i++){
		printf("Enter the driver %d name\n",i);
		scanf("%s",& Driver[i].name);
		printf("\n");
		printf("Enter the driver %d license\n",i);
		scanf("%s",& Driver[i].license);
		printf("\n");
		printf("Enter the driver %d's route\n",i);
		scanf("%s",& Driver[i].Route);
		printf("\n");
		printf("Enter the driver %d distance\n",i);
		scanf("%d",& Driver[i].Kms);
		printf("\n\n");
	}
	printf("**********Travel Agency Drivers Records************\n");
	for(i=1;i<=n;i++){
		printf("Name : %s\n",Driver[i].name);
		printf("Driving License : %s\n",Driver[i].license);
		printf("Route : %s\n",Driver[i].Route);
		printf("Distance in Kms : %d\n",Driver[i].Kms);
		printf("\n\n");
		
		
		
	}
	printf("***********Record Created By Suraj Kumar Jha*************");
	
}
