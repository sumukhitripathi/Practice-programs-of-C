#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    
    char ch;
    c=fgetc(fptr);
    while(ch!=EOF){
        printf("%s",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}