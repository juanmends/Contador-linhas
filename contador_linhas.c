#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE *ptr;
    ptr = fopen(argv[1], "r");
    int contador = 0;
    char c;
    
    while(!(feof(ptr))) {
        c = fgetc(ptr);
        if (c == '\n'){
            contador+=1;
        }
    }
    
    printf("%d",contador+1);
    
    fclose(ptr);
    
    return 0;
}