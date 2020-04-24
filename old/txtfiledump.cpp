#include<stdio.h>

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("Usage: txtfiledump filename\n");  
        return -1;      
    }

    FILE *fp = fopen(argv[1], "rt");

    if(fp == 0) 
    {
        printf("Error opening file %s \n", argv[1]);
        return -2;
    }

    char bfr[4096];

    while(!feof(fp))
    {
        fgets(bfr, 4096, fp);
        fprintf(stdout, "%s", bfr);
    }

    fclose(fp);
}