#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
	struct SinhVien{
		char name[50];
		int age;
		char phone[20];
	};
	
	struct SinhVien svien01;
	
	printf("moi nhap Ho ten: ");
	fgets(svien01.name,sizeof(svien01.name),stdin);
	svien01.name[strcspn(svien01.name, "\n")] = '\0'; 
	printf("moi nhap tuoi: ");
	scanf("%d", &svien01.age);
	getchar();
	printf("moi nhap sdt: ");
	fgets(svien01.phone,sizeof(svien01.phone),stdin);
	
	
	
	printf("\nthong tin sinh vien: \n");
	printf("Ho va ten: %s \n",svien01.name);
	printf("Tuoi: %d \n",svien01.age);
	printf("Sdt: %s \n",svien01.phone);
	
	

   return 0;
}

