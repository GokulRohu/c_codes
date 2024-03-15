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
    int array[] = {3,51,45,54,1,2,49};
    int large = array[0];
    for(int i = 0; i < 7; i++)
    {
	if(large < array[i])
	{
	    large = array[i];
	}
    }
   // printf("%d",large);
    int s_large = 0;
    for(int i = 0; i < 7; i++)
    {
	if(array[i] < large && array[i] > s_large)
	{
	    s_large  = array[i];
	}
    }
    printf("%d",s_large);
}

#endif
#if 0
#include<stdio.h>
int main()
{
    int array[] = {1,3,4,9,1,5,3,4,1,4,3,5};
    for(int i = 0; i < 12; i++)
    {
    int flag= 0;
	for(int j = i ;j < 12; j++ )
	{
	    if( array[i] ==  array[j+1] && array[i] != 0)
	    {
		array[j+1] = 0;
		flag = 1;
	    }
	}
	if(flag)
	{
	printf("%d",array[i]);
	flag = 0 ;
	}
    }
}
#endif

#if 0///// MERGE 2 ARRAY BY GENRIC //////////////////
#include<stdio.h>
int main()
{
    int arr1[] = {1,2,3,6,7,9};
    int arr2[] = {4,5,8};
    int size = sizeof(arr1)/sizeof (int) + sizeof arr2/sizeof(int);
    int merge[size];
static int i = 0;
for(int j= 0;j<6;j++)
merge[i++] = arr1[j];
for(int j= 0;j<3;j++)
merge[i++] = arr2[j];
printf("%d %d \n",i,size);
for(int j = 0; j< size;j++)
    printf("%d ",merge[j]);
return 0;
}

#endif
#if 0
#include<stdio.h>
void reve(int num);
int main()
{
    int num = 123;
    reve(num);
    return 0;
}
void reve(int num)
{
    static int rem;
    if(num)
    {
	int temp = num%10;
	rem = (rem*10) + temp;
	num /=10;
	reve(num);
    }
    else
	printf("%d",rem);
}
#endif
#if 1
#include<stdio.h>
union u
{
    int a;
    int b;
};
int main()
{
union u king;
king.a = 4;
printf("%d %d",king.a,king.b);
}
#endif



