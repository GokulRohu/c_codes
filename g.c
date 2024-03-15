/*
Name:Gokulvasanth.B
Date:
Title:
Sample I/P:
Sample O/P:
*/
#if 0
#include<stdio.h>
int getword(char *s)
{
int i = 0;
for(i=0;s[i];i++)
    if (s[i] == ' ' || s[i] == '\t' )
	break;
s[i] = '\0';
return i;
}
int main()
{
    char s[100];
 //   scanf("%[^\n]",s);
    fgets(s,100,stdin);
    int l= getword(s);
    printf("You entered %s and the length is %d\n",s,l);
     return 0;
}
#endif
#if 0
#include <stdio.h>

int my_atoi(const char []);

int main()
{
    char str[20];

    printf("Enter a numeric string : ");
    scanf("%s", str);

    printf("String to integer is %d\n", my_atoi(str));
}
int my_atoi(const char str[])
{
    int i =0,num = 0,flag=1;
    if((str[i] >= 48 && str[i]  <= 57 ) || str[i] == 43 || str[i]  == 45  )
    {
	if(str[i]==45)
	    flag=0;
	if(str[i] == 43 || str[i]  == 45  )
	    i++;
	while(str[i])
	    if(str[i] >= 48 && str[i]  <= 57  )
	    {
		num = (str[i] - 48) + (num * 10);
		i++;
	    }
	    else
		break;
    }
	if(flag)
	    return   num;
	else
	    return -num;
}
#endif
#if 0
#include <stdio.h>

void reverse_iterative(char s[]);

int main()
{
    char s[30];

    printf("Enter any string : ");
    // scanf("%[^\n]", str);
    fgets(s,30,stdin);
    reverse_iterative(s);
    printf("Reversed string is %s\n", s);
}
void reverse_iterative(char s[])
{
   int  i;
    for(i=0;s[i];i++);
    int l = i-1;
    //int K= l-1;
    i=0;
    while (i < l-1/2)
    {
	char temp = s[i];
	s[i] = s[l-1];
	s[l-1] = temp;
	i++;
	l--;
    }
}
#endif
#if 0
#include<stdio.h>
int main()
{
    char a1[6] = {'r','o','k','u','l'};
    char a[5] = {'g','o','k','u','l'};
    char a2[] = "GOKULVASANTH";
    puts(a);
    puts(a1);
    puts(a2);
    return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
    char str[100];int i,j=0;
    fgets(str,100,stdin);
    for(i = 0; str[i]!='\0' ; i++);
    printf("%d",--i);
    while(str[++j]);
    printf("%d",--j);


    return 0;
}
#endif
#if 0
#include<stdio.h>
void print (char *str)
{
    while(*str)
	putchar(*str++);
}
int main()
{
    char * str= "HI GOKUL";
    print(str);
}
#endif
#if 0
#include <stdio.h>
int main()
{
char str[6];
gets(str);
printf("The string is: %s\n", str);
}
#endif
#if 0
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[10],s2[10]=" HELLO";
  //  printf("%ld",strlen(s1));
    //printf("%ld",strlen(s2));
    if(sizeof(s1) >= sizeof(s2))
    {
	int i=0;
	while(s2[i])
	{
	    s1[i] = s2[i];
	    i++;
	}
	s1[i] = '\0';
	puts(s1);
	puts(s2);
    }
    else
	puts("SPACE NOT ENOUGH TO COPY");
}
#endif

#if 0
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[10]="hELlO ",s2[10]="HeLLo";
    printf("%ld",strlen(s1));
    printf("%ld",strlen(s2));
    if(strlen(s1) == strlen(s2))
    {
	int i=0;
	while(s1[i])
	{
	   if( s1[i] == s2[i]|| (s1[i] + 32 == s2[i]) || (s1[i] - 32) == s2[i])
	i++;
	   else
	       break;
	}
	if(i == strlen(s1))
	    puts("STRINGS ARE EQUAL");
	else
	    puts("NOT EQUAL");
    }
	else
	    puts("NOT EQUAL");
}
#endif
#if 0
#include<stdio.h>
#include<string.h>

