#include <stdio.h>
int main()
{
 int N=0,sum=1;
   scanf("%d",&N);
    int i;
    for( i=1;i<=N;i++)
      sum=sum*i;
    printf("%d\n",sum);
return (0);
}
