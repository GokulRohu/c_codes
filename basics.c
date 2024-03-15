/*
Name:Gokulvasanth.B
Date:
Title:
Sample I/P:
Sample O/P:
*/
#if 0
#include<stdio.h>
#include<stdlib.h>
void matrixmul(int **arr1,int r1,int c1,int **arr2,int r2,int c2)
{
    int **res,i,j;
    res = malloc(r1*sizeof(int*));
    for(i = 0; i < r1; i++)
	res[i] = malloc(c2*sizeof(int));
    for(i = 0 ; i< r1; i++)
	for( j = 0 ; j<c2; j++)
	    for(int k= 0;k < c1; k++ )
		res[i][j] += arr1[i][k]*arr2[k][j];
    // printing result
    for(i = 0 ; i< r1; i++)
    {
	for(j = 0 ; j<c2; j++)
	{
	    printf("%d",res[i][j]);
	}
	printf("\n");
    }
}



int main()
{
    int r1,c1,r2,c2,i,j;
    puts("ENTER 1ST  MATRIX ROW AND COLUMN");
    scanf("%d%d",&r1,&c1);
    int **arr1;
    arr1 = malloc(r1*(sizeof(int*)));
    for( i = 0; i < r1; i++)
	arr1[i] = malloc(c1*sizeof(int));
    for(i = 0 ; i< r1; i++)
	for(j = 0 ; j<c1; j++)
	    scanf("%d",&arr1[i][j]);
    puts("ENTER 2ST  MATRIX ROW AND COLUMN");
    scanf("%d%d",&r2,&c2);
    int **arr2;
    arr2 = malloc(r2*(sizeof(int*)));
    for( i = 0; i < r2; i++)
	arr2[i] = malloc(c2*sizeof(int));
    for(i = 0 ; i< r2; i++)
	for(j = 0 ; j<c2; j++)
	    scanf("%d",&arr2[i][j]);
    if(c1 == r2)
	matrixmul(arr1,r1,c1,arr2,r2,c2);
}
#endif
#if 0
#include<stdio.h>
//#pragma pack(1)
int main()
{
struct st
{
    int a ;
    int b ;
	char ch ;
}s;
printf("%lu",sizeof(s));

}
#endif
#if 1
#include<stdio.h>
int main()
{
    int n;
    scanf("%x",&n);
    int i, c= 0;
    for(i = 31; i >=0; i--)
    {
	n&(1<<i)?c++:c;
    }
    printf("%d",c);
}
#endif
/*
Name:Gokulvasanth.B
Date:
Title:
Sample I/P:
Sample O/P:
*/
#if 0
    #include <stdio.h>

    #define BIT (0X1<<3)
int main() {
int a = 17;
printf ("%x",( a &= ~BIT)) ;
//int a = 17;
//printf ("%x, %x", (a |= BIT) ,( a &= ~BIT)) ;
   }
#endif
#if 0
#include<stdio.h>
int main()
{
	int val,n;
	scanf("%d",&val);
	scanf("%d",&n);
	val  = val ^ ((1<<n));
	for(int i = 7; i> -1; i--)
	{
		if(val & (1<<i))
			printf("1 ");
		else
			printf("0 ");
	}
}
#endif


#if 1
#include<stdio.h>
int main()
{
	// BINARY TO DECIMAL//

	char arr[8]= {0,0,0,0,0,0,1,1};
/*	for(int i = 0; i < 8 ; i++)
	{
		scanf("%c",&arr[i]);
		if(arr[i]==  '0' || arr[i] == '1')
			continue;
		else
		{
			puts("ENTER PROPER I/P 0 or 1");
			return 0;
		}
	}*/
	for(int i = 0; i < 8 ; i++)
	{
		printf("%d",arr[i]);
	}
int	total = 0;
	for(int i = 8; i > 0 ; i--)
	{
		if(arr[i])
		total = total + (1<<i);
	}
	printf("\n%d",total);
(gdb) break main


}

	                          
#endif
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



