#include <stdio.h>
int main(void)
{
float a,b,d;
char s;
 int i;
printf("Vvedite dva chisla i znak deistviya: ");///In form:" 3 2 +" .
scanf("%f %f %c", &a,&b,&s);
switch (s)
{
case '+': d=a+b, printf("\n%f+%f=%f\n ",a,b,d); break;

case '-': d=a-b, printf("\n%f-%f=%f\n ",a,b,d); break;

case '*': d=a*b, printf("\n%f*%f=%f\n ",a,b,d); break;

case '/': d=a/b, printf("\n%f/%f=%f\n ",a,b,d); break;

case '%': d=a/100*b, printf("%f\n", d ); break;

case '^': d = 1;

        { for (i = 0; i < b; i++)
        d *=a;     
        }
          printf("%f\n", d); break;

default: printf("\nERROR\n"); break;
}
return (0);
}
