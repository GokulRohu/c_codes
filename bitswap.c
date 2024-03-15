#include <stdio.h>

int main() {
    int num=39,pos1=3,pos2=5,res1=0,res2=0,flag=0;
    for(int i=31; i >=0; i--)
    {
        if(num & (1 << i))
            printf("1 ");
        else
        printf("0 ");
    }
    if(((num & (1 << pos1)) && (num & (1 << pos2))) || (((num & (1 << pos1)) == 0 ) && ((num & (1 << pos2)) == 0 )))
    {
       flag=1;
    }
    if(flag == 0)
    {
        num ^= (1 << pos1) | (1 << pos2);
    }
    else
	printf("bits are same\n");
    printf("\n");
    for(int i=31; i >=0; i--)
    {
        if(num & (1 << i))
            printf("1 ");
        else
        printf("0 ");
    }
    return 0;
}
