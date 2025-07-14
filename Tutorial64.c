//File I/O in C

//1. Reading content of a file
////(i)
//# include<stdio.h>
//void main(){
//	char *str[80];
//	FILE * ptr;
//	ptr = fopen("myfile.txt","r");
//	fscanf(ptr,"%s",str);
//	printf("%s",str);
//	fclose(ptr);
//}
//(ii)
//# include<stdio.h>
//void main(){
//	char *str[80];
//	FILE * ptr;
//	
//	ptr = fopen("myfile.txt","r");
//	if(ptr==NULL){
//		printf("Some Error\n");
//		exit(1);
//	}
//	fscanf(ptr,"%s",str);
//	printf("%s",str);
//	fclose(ptr);
//	
//}

//(iii)
//#include<stdio.h>
//// Note jab bhi fscanf white space encouter karega to vaha se ye terminate
//// ho jayega aur value ko store nahi karega
//void main(){
//	FILE *ptr;
//	char str[85];
//	ptr = fopen("myfile.txt","r");
//	fscanf(ptr,"%s",str);
//	printf("%s",str);
//	fclose(ptr);
//}


//(iv)
//#include<stdio.h>
//void main(){
//	FILE * ptr;
//	char text[90];
//	ptr = fopen("myfile.txt","r");
//	
//	fgets(text,90,ptr);
//	
//	puts(text);
//
//	fclose(ptr);
//}


////2. Writing to the file
////(i)
//# include<stdio.h>
//void main(){
//	FILE *ptr;
//	char inf[90] = "This is amazing that";
//	ptr = fopen("chak.txt","w");
//	fprintf(ptr,"%s",inf);
//	fclose(ptr);
//	
//}
////(ii)
//# include<stdio.h>
//void main(){
//	FILE *sk;
//	char sen[90] = "This is what we like the most which is super cool 30 toffees and 40 mango";
//	sk = fopen("new.txt","w");
//	fprintf(sk,"%s",sen);
//	fclose(sk);
//	
//}


//(iii)
//#include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("gat.txt","w");
//	int n,t;
//	for(n=0;n<100;n++){
//		t=n;
//		
//		fprintf(ptr,"%dpagalSuraj\n",n);
//	}
//	fclose(ptr);
//}
// (iv)
//#include<stdio.h>
//void main(){
//	FILE * ptr=NULL;
//	char sent[90];
//	gets(sent);
//	ptr = fopen("sena.txt","w+");
//	
//  fprintf(ptr,"%s",sent);
//  
//  fgets(sent,90,ptr);
//  puts(sent);
//  fclose(ptr);
//	
//}
//


//3. Appending to the file
//(i)
//#include<stdio.h>
//void main(){
//	FILE * ptr;
//	char str[120];
//	ptr = fopen("sena.txt","a");
//	gets(str);
//	
//	fputs(str,ptr);
//	
//	fclose(ptr);
//	
//	
//	
//	
//}


//(ii)
//#include<stdio.h>
//void main(){
//	FILE * ptr;
//  char info[120];
// ptr = fopen("sena.txt","a");
// gets(info);
// fputs(info,ptr);
//}

//(iii)
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	char real[100];
//	ptr = fopen("sena.txt","a");
//	gets(real);
//	fprintf(ptr,"%s",real);
//	fclose(ptr);
//	
//	
//}
//
//(iv)
# include<stdio.h>
void main(){
	char real[120];
	FILE * ptr;
	ptr = fopen("Sena.txt","a");
	gets(real);
	fprintf(ptr,"%s",real);
	fclose(ptr);
}
