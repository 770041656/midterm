#include<stdio.h>
int main(){
int a[10] = {0};
int i = 0;
int max = 0;
printf("Please enter 10 words：");
for (i = 0; i < sizeof(a)/ sizeof(a[0]); i++)
{
a[i] = getchar();
}
max = a[0];
for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
{
if (max < a[i])
{
max = a[i];
}
}
printf("The max is %d\n", max);
return 0;
}