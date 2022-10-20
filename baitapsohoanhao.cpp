#include<stdio.h>
int main()
{
    
    int N;
    
    int S=0;
    do
    {    
        printf("\nNhap N = ");
        scanf("%d", &N);
        if(N <= 0)
        {
            printf("\n N phai > 0. Xin nhap lai !");
        }
    }while(N <= 0);
    
    
    for(int i = 1; i <=N-1; i++)
    {
        if(N%i==0) 
        {
            S+=i;
        }
    }
    if(S==N)
    {
        printf("%d la so hoan hao",N);
    }else{
        printf("%d khong phai la so hoan hao",N);
    }
}
