// File Handing in c (important functions)
//1.fgets()
////1
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	char text[1001];
//	ptr = fopen("sena.txt","r");
//	while(fgets(text,1000,ptr)){
//	
//	puts(text);
//}
	

//2
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	char info[1000];
//	ptr = fopen("check.txt","r");
//	fgets(info,999,ptr);
//	puts(info);
//	fclose(ptr);
//	
	
//}
//3
//# include<stdio.h>
//void main(){
//	char so[1000];
//	FILE * ptr;
//	ptr = fopen("yr.txt","r");
//	fgets(so,999,ptr);
//	puts(so);
//fclose(ptr);
//}
//2.fputs()
//1
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	char str[1000];
//	printf("write something in the file\n");
//	gets(str);
//	ptr = fopen("sat.txt","a");
//	fputs(str,ptr);
//	fclose(ptr);
//}

////2
//#include<stdio.h>
//void main(){
//	FILE *ptr;
//	char str[1000]="\n \n sorry bro!";
//	ptr = fopen("sat.txt","a");
//	fputs(str,ptr);
//	fclose(ptr);
//	
//}
////3.
//# include<stdio.h>
//void main(){
//char intro[1000];
//printf("Give introduction about Yourself\n");
//gets(intro);
//FILE *ptr;
//ptr = fopen("sat.txt","w");
//fputs(intro,ptr);
//fclose(ptr);
//	
//}
//.4
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("sat.txt","w");
//	char sen[1000]="My name is Suraj kumar.\n I Live in baddi in Himachal Pradesh\n so that is so super great\n that is amazing\n soothing";
//	 fputs(sen,ptr);
//}
//5.
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("sat.txt","w");
//	char * text = "This is somethings which is nothing that is great thing\n which is good\n so that is";
//	fputs(text,ptr);
//	fclose(ptr);
//	
//}

//3.fgetc()
//1
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	char let;
//	ptr = fopen("sat.txt","r");
//	let=fgetc(ptr);
//	putchar(let);
//	fclose(ptr);
//	
//}

//2
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	char ch ;
//	ptr = fopen("sat.txt","r");
//	fgetc(ptr);
//    putchar(fgetc(ptr));
//    fclose(ptr); 
//	
//}
//3
//# include<stdio.h>
//void main(){
//
//FILE * ptr;
//char cha;
//ptr = fopen("sat.txt","r");
//cha= fgetc(ptr);
//putchar(cha);
//putchar(cha);
//putchar(cha);
//putchar(cha);
//putchar(cha);
//putchar(cha);
//putchar(cha);
//fclose(ptr);
//}
//# include<stdio.h>
//void main(){
//	char ch;
//	FILE * ptr;
//	ptr = fopen("sat.txt","r");
//	ch = fgetc(ptr);
//	fseek(ptr,2,SEEK_SET);
//	ch = fgetc(ptr);
//	putchar(ch) ;
//	printf("%ld",ftell(ptr));
//	putchar(ch);
//	fclose(ptr);
//}
//# include<stdio.h>
//void main(){
//	char ch;
//	FILE * ptr;
//	ptr = fopen("sat.txt","r");
//	ch = fgetc(ptr);
//	putchar(ch);
//	ch = fgetc(ptr);
//	putchar(ch);
//	ch = fgetc(ptr);
//	putchar(ch);
//	ch = fgetc(ptr);
//	putchar(ch);
//	ch = fgetc(ptr);
//	putchar(ch);
//	ch = fgetc(ptr);
//	putchar(ch);
//	
//	
//	fclose(ptr);
//}

//4.fputc()
//1
//# include<stdio.h>
//// To write a character 
//void main(){
//	FILE * ptr;
//	ptr = fopen("sat.txt","w");
//	fputc('R',ptr);
//	fclose(ptr);
//	
//	
//}

//2
//# include<stdio.h>
//void main(){
//	FILE *ptr;
//	ptr = fopen("sat.txt","w");
//	fputc('Z',ptr);
//	fclose(ptr);
//}
//3
//# include<stdio.h>
//void main(){
//	FILE *ptr;
//	ptr = fopen("sat.txt","w");
//	fputc('@',ptr);
//	fputc('#',ptr);
//	fputc('$',ptr);
//	fputc('&',ptr);
//	fputc('*',ptr);
//	fclose(ptr);
//}
//5.getw()
//1
//# include<stdio.h>
//void main(){
//	FILE * fp;
//	int ch;
//	fp = fopen("sat.txt","r");
//	ch = getw(fp);
//	printf("%d",ch);
//	fclose(fp);
//	}

//2
//# include<stdio.h>
//void main(){
//	FILE *fp;
//	int ch;
//	fp = fopen("Texa.txt","r");
//	ch= getw(fp);
//	printf("%d",ch);
//	
//}

//3
//# include<stdio.h>
//void main(){
//	FILE * fp;
//	int num;
//	fp = fopen("Texa.txt","r");
//	num = getw(fp);
//	printf("%d",num);
//	fclose(fp);
//}

//6.putw()
//1
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr= fopen("Texa.txt","w");
//	putw(10,ptr);
//	fclose(ptr);
//
//
//}

//2
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("Texa.txt","w");
//	putw(20,ptr);
//	fclose(ptr);
//}

//3
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("Texa.txt","w");
//	putw(30,ptr);
//	fclose(ptr);
//}


