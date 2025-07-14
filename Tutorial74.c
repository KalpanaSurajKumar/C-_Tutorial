#include<stdio.h>
#include<math.h>
float euclid_distance(int x1,int y1,int x2,int y2){
	int d;
	
	d = ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	(float)d;
	
	return sqrt(d);
}

void Area_circle(int x1,int y1,int x2, int y2,float(*ptr)(int ,int ,int ,int)){

printf("The Distance of the points or radius of the circle is:%0.3f\n",ptr(x1,y1,x2,y2));
float radius = ptr(x1,y1,x2,y2);
printf("The Area of the Circle is:%0.3f\n",3.14*radius*radius);
}
	
	
void main(){
	float (*ptr)(int,int ,int,int);
	
	int x1,y1,x2,y2;
	printf("Enter the value of x1\n");
	scanf("%d",&x1);
	printf("Enter the value of y1\n");
	scanf("%d",&y1);
	printf("Enter the value of x2\n");
	scanf("%d",&x2);
	printf("Enter the value of y2\n");
	scanf("%d",&y2);
	
	ptr = euclid_distance;
	
	Area_circle(x1,y1,x2,y2,ptr);
		
	
}

