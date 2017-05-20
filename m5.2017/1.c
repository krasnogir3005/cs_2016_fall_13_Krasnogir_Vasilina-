#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float func(float x)

{
	return x*x*x;
}

void main()

{
	float s = 0.0, x = 0.0, l=0.0, h=0.0;
	float F = 0.0, F1=0.0, F2=0.0;
	int i;

	printf("Enter low boarder:\n");
	scanf("%f", &l);
  
	printf("Enter high boarder:\n");
	scanf("%f", &h);

	printf("Enter step:\n");
	scanf("%f", &s);

	x = l;
  
	F1 = ((-3) * func(x) + 4 * (func(x+s)) - (func(x+2*s)))/(2*s);
	F2 = (1 / (2 * s))*(-func(x) + func(x + 2 * s));

	printf("%f\n", F1);
	printf("%f\n", F2);

	while  (x+2*s <= h)
	{
		F = (1 / (2 * s))*(func(x) - 4 * (func(x + s))+3*(func(x+2*s))
		printf("%f\n", F);
		x = x + s;

	}
}
