#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
    FILE *fp=0;

    if((fp=popen("ls", "r")) == 0) 
    {
        return -1;
    }

    char bfr[8192];

    while(!feof(fp)) 
    {
        fgets(bfr, 8192, fp);
        printf(bfr);
    }

    fclose(fp);
}