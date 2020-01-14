#include<stdio.h>
char *myStrcat(char *s1,char *s2){
	static char sum[50];
	static char *s;
	s=sum;
	int a,b,i,j;
	a=strlen(s1);
	b=strlen(s2);
	for(i=0;i<a;i++){
			s[i]=s1[i];	
	}
	for(i=0;i<b;i++){
		s[i+a]=s2[i];
	}
	
	return s;
}



int main(){
 char *a,*b,s1[25],s2[25],s[50],*c;
 while(1){
 
 puts("Enter the first string:");
 gets(s1);
 puts("Enter the second string:");
 gets(s2);
 
 a=s1;
 b=s2;
 c=&s;
 c=myStrcat(a,b);
 int i;
 
 printf("%s\n",c);
 
}
 
 
 
 
 
 
 
 return 0;
}
