#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,a,b,a1,b1;
    float kq; /*ket qua*/
    printf("\nChuong trinh tinh ket qua cua phep chia 2 so");
    printf("\nNhap 2 so a va b\n");
    scanf("%d%d",&a,&b);
    if(a<b)
  {
        for(i=1;i<=a;i++)
             {
             if((a%i==0)&&(b%i==0))
                {
                  a1=a/i;
                  b1=b/i;
                }
             }
         printf("\nKet qua = %d/%d",a1,b1);
}
   if(a==b)
     printf("\nKet qua =1");
    if(a==0)
    {
        if(b==0)
            printf("\nMath Error");
        printf("\nKet qua = 0");
    }
   if(a>b)
  {
        for(i=1;i<=b;i++)
        if(a%i==0&&b%i==0)
              {
                 a1=a/i;
                 b1=b/i;
              }
      printf("\nKet qua = %d/%d",a1,b1);
  }
  kq=(float)a/b;
   printf("\nSo thap phan =%f",kq);
    return 0;
}
