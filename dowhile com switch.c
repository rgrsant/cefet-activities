#include<stdio.h>

int main()
{
    int I;
    do
    {
      scanf("%d",&I);
      switch(I)
      {
        case 1:
        printf("67");
        break;
        case 2:
        printf("45");
        break;
        default:
        printf("default");
      }
    }
    while(I != 0);
        return 0;
}
