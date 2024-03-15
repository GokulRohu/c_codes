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

int main(int argc,  char* argv[])
{
    int sum=0;
    for(int i = 1; i < argc; i++)
   // while(argv[i])
	 sum += atoi(argv[i]);
    printf("%g",(float)sum/--argc);
}
#endif
#if 0
#include<stdio.h>
#define MAX(a,b) (a>b?a:b)
int main()
{
    int n1 =10,n2 =11;
    int l = MAX(n1,n2);
    printf("%d",l);
}

#endif
#if 0
#include<stdio.h>
#define MAX(a,b,c) ((a>b&&a>c)?a:(b>c)?b:c)
int main()
{
    int n1 =10,n2 =11,n3=16;
    int l = MAX(n1,n2,n3);
    printf("%d",l);
}

#endif
#if 0
#include<stdio.h>
int main()
{
    int num, i,flag;
    scanf("%d",&num);

    for(i=2; i <= num ; i++)
    {
	flag =1;
	for(int j=2 ; j <= i/2 ; j++)
	{

	    if(i%j==0)
	    {
		flag = 0;
		break;
	    }
	}
	if(flag)
	    printf("%d  ",i);
    }
}

#endif
#if 0
#include<stdio.h>
int add(int x, int y)
{
    return x+y;
}
int main()
{
    int (*fptr)(int,int);
    fptr = add;
    printf("%d",fptr(2,9));
}
#endif
#if 0
#include<stdio.h>
int main()
{
    register int x = 10;
//    scanf("%d",&x);
    printf("%d",x);
}
#endif
#if 1
#include <stdio.h>
#include <unistd.h>
int main()
{
	int i, j;
	//for (i=1; i <= 100; i++)
	//{
		printf("\rLoading[");
		for (i=1; i<=100; i++)
		{
			printf("-");
			//fflush(stdout);
			//sleep(1);
			//}
			for (j=1; j<=i; j++)
			{
				printf("]%d%%", j);
				fflush(stdout);
				sleep(1);
			}
	}
	fflush(stdout);
	//sleep(1);
	for (j=0xffffff; j--; );

printf("\nFinished\n");
return 0;
}
#endif
