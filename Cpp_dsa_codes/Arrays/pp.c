#include<stdio.h>
char* func(char *ptr)
{
    ptr+=3;
    return ptr;

}
int main()
{
    char *x,*y;
    x="hello";
    y=func(x);
    printf("%s",y);
}
