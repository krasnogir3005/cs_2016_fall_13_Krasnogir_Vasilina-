#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void reverse(char *s)
{
    char temp;  

    int len = strlen(s); 
    int i;               

    for (i = 0; i < len - i - 1; ++i) {
        
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

int main()
{
    srand(time(NULL)); ///Генератор случайных чисел.

    enum {LEN = 7}; 
    char str[LEN];  

    size_t i; 

    
    for (i = 0; i < LEN - 1; ++i) {
        str[i] = rand() % 26 + 'a';
    }
    str[LEN - 1] = 0;

    printf("string: %s\n", str);          
    reverse(str);                         
    printf("reverse string: %s\n", str);  


    return 0;
}
