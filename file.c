#include<stdio.h>
int main()
{
FILE *file;
file=fopen("datafile.dat","w");
fprintf(file,"This is first line\n");
fputs("This is second line\n",file);
return 0;
}
