#include<stdio.h>
#include <string.h>
int main()
{
	//chuyen het thanh chuoi viet hoa
	char s [50];
	 
    printf("Nhap chuoi: ");
     	 
	scanf("%s",s);
	for (int i=0; i<strlen(s); i++ ){
		if(s[i] >= 97 && s[i]<=122){
			s[i] = s[i]-32;
		}
	}
	 
	 printf(" Chuoi sau khi chuyen la: %s", s);
	 
	 // bai 2


	  char s[50];
    int nguyenam = 0, khac = 0;
    printf("Nhap chuoi: ");
    scanf("%s", s);
    for (int i=0; i<strlen(s); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
		
            nguyenam++;
        }else{
            khac++;
        }
    }
    printf("So luong nguyen am trong tu: %d\n", nguyenam);
    printf("So luong ky tu khac trong tu: %d\n", khac);
    return 0;
}
