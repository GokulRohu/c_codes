#if 1
Structure
#include<stdio.h>
main()
{
  struct std
  {
    int x = 3;
    char name[] = "hello";
  };
  struct std *s;
  printf("%d", s->x);
  printf("%s", s->name);
} 
#endif
#if 0
#include <stdio.h>
int main()
{
int i = 3;
printf("%d", (++i)++);
return 0;
}
#endif
#if 0

#endif
