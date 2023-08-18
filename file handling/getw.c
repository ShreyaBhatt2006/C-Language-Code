//------

#include<stdio.h>
void main()
{
    FILE *fp;
    int a;
    fp = fopen("int.txt","r");
    a = getw(fp);
    printf("%d",a);
    fclose(fp);
}
