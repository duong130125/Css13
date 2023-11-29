#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
int main() 
{
    char str[100];
    char find_char,ex_char,delete_char,find_count;
    do {
    	printf("*****************MENU*****************\n");
        printf("1. Nhap vao chuoi ki tu.\n");
        printf("2. In ra noi dung chuoi.\n");
        printf("3. Nhap 1 ki tu,dem so lan ki tu do xuat hien.\n");
        printf("4. Nhap vao 2 ki tu, thay the cac ki tu thu 2 trong chuoi thanh ki tu thu nhat.\n");
        printf("5. nhap vao 1 ki tu, xoa cac ki tu do trong chuoi.\n");
        printf("6. Thoat.\n");
        printf("lua chon cua ban la:");
        int choice; 
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("nhap vao chuoi ki tu:\n");
                scanf("%s", &str);
                printf("\n");
            break;
            case 2:
                printf("Chuoi ki tu vua nhap la:\n");
                puts(str);
                printf("\n");
            break;
            case 3:
                find_count = 0;
                printf("nhap 1 ki tu co trong chuoi:");
                fflush(stdin); 
                scanf("%c",&find_char);
                for (int i=0; i<strlen(str); i++) {
                    if (str[i] == find_char){
                        find_count++;
                    }
                }
                printf("%c xuat hien %d lan trong chuoi.",find_char,find_count);
                printf("\n");
            break;
            case 4:
                printf("Nhap hai ki tu co trong chuoi:");
                scanf("%s%s",&ex_char,&find_char);
                for (int i=0;i<strlen(str);i++) {
                    if (str[i] == find_char){
                        str[i] = ex_char;
                    }
                }
                printf("\n");
            break;
            case 5: 
                printf("Nhap vao ki tu can xoa trong chuoi:");
                scanf("%s", &delete_char);
                for (int i=0;i<strlen(str);i++){
                    if (str[i] == delete_char){
                        str[i] = str[i-1];
                    }
                }
                printf("\n");
            break;
            case 6:
                exit(0); 
            break;
            default:
                printf("Vui long chon tu 1 -> 6.");
        }
    } while (1==1);
}
