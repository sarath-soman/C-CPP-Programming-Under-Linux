#include<stdio.h>

int main()
{
    FILE *fp = 0;

    if((fp = popen("sort", "w")) == 0) 
    {
        return -1;
    }

    fprintf(fp, "Sarath\n");
    fprintf(fp, "Binsa\n");
    fprintf(fp, "Soman\n");
    fprintf(fp, "Ss\n");

    pclose(fp);
    return 0;
}