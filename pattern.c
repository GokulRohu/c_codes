/*
Name:Gokulvasanth.B
Date:
Title:
Sample I/P:
Sample O/P:
*/

#include<stdio.h>
#if 0
#define abc main
int abc ()
{
    int i,j,n,k,l;
    scanf("%d",&n);
    for(k=1; k< n; k++)
    {
	for(l = k ; l < n; l++)
	    printf("  ");

	for(i = 1; i <=k; i++)
	    printf("* ");

	for(j = k-1; j>=1;j--)
	printf("* ");
	
	printf("\n");
    }
return 0;
}
/*
5
    *
   ***
  *****
 *******
*/
#endif
#if 0
int main()
{
    int n,i,j; scanf("%d",&n);

    for(i = 1; i<= n;i++)
    {
	int g = n;
	for(j = 1; j <= i; j++)
	{
	    printf("%d",g--);
	}
	printf("\n");
    }
}
/*
   554543543254321  */

#endif
#if 0
int main()
{
    int n,i,j; scanf("%d",&n);

    for(i = 0; i< n;i++)
    {
	int g = n-i;
	for(j = 0; j <= i; j++)
	{
	    printf("%d",g++);
	}
	printf("\n");
    }
}
/*
5
45
345
2345
12345
*/
#endif
#if 0
int main()
{
    int n,i,j; scanf("%d",&n);

    for(i = n; i>0;i--)
    {
	for(j =1; j <= n; j++)
	{
	    if(j>=i)
	    printf("* ");
	    else
		printf(" ");
	}
	printf("\n");
    }
}
/*
5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/
#endif
#if 0
int main()
{
    int n,i,j; scanf("%d",&n);

    for(i = 0; i< n;i++)
    {
	for(j = 0; j <n; j++)
	{
	    if(i+j >= (n-1))
	    printf("* ");
	    else
	    printf("  ");

	}
	printf("\n");
    }
}
/*
   5
        *
      * *
    * * *
  * * * *
* * * * *
*/
#endif
#if 0
int main()
{
    int n,i,j; scanf("%d",&n);

    for(i = 0; i< n;i++)
    {
	for(j = 0; j <n; j++)
	{
	    if(j>=i)
	    printf("* ");
	    else
	    printf("  ");

	}
	printf("\n");
    }
}
/*
   5
* * * * *
  * * * *
    * * *
      * *
        *
*/
#endif
#if 0
int main()
{
    int n,i,j; scanf("%d",&n);

    for(i = 1; i<=n;i++)
    {
	for(j = 1; j <=n; j++)
	{
	    if(j==1 || j == i || i ==5)
		printf("%d ",j);
	    else
		printf("  ");

	}
	printf("\n");
    }

}
/*
   5
1
1 2
1   3
1     4
1 2 3 4 5
*/
#endif
#if 1
int main()
{
    int n,i,j; scanf("%d",&n);

    for(i = 1; i<=n;i++)
    {
	for(j = 1; j <=n; j++)
	{
	    if(j==1 || j == i || i ==n|| j == n || i == 1 || i+j == n+1)
		printf("%d ",j);
	    else
		printf("  ");

	}
	printf("\n");
    }
}
#endif
