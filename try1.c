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
    printf("Enter the size of the array:");
    int size;
    scanf("%d",&size);
    int arr[size];
    int i,j;
    printf("Enter the Element of the array:\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int c=size-1;
    for(i=c;i>=0;i--)
    {
        if(arr[i]!=0)
        {
            arr[c]=arr[i];
            c--;
        }
    }
    for(i=c;i>=0;i--){
        arr[c]=0;
        c--;
    }
    printf("After Move all zeros to Start, Array is:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
#endif
#if 0
#include<stdio.h>
int modi(int a)
{
    a+=1;
printf("%d\n",a);
    
//return a;
}
int madi(int *b)
{
    *b+=1;

printf("%d\n",*b);
//return *b;
}
int main()
{
int a = 5,b=6;
modi(a); 
madi(&b);
printf("%d %d",a,b);
return 0 ;
}
#endif
#if 0
#include"stdio.h"
int main()
{
    int *ptr =NULL;
    printf("%d",*ptr);
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
	int f= 0,s=1,next=0;
	printf("%d %d ",f,s);
	while(next <= num)
	{
	    next = f +s;
	    f=s;
	    s=next;
	    if(next <= num)
	    printf("%d ",next);
	}
    }
    else
	printf("Enter valid input");
}
#endif
#if 0
#include<stdio.h>
int main()
{  //initialize variables
    int first = 0,second = 1,next = 0,num;
    //Give message to user to enter numbers
    printf("Enter the number :");
    //Read the i/p from user
    scanf("%d", &num);
    //validating i/p for negative fibonacci series
    if ( num <= 0 )
    {
	//use loop to print result
	while ( next >= num )
	{
	    printf("%d ",next);
	    //swapping and adding
	    first = second;
	    second = next;
	    next = first - second;
	    //convert i/p into positive and check with next to break loop
	    if ( next > (-1 * num))
	    {
		break;
	    }
	}
    }
    // if validation fails
    else
    {
	printf("Invalid input");
    }
    return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<0)
    {
	int f= 0,s=1,next=0;
	printf("%d %d ",f,s);
	while(next >= num)
	{
	    next = f - s;
	    f=s;
	    s=next;
	    
	    if(next < -num )
		break;
	    printf("%d ",next);
	}
    }
    else
	printf("Enter valid input");
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int num, sum =0;
    scanf("%d",&num);
    int i =1;
    for(i;i <= num; i++)
    {
	if(num % i==0)
	   sum = sum +i;
    }
    sum/2 == num?printf("PERFECT"):printf("NOT PERFECT");
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int num, loop,start ;
    scanf("%d%d%d",&start,&num,&loop);
    printf("AP = %d",start);
    int sum = start;
    for (int i = 0; i < loop-1 ; i++)
    {
	 sum=num + sum;
    printf(",%d",sum);
    }
    
    printf("HP = %f",1/(float)start);
     sum = start;
    for (int i = 1; i < loop ; i++)
    {
	 sum=num + sum;
    printf(",%f",1/(float)sum);
    }
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i=1,j =1,K=1;
    for ( i=num ; i <= 1 ;i--)
    {
	for (j=1 ; j <= num; j++)
	{
	    if 
	    {
	printf("%d",i);
	    K++;
	}
	    else 
		printf(" ");
	}
	printf("\n");
    }
}
#endif

#if 0
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i,j=1;
    for(i=2;i<=num/2;i++)
    {
	if(num % i== 0)
	{
	    j=0;
	    break;
	}
    }
	 j?puts("PRIME"):puts("NONPRIME");

    
}

#endif
#if 0
#include<stdio.h>
int main()
{
    char str1[12]="gokul";
    char str2[12]="Rohu";
    char str3[12];
    int i=0,j=0;
    while(str1[i])
    {
	str3[j] = str1[i];
	i++;
	j++;
    }
    i=0;
    while(str2[i])
    {
	str3[j] = str2[i];
	i++;
	j++;
    }
    str3[j] = '\0';
    puts(str3);
}
#endif
#if 1
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i,j=1;
    if (num==2||num==5||num==7||num==9||num==3)
	printf("PRIME");
    else
    {
	for(i=2;i<10;i++)
	{
	    if(num % i== 0)
	    {
		j=0;
		break;
	    }
	}
	j?puts("PRIME"):puts("NONPRIME");
    }

}

#endif
#if 0
#include<stdio.h>
int read_array(int *arr,int s)
{
    int i=0;
    for(i;i<s;i++)
	scanf("%d",&arr[i]);
}
int *sort_array(int * arr, int s)
{
    int i,j;
    for (i = 0; i < s-i; i++)
    {
	for (j = 0;j < s-i-1; j++)
	{
	    if(arr[j] > arr[j+1])
	    {
		int temp = arr[j+1];
		arr[j+1] = arr[j];
		arr[j] = temp;
	    }
	}
    }
    return arr;
}

float median(int *arr,int s)
{
    if (s%2 == 0)
    {
	float m = (arr[s/2]+arr[(s/2) -1])/2.0;
	return m;
    }
    else
	return arr[s/2];
}

int main()
{
    int s1,s2;
    puts("ENTER 2 ARRAY SIZE:");
    scanf("%d%d",&s1,&s2);
    int arr1[s1],arr2[s2];
    puts("ENTER 1 ARRAY ELEMENTS:");
    read_array(arr1,s1);
    puts("ENTER 2 ARRAY ELEMENTS:");
    read_array(arr2,s2);
   /* int i,j;
    for (i = 0; i < s1-i; i++)
    {
	for (j = 0; i < s1-i-1; j++)
	{
	    if(arr1[j] > arr1[j+1])
	    {
		int temp = arr1[j+1];
		arr1[j+1] = arr1[j];
		arr1[j] = temp;
	    }
	}
    }
    // sorting 2nd 
    for (i = 0; i < s2-i; i++)
    {
	for (j = 0; i < s2-i-1; j++)
	{
	    if(arr2[j] > arr2[j+1])
	    {
		int temp = arr2[j+1];
		arr2[j+1] = arr2[j];
		arr2[j] = temp;
	    }
	}
    }*/
   int * newarr = sort_array(arr1,s1);
   sort_array(arr2,s2);
    float m1 = median(arr1,s1);
    float m2 = median(arr2,s2);
    float M = m1+m2/2;
    printf("ARR1 median is :%f\n",m1);
    printf("ARR2 median is :%f\n",m2);
    printf("BOTH:%f\n",M);
    return 0;
}
#endif	
#if 0
#include<stdio.h>
int main()
{
    int a[]= {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i;
    for(i=1; i<10; i++)
    {
	
#endif
#if 0
#include<stdio.h>
int main()
{
int iptr = 0x12345678;
char * cptr=(char*)&iptr ;
printf("0x%x\n",*cptr);
if (*cptr == 0x78)
    printf("LITTLE");
else
    printf("BIg");
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int n = 99;
    int m = n << 5;
    printf("%d\n",m);
    for(int i =31 ; i >=0 ; i--)
	(m & (1<<i))?printf("1 "):printf("0 ");
}
#endif
#if 0
#include<stdio.h>
int sievearr(int * arr, int s );
int main()
{
    int i,arr[] = {5,5,5,0,0,1,3,1,0};
    int s = sizeof arr/sizeof(int);
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