int main()
{
    char s[]= "NIKIN";
    char s2[12];
    int  i=0,l = strlen(s);
while(s[i])
{
    s2[i] = s[l-1];
    i++;
    l--;
}
s2[i] = '\0';
puts(s2);
(strcmp(s,s2) == 0)?puts("PALINDROME"):puts("NOT PALINDROME");
}
 /*   puts(s);
    while(i<l)
    {
	char temp = s[l-1];
	s[l-1] = s[i];
	s[i] = temp;
	i++;
	l--;
    }
    puts(s);
}*/
#endif
#if 0
#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if (year % 400 == 0 )
    printf("GIVEN YEAR %d IS LEAP YEAR",year);
    else if (year % 100 == 0)
    printf("GIVEN YEAR %d IS NOT LEAP YEAR",year);
    else if (year % 4 == 0 )
    printf("GIVEN YEAR %d IS LEAP YEAR",year);
    else
    printf("GIVEN YEAR %d IS NOT LEAP YEAR",year);
}
#endif

#if 0
#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	for(j=0;j<=i;j++)
	    printf("%2d ",k++);
    printf("\n");
    }
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int num,temp,rem=0;
    scanf("%d",&num);
    while(num>0)
    {
	temp = num%10;
	rem = (rem*10)+ temp;
	num = num / 10;
    }
    printf("%d",rem);
}
#endif

#if 0 /////////////////print unique elements////////////////////
#include<stdio.h>
int repeat(int arr[],int s )
{
    int i,j , count =1;
    for(i = 0; i < s; i++)
    {
	if (arr[i] != 32)
	    for (j = 0; j < s; j++ )
	    {
		if(arr[i] == arr[j + i + 1])
		{
		    count++;
		    arr[j+i+1] = 32;
		}
	    }
	else
	    i++;
    }
    for(i = 0; i < s; i++)
    {
	if(arr[i] == 32)
	    continue;
	printf(" %d ",arr[i]);
    }
    // return count;
}
int main()
{
    int arr[] = {1,5,97,1,46,3,4,5,4,1,2,3,1};
    int size = sizeof arr/ sizeof(int);
    int ret = repeat(arr,size);
    printf("%d",ret);
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int x;
    scanf("%x",&x);
    // printf("%d",x);
    for( int i =31 ; i >= 0 ; i--)
    {
	(x & (1 << i)) ? printf("1 "):printf("0 ");
    }

}
#endif
#if 0
#include<stdio.h>
int main()
{
    int n,i, sum =0;
    scanf("%d",&n);
    for (i = 1; i <= n ; i++)
	if (i % 2 != 0 )
	    sum += i;
    printf("%d\n",sum );
    for (i = 1; i <= n ; i++)
	if (i % 2 != 0 )
	    printf("%d ",i );
}

#endif
#if 0
#include<stdio.h>
int sievearr(int * arr, int s );
int main()
{
    int i;//,arr[] = {5,5,5,0,0,1,3,1,0};
    //  int s = sizeof arr/sizeof(int);
    int s;
    scanf("%d",&s);
    int arr[s];
    for( i = 0 ; i < s; i++ )
	scanf("%d",&arr[i]);
    sievearr( arr, s);
    for(i = 0; i < s; i++)
    {
	if (arr[i] == 'a')
	    continue;
	printf("%d ",arr[i]);
    }
    return 0;
}
int sievearr(int * arr, int s )
{
    int i;
    for(i = 0; i < s; i++)
    {
	for (int j =0; j < s -i; j++)
	{
	    if (arr[i] == arr[j+1+i] )
	    {
		arr[j+1+i] = 'a';
	    }
	}
    }
}
#endif
#if 0 /////////reverse string using recursion //////
#include<stdio.h>
#include<string.h>
void reverse(char *str, int s)
{
    static int i=0;
    if(i< s)
    {
	char t = str[i];
	str[i] = str[s-1];
	str[s-1] = t;
	i++;
	s--;
    reverse(str, s);
    }
    else
	puts(str);

}
int main()
{
    char str[20];
    fgets(str,20,stdin);
    //scanf("%[^\n]",str);
    int s = strlen(str);
    reverse(str,s);
}
#endif
#if 0  ///////////////////reverse  each 1d array ////////////////
#include<stdio.h>
int main()
{
    int r ,c,i,j;
    printf("Enter row column\n");
    scanf("%d%d", &r,&c);
    int arr[r][c];
    printf("Enter all elements\n");
    for(i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    scanf("%d",&arr[i][j]);
	}
    }
    for (i = 0; i < r; i++)
    {
	for (j =c-1 ; j >= 0 ; j-- )
	{
	    printf("%d ", arr[i][j]);
	    //	printf("%d", *(arr[i] + j));
	    //	printf("%d",*(*(arr + i) + j));
	    //	printf("%d", (*(arr + i)) [j]);
	}
	puts("\n");
    }
    return 0;
}
#endif
#if 0 //////////////////////WEIGHT OF THE STRING ////////////
#include<stdio.h>
int weight (char str[])
{
    int i=0, sum =0;
    while(str[i])
    {
	sum = sum + str[i];
	i++;
    }
    return sum;
}

