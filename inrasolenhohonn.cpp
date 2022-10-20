#include<stdio.h>

int main()

{

            int n, i;

            do

            {

                        printf("Nhap N: ");

                        scanf("%d",&n);

            }while(n<=0);

            for(i=1;i<=n;i++)

            {

                        if(i%2 == 0)

                                    continue;

                        printf("%u ",i);       

            }

}
