#include<stdio.h>
int main()
{
    int i,count=0;
for(i=1;i<=19;i++) 
{
    if(i%2!=0)
{
    printf("odd=%d\n",i);
    count=count+1;

}
}
printf("%d",count);



    return 0;
}