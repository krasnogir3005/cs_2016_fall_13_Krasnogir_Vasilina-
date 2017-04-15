#include <stdio.h>
#include <string.h>

int main()
{
    enum { SIZE_BUF = 1024 }; 
    char buf[SIZE_BUF];       

    printf("Enter string:");
    gets(buf);  

    size_t len = strlen(buf); 
    size_t del = 0; 
    size_t i;       

    
    for (i = 0; i <= len; ++i) {
       
        if (i > 0 && buf[i - 1] == buf[i]) ++del;
        
        buf[i - del] = buf[i];
    }

    printf("Change string:%s\n", buf);
    return 0;
}
