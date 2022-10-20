

 
#include <stdio.h>
 
int main(){
    int n, tmp;
    printf("nhap so n la");
    scanf("%d", &n);
    int res = 0;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    printf("\nso dao nguoc cua n la: %d", res);
}
