#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double max_subtract_min(size_t n, double *a)
{
    if (n == 0) return 0; 

    double mn = a[0]; 
    double mx = a[0]; 

    size_t i;
    
    for(i = 1; i < n; ++i) {
        mn = (mn < a[i]) ? mn : a[i]; 
        mx = (mx > a[i]) ? mx : a[i]; 
    }

    return mx - mn;
}

int main()
{
    srand(time(NULL)); 

    enum {MAX_N = 6};  

    size_t n = MAX_N;  
    size_t i;          

    double a[MAX_N];   

    
    for (i = 0; i < n; ++i) {
        a[i] = rand() % 10 + (double) rand() / RAND_MAX; 
    }

    
    printf("array: ");
    for (i = 0; i < n; ++i) {
        printf("%.5lf ", a[i]);
    }
    printf("\n");

    
    printf("result of a function: %.5lf\n", max_subtract_min(n, a));
    return 0;
}
