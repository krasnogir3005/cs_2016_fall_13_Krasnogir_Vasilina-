#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc < 3) {
        printf("Error: small number of arguments (argc < 3).\n");
        return 1;
    }
    FILE *in = fopen(argv[1], "r");
    
    if (in == NULL) {
        printf("Error: file \"%s\" could not open for reading.\n", argv[1]);
        return 1;
    } 
    FILE *out = fopen(argv[2], "w");
    if (out == NULL) {
        printf("Error: file \"%s\" could not open for writing.\n", argv[2]);
        fclose(in);
        return 1;
    }
    enum {SIZE_BUF = 1024};         
    unsigned char buf[SIZE_BUF];    
    size_t count_byte_read = fread(buf, 1, sizeof(buf), in);  
    while (count_byte_read > 0) {
        fwrite(buf, sizeof(*buf), count_byte_read, out);   
        count_byte_read = fread(buf, 1, sizeof(buf), in);  
    }
    fclose(in);  
    fclose(out); 
    printf("File \"%s\" copy to file \"%s\".\n", argv[1], argv[2]);
    return 0;
}
