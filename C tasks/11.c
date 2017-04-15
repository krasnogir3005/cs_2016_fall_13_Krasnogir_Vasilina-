#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

unsigned int str_to_uint(const char *str)
{
    unsigned int num = 0; 
    unsigned int stp = 1; 

    int i; 
    for (i = strlen(str) - 1; i >= 0; --i, stp *= 2) {
        if (str[i] == '1') num += stp;
    }
    return num;
}

int main()
{
    srand(time(NULL)); 

    enum {LEN = 6}; 
    char str[LEN];  

    size_t i; 

    
    for (i = 0; i < LEN - 1; ++i) {
        str[i] = rand() % 2 + '0';
    }
    str[LEN - 1] = 0;

    printf("string: %s\n", str);               
    printf("number: %u\n", str_to_uint(str));  

    return 0;
}