//7.fseek()
////1
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("Texa.txt","a");
//	fseek(ptr,3,SEEK_SET);
//	printf("The current position of the cursor is:%ld",ftell(ptr));
//	
//	fputs("Suraj is",ptr);
//	fclose(ptr);
//}

//2
//# include<stdio.h>
//void main(){
//	char *tex;
//	FILE * ptr;
//	ptr = fopen("Texa.txt","a+");
//	fputs("Money Raining is the strong",ptr);
//	fseek(ptr,-29,SEEK_END);
//	printf("%ld",ftell(ptr));
//	fputs("Pagal",ptr);
//	printf("%ld",ftell(ptr));
//	fseek(ptr,200,SEEK_END);
//	fgets(tex,100,ptr);
//	puts(tex);
//	fclose(ptr);
//	
//	
//}

//3
//# include<stdio.h>
//void main(){
//	FILE *ptr;
//	char str[1000];
//	ptr = fopen("sena.txt","a+");
//	fseek(ptr,10,SEEK_CUR);
//	printf("%ld",ftell(ptr));
//	fseek(ptr,10,SEEK_CUR);
//	printf("%ld",ftell(ptr));
//	fgets(str,1000,ptr);
//	puts(str);
//	fseek(ptr,10,SEEK_CUR);
//	puts(str);k
//	
//	
//}
//8.ftell()
//1
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("sena.txt","r");
//	printf("%The current position is:%ld",ftell(ptr));
//	fclose(ptr);
//}

//2
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	char * teli;
//	ptr = fopen("sena.txt","a+");
//	fseek(ptr,35,SEEK_END);
//	printf("%d",ftell(ptr));
//	fgets(teli,300,ptr);
//	puts(teli);
//	printf("%d",ftell(ptr));
//	fclose(ptr);
//	
//}
//3
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("sena.txt","w");
//	fseek(ptr,200,SEEK_CUR);
//	printf("%ld",ftell(ptr));
//	fclose(ptr);
//}

//9.rewind()
//1
//# include<stdio.h>
//void main(){
//	FILE *ptr;
//	ptr = fopen("sena.txt","r");
//	printf("%ld\n",ftell(ptr));
//	fseek(ptr,200,SEEK_SET);
//	printf("%ld\n",ftell(ptr));
//	rewind(ptr);
//	printf("%ld\n",ftell(ptr));
//	
//	
//	fclose(ptr);
//	
//}
//2
//# include<stdio.h>
//void main(){
//	FILE *ptr;
//	ptr = fopen("sena.txt","r");
//	printf("%ld\n",ftell(ptr));
//	fseek(ptr,300,SEEK_CUR);
//	printf("%ld\n",ftell(ptr));
//	rewind(ptr);
//	printf("%ld",ftell(ptr));
//}

//3
//#include<stdio.h>
//void main(){
//	FILE *ptr;
//	ptr = fopen("sena.txt","r");
//	fseek(ptr,57,SEEK_END);
//	printf("%ld\n",ftell(ptr));
//	printf("%ld\n",ftell(ptr));
//	rewind(ptr);
//	printf("%ld\n",ftell(ptr));
//}

// 10.fprintf() and fscanf()

// fprintf()
//1.
//#include<stdio.h>
//void main(){
//	FILE *ptr;
//	ptr = fopen("sena.txt","w");
//	fprintf(ptr,"Somethings that is good which is amazing who wants to solve this quest\n");
//	fclose(ptr);
//	
//}

//2
//#include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("sena.txt","a");
//	fprintf(ptr,"Somethings that is good that is important do it otherwise you will fail\n");
//	fclose(ptr);
//	
//}

//3
//#include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("sena.txt","a");
//	fprintf(ptr,"Somethings that is good that is important do it otherwise you will fail\n");
//	fclose(ptr);
//}

// fscanf()
//1
//#include<stdio.h>
//void main(){
//// fscanf is used to read the value from the file
//FILE * ptr;
//ptr = fopen("sena.txt","r");
//char str[200];
//fscanf(ptr,"%s",str);
//printf("%s",str);	
//}
//2
//#include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("sena.txt","r");
//	char str[200];
//	fscanf(ptr,"%s",str);
//	printf("%s",str);
//	fclose(ptr);
//}





//11. File modes r+,w+,a+

//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	ptr = fopen("sena.txt","r+");
//	fprintf(ptr,"Maya\n");
//	fclose(ptr);
//
//}
//2
//#include<stdio.h>
//void main(){
//	FILE * ptr;
//	char te[1000];
//	ptr = fopen("sena.txt","w+");
//	scanf(ptr,"%s",te);
//	printf("%s",te);
//	fclose(ptr);
//	// Yaad rakhna ki write mode mai sara content remove ho jata hai W+ mode main bhi sara content delete ho jayega chahe aap write mode mai hi kyo na kholo
//	
//}

//3
//# include<stdio.h>
//void main(){
//	FILE * ptr;
//	char some[1000];
//	ptr = fopen("sena.txt","a+");
//	fprintf(ptr,"Hey this is Suraj kumar who wants to understand the universe");
//	fclose(ptr);
	
	
//}
//4
# include<stdio.h>
void main(){
	FILE * ptr;
	char some[1000];
	ptr = fopen("sena.txt","r+");
	fprintf(ptr,"Some that is important which is good");
	fclose(ptr);
	
}


