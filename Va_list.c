#include <stdio.h>
#include <stdarg.h>

double average(int num, ...)
{
va_list valist;
double sum=0.0;
int i;
va_start(valist,num);
for(i=0;i<num;i++)
{
sum+=va_arg(valist,int);
}
va_end(valist);
return (sum/num);
}

int main()
{
printf("Average of 3 numbers:%lf\n", average(3,4,5,5));
printf("Average of 5 numbers:%lf\n", average(5,4,5,5,7,8));
}