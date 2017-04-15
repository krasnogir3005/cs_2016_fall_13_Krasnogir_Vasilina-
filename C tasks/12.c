#include <stdio.h>

int main()
{
    char mx = 0xF;  

    printf("Enter string:");

    int ch = getchar(); 

    
    while (ch != '\n' && ch != EOF) {
        mx = (mx > ch) ? mx : ch;  
        ch = getchar();            
    }

    
    if (ch == '\n') mx = (mx > ch) ? mx : ch;

    
    printf("code of char: %d.\n", mx);
    printf("char: %c.\n", mx);
    return 0;
}
