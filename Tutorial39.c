// Unions in C
//1
//# include<stdio.h>
//union Student{
//	int id;
//	char name[35];
//};
//void main(){
//	union Student s1,s2;
//	s1.id = 34;
//	strcpy(s1.name,"Suraj");
//	strcpy(s2.name,"Maya");
//	s2.id = 83;
//	printf("The id of student 1 is:%d\n",s1.id);
//	printf("The id of student 2 is:%d\n",s2.id);
//	printf("Th size of the union is:%d",sizeof(s1));
//	
//}

//2
//# include<stdio.h>
//union ux{
//	int size;
//	char name[25];
//};
//void main(){
//	union ux u1;
//	u1.size = 100;
//	strcpy(u1.name,"Android");
//	printf("%d\n",u1.size);
//	printf("%s\n",u1.name);
//}

//3
//# include<stdio.h>
//union record{
//	char mark[35];
//	int value;
//};
//void main(){
//
//union record r1 = {"Position\n",200};
//printf("The mark name is:%s",r1.mark);
//printf("The value is:%d",r1.value);
//
//}
////4
//#include<stdio.h>
//union Home{
//	char name[34];
//	int no;
//};
//void main(){
//	union Home h1 = {"Drawing",10};
//	
//	printf("The name of the room is:%s\n",h1.name);
//	printf("The number of the room is:%d",h1.no);
	
	
//}


////5
//# include<stdio.h>
//union store{
//	char name[34];
//	union shop{
//		char nam[32];
//		int workers;
//	}sh;
//}st;
//void main(){
//	st.sh.workers = 100;
//	strcpy(st.sh.nam,"Patanjali");
//	printf("%d",st.sh.workers);
//	printf("%s",st.sh.nam);
//}

//6 
# include<stdio.h>
union Organisation{
	char name[34];
	int total_employee;
	union Employee{
       char employee_name[34];
       int id;
	}emp;
	
}Org;
void main(){
strcpy(Org.emp.employee_name,"Suraj");
Org.emp.id = 83;
strcpy(Org.name,"Kumar Intelligence");
Org.total_employee = 3990;
printf("%s",Org.emp.employee_name);
printf("%d",Org.emp.id);
printf("%s",Org.name);
printf("%d",Org.total_employee);
}

//7

//8

//9
