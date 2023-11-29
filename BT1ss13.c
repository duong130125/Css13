#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
int main(){
	char str[100]; 
	int size; 
	int count = 0; 
	do{
		printf("*************MENU*************\n");
		printf("1. Nhap vao chuoi ki tu.\n");
		printf("2. In ra do dai chuoi va noi dung chuoi vua nhap.\n");
		printf("3. In ra chuoi dao nguoc.\n");	
		printf("4. In ra so luong chu cai trong chuoi.\n");
		printf("5. In ra so luong chu so trong chuoi.\n");
		printf("6. In ra so luong ky tu dac biet trong chuoi.\n");
		printf("7. Thoat.\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao chuoi ky tu mong muon:\n");
				fflush(stdin);
				gets(str); 
			break; 
			case 2:
				size = strlen(str); 
                printf("Do dai cua chuoi vua nhap la %d.\n",size); 
                puts(str);
			break; 
			case 3:
				printf("Chuoi dao nguoc la:") 
				for(int i=strlen(str); i>=0; i--){
				printf("%c",str[i]);
				} 
				printf("\n"); 
			break; 
			case 4:
				for(int i=0; i<=strlen(str)-1; i++){
					printf("%c",str[i]);
				    if(str[i]>='A'&&str[i]<='Z' || str[i]>='a' && str[i]<='z'){
					    count++;
				    }
			    }
			    printf("\nSo luong cac chu cai trong chuoi la: %d\n",count);
			break; 
			case 5:
				count = 0; 
				for(int i=0; i<=strlen(str)-1; i++){
					printf("%c",str[i]);
				    if(str[i]>='0' && str[i]<='9'){
					    count++;
				    }
			    }
			printf("\nSo luong cac chu so trong chuoi la: %d\n",count);
			break; 
			case 6:
			    count = 0;
                for (int i = 0; i < strlen(str); i++){
                	printf("%c",str[i]);
                    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
                        count++;
                    }
                }
                printf("\nSo luong ki tu dac biet trong chuoi: %d\n", count);
			break; 
			case 7:
				exit(0); 
			break;
			default:
			    printf("Vui long chon tu 1 -> 7.");
		}
	}while(1==1); 
} 
