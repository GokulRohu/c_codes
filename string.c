/*
Name:Gokulvasanth.B
Date:
Title:
Sample I/P:
Sample O/P:
*/
#if 0
#include<stdio.h>
int main()
{
}
#endif
#if 0 //////my strcat function///////
#include<stdio.h>
#include<string.h>
void mystrcat(char * s1, const char *s2,int l)
{

    while(*s2)
    {
	s1[l++] = *s2++;
    }
    s1[l]='\0';
    puts(s1);

}
int main()
{
char str1[20] = "gokul";
char str2[10] = "ROHINI";
    int l = strlen(str1);
    int l1 = strlen(str2);
if(sizeof(str1) > l+l1)
mystrcat(str1,str2,l);
else
    puts("size not enough");
    //puts(str1);
}
#endif
#if 0 //////my strcpy function///////
#include<stdio.h>
#include<string.h>
void mystrcpy(char * s1, char *s2)
{
   /* int l = strlen(s1);

    while(*s2)
    {
	s1[l++] = *s2++;
    }
    s1[l]='\0';*/
    int l = strlen(s2);
    while(*s1++ = *s2++);
    puts(s1-(l+1));

}
int main()
{
//char str1[20] = "gokul";
char str1[15];
char* str2 = "vasanth";
mystrcpy(str1,str2);
   // puts(str1);
}
#endif
#if 0////strev in iteration //
#include<stdio.h>
#include<string.h>
void mystrev(char *str,int l)
{
    int i=0;
    while(i<--l)
    //if(i<--l)
    {
	char temp = str[i];
	str[i++] = str[l];
       str[l] = temp;
   //mystrev(str,++l);
    }
}
int main()
{
    char str[20];
   // scanf("%s",str);
    scanf("%[^\n]",str);
    //gets("str");
  //  fgets(str,20,stdin);
   int l = strlen(str) ;
   mystrev(str,l);
puts(str);    
}
#endif
#if 0 /// strrev using recursion///
#include<stdio.h>
#include<string.h>
void mystrev(char *str,int l)
{
   static int i=0;
    if(i<l)
    {
	char temp = str[i];
	str[i++] = str[--l];
       str[l] = temp;
   mystrev(str,--l);
    }
}
int main()
{
    char str[20];
   // scanf("%s",str);
    //scanf("%[^\n]",str);
   // gets(str,stdin);
    fgets(str,20,stdin);
   int l = strlen(str) ;
   mystrev(str,l);
puts(str);    
}
#endif
#if 1////////// strcmp//////////
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[20];
    char str1[10];
    scanf("%[^\n]",str);
    getchar();
    scanf("%[^\n]",str1);
    int i = 0;
    char *p=str;
    char *q=str1;
    if(strlen(str) == strlen(str1))
    {
	while(str[i])
	{
	    str[i]= tolower(str[i]);
	    str1[i]= tolower(str1[i]);
	    i++;
	}
	while(*p)
	{
	    if(*p++ == *q++)
		continue;
	    else
	    {
		puts("Notequal");
		return 0;
	    }

	}
	puts("equal");
    }

	/*	if(strcmp(str,str1)== 0)
		puts("equal");
		else
		puts("Notequal");
		}*/
    else
	puts("ERROR");
}
#endif