int main()
{
    char str[100];
    //fgets(str,100,stdin);/////////GIVING WRONG ANSWER FOR THIS CODE/////////////////////
    scanf("%[^\n]",str);
    int sum =weight(str);
    printf("%d",sum); 
    return 0;
}
#endif
#if 0
#include<stdio.h>
#include<string.h>
int ckpalindrome(char *s, int l)
{
    int i = 0 , j = l-1;
    while( i < j)
    {
	if(s[i] == s[j])
	{
	    i++;j--;
	}
	/*if(s[i] == s[j-1 ])
	    putchar(s[j]);
	 printf("%c",s[j]);
	*/
	else
	{
	    puts("NON PALIN");
return 0;
	}
    }
    puts("PALINDROME");
}

int main()
{
    char s[12];
    scanf("%[^\n]",s);
    int l = strlen(s);
    int c = ckpalindrome(s,l);
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0 && n < 13)
    {
	if(n == 2)
	    printf("28 DAYS");
	else if(n<8)
	{
	    if(n%2==0)
		printf("30 days");
	    else 
		printf("31 days");
	}
	else
	{
	    if(n%2!=0)
		printf("30 days");
	    else 
		printf("31 days");
	}

    }

}
#endif
#if 0 //////////// TRANSPOSE MATRIX??????????????????????///
#include<stdio.h>
int main()
{
    int r1, c1,i,j;
    scanf("%d%d",&r1,&c1);
    int arr[r1][c1], trp[c1][r1];
    for(i = 0 ; i < r1; i++)
    {
	for(j = 0 ; j < c1; j++)
	{
	    scanf("%d",&arr[i][j]);
	}
    }
    for(i = 0 ; i < r1; i++)
    {
	for(j = 0 ; j < c1; j++)
	{
	    printf("%d ",arr[i][j]);
	}
	printf("\n");
    }
    for(i = 0 ; i < r1; i++)
    {
	for(j = 0 ; j < c1; j++)
	{
	    trp[j][i] = arr[i][j];
	}
    }
    for(i = 0 ; i < c1; i++)
    {
	for(j = 0 ; j < r1; j++)
	{
	    printf("%d ",trp[i][j]);
	}
	printf("\n");
    }
}
#endif
#if 0
#include<stdio.h>
int main()
{
    char str[50];
    fgets(str,50,stdin);
    int i = 0 , j ,l;
    for( l = 0 ; str[l] ;l++);
    l = l-1;
    while(i < l)
    {
	j = i+1;
	while(j < l)
	{
	    if(str[i] == 'k' )
		i++;
	    if(str[i] == str[j])
	    {
		str[j] = 'k';
		j++;
	    }
	    else
		j++;
	}
	i++;
    }
    puts(str);
    i = 0;
    while(i < l)
    {
	if(str[i] == '\0')
	{
	    j =i;
	    while(j < l)
	    {
		str[j] = str[j+1];
		j++;
	    }
	}
	else
	    i++;
    }

    puts(str);
}
#endif
#if 0
#include<stdio.h>
void overwrite(char *str)
{
    int i=0;
    while(str[i])
    {
	str[i]=str[i+1];
	i++;
    }
}
int main()
{
    char arr[100];
    printf("Enter the string:");
    scanf("%[^\n]",arr);
    int i=0,j;
    while(arr[i])
    {
	j=i+1;
	while(arr[j])
	{
	    if(arr[i]==arr[j])
	    {
		overwrite(&arr[j]);
		i--;
	    }
	    j++;
	}
	i++;
    }
    puts(arr);
}
#endif
#if 0
#include <stdio.h>
#include <string.h>

char* removeDuplicate(char str[], int n)
{
    int k = 0;
	int j;

    for (int i = 0; i < n; i++)
    {
	for (j = 0; j < i; j++)
	{
	    if (str[i] == str[j])
		break;
	}

	if (j == i)
	    str[k++] = str[i];
    }

    str[k] = '\0';

    return str;
}

// Driver code
int main()
{
    char str[] = "geeksforgeeks";
    int n = sizeof(str) / sizeof(str[0]);
    printf("%d",n);
    printf("%s\n", removeDuplicate(str, n));
    return 0;
}

