#include <stdio.h>

int main()
{
 char a[7]={'O','!','L','r','k','t','\0'};
 printf("\n\n");
 for(int i=0;a[i]!='\0';i++){
    a[i]-=i;
    printf("%c", a[i]);
 }
 printf("\n\n");
return 0;
}
