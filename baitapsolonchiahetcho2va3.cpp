#include<stdio.h>
int main()
{
  int i, n, temp;
  int max = 0;
  do
  {
    printf("\nNhap vao so nguyen duong n: ");
    scanf("%d", &n);
  }while(n < 0 && printf("\nSo n phai lon hon hoac bang 0!!"));
  temp = n;
  
  if(n == 0)
    max = 0;
  
  do
  {
    i = n % 10;
    if(i > max)
    {
      max = i;
    }
  }while(n /= 10);
  printf("\n so lon nhat trong %d l�: %d",temp, max);
}