#endif
#if 1  ///////////////////SORTTT  each 1d array ////////////////
#include<stdio.h>
int main()
{
    int r ,c,i,j;
    printf("Enter row column\n");
    scanf("%d%d", &r,&c);
    int arr[r][c];
    printf("Enter all elements\n");
    for(i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    scanf("%d",&arr[i][j]);
	}
    }
    int k;
    for(k= 0 ; k < r ; k++)
    {
	for(i = 0; i < c-1; i++)
	{
	    for(j = 0 ; j < c- i -1; j++)
	    {
		if(arr[k][j] > arr[k][j+1])
		{
		    int temp = arr[k][j];
		    arr[k][j] = arr[k][j+1];
		    arr[k][j+1] = temp;
		}
	    }
	}
    }

    for (i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    printf("%d ", arr[i][j]);
	    //	printf("%d", *(arr[i] + j));
	    //	printf("%d",*(*(arr + i) + j));
	    //	printf("%d", (*(arr + i)) [j]);
	}
	puts("\n");
    }
    return 0;
}
#endif
#if 0  ///////////////////largest in each 1d array ////////////////
#include<stdio.h>
int main()
{
    int r ,c,i,j,large = 0;
    printf("Enter row column\n");
    scanf("%d%d", &r,&c);
    int arr[r][c];
    int arr1[r];
    printf("Enter all elements\n");
    for(i = 0; i < r; i++)
    {
	for (j = 0; j < c; j++)
	{
	    scanf("%d",&arr[i][j]);
	}
    }
    for (i = 0; i < r; i++)
    {
	for (j =0  ; j < c ; j++ )
	{
	    if(arr[i][j] > large)
	    {
		large = arr[i][j];
	    }
	}
	arr1[i] = large;
	large = 0;
    }

    for (i = 0; i < r; i++)
	printf("%d ",arr1[i]);
    puts("\n");
return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
	char arr[100];
	scanf("%[^\n]",arr);
	int length=0;
	while(arr[++length]);
	printf("%d\n",length);
	if(length%2!=0)
	{
		arr[length / 2]='*';
	}
	else
	{
		arr[length/2]='*';
		arr[length/2-1]='*';
	}
	puts(arr);
	return 0;
}
#endif
#if 0 ////////////////////// addition of 2 matrices of same size //////////////////
#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    if(r==c)
    {
    int arr[r][c];
    int arr1[r][c];
    int total[r][c];
    for (int i = 0 ; i < r ; i++)
    {
	for(int j = 0; j < c; j++)
	{
	    scanf("%d",&arr[i][j]);
	}
    }
    for (int i = 0 ; i < r ; i++)
    {
	for(int j = 0; j < c; j++)
	{
	    scanf("%d",&arr1[i][j]);
	}
    }
    for (int i = 0 ; i < r ; i++)
    {
	for(int j = 0; j < c; j++)
	{
	    total[i][j] = arr[i][j] + arr1[i][j];
	    printf("%d ",total[i][j]);

	}
	printf("\n");
    }
    }
    else 
	puts("Rows and Columns must be equal");
}


#endif
#if 0 ////////////////////// insert an element in an sorted array //////////////////
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s;
    scanf("%d",&s);
    int * arr;
    arr =(int *) malloc(sizeof(int )*s);
    puts("Enter the array elements :");
    for(int i = 0 ; i < s; i++)
	scanf("%d",&arr[i]);
    puts("\n");
    puts("Enter the element to be inserted :");
    int num;
    scanf("%d",&num);
    arr = realloc(arr,sizeof(s+1));
    arr[s]=num;
    s= s+1;
    for(int i = 0 ; i < s -1; i++)
    {
	for(int j = 0 ; j < s -1- i; j++)
	{
	    if (arr[j] > arr[j+1]) 
	    {
		int temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1]= temp;
	    }

	}
    }
    for(int i = 0 ; i < s; i++)
	printf("%d ",arr[i]);

}

#endif
#if 0
#include<stdio.h>
void countrepeat(int *arr, int s)
{
    int i, j, count = 0;
    for(i = 0 ; i < s; i++)
    {
	int flag = 0;
	for(j = i; j < s; j++)
	{
	    if(arr[i] == 0)
		i++;
	    if(arr[i] == arr[j+1])
	    {
		flag = 1;
		arr[j+1] = 0;
	    }
	}
	if(flag)
	    count++;
    }
    printf("%d",--count);
}
int main()
{
    int s;
    scanf("%d",&s);
    int arr[s];
    for(int i = 0; i < s; i++)
	scanf("%d",&arr[i]);
    countrepeat(arr,s);
    return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int i;
    char str[20];
    fgets(str,20,stdin);
    for( i = 0; str[i]; ++i);
int l = i-1;
i = 0;
while(i < l)
{
    int t = str[l-1];
    str[(l-- -1)] = str[i];
    str[i++] = t;
//i++;
//l--;
}
puts(str);
}

#endif
