#include <stdio.h>
#include <ctype.h>

int main()
{
    size_t len = 0; 
    int ch;         

    printf("Write the words:");

    
    while ((ch = getchar()) != EOF) {
        if (isspace(ch)) {   
            if (len != 0) {  
                while (len-- > 0) printf("#");  
                printf("\n");
            }
            len = 0;
        } else ++len;      
    }

    
    if (len) {
        while (len-- > 0) printf("#");
        printf("\n");
    }
return 0;
}
