#include<stdio.h>
int main()
{
    int AUTO[60];
    int i, offset=1932;

    printf("Array auto goes like this : ");
      for(i=0; i<5; i++)
        printf("auto[%d], ", i+offset);

      printf("... and so on!");
    return 0;
}
