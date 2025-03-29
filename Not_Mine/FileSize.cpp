#include <stdio.h>
main(void)
{
    FILE *fp;
    char filename[80];
    long length;
    printf("Enter File name\n");
    gets(filename);
    fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        printf("File Not Found!\n");
    }
    else
    {
        fseek(fp, 0L, SEEK_END);
        length = ftell(fp);
        printf("Size of the file is %ldB in bytes\n", length);
        fclose(fp);
    }
}
