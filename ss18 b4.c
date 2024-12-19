#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int i;
	struct SinhVien{
		int id;
		char name[50];
		int age;
		char phone[20];
	};
	struct SinhVien list[50];
		
	for(i=0;i<5;i++){
		printf("\n Moi nhap thong tin cho sinh vien \n");
		printf("moi nhap Ho ten: ");
		fgets(list[i].name,sizeof(list[i].name),stdin);
		list[i].name[strcspn(list[i].name, "\n")] = '\0'; 
		printf("moi nhap tuoi: ");
		scanf("%d", &list[i].age);
		getchar();
		printf("moi nhap sdt: ");
		fgets(list[i].phone,sizeof(list[i].phone),stdin);
		list[i].id=i+1;	
	}

		
	for(i=0;i<5;i++){
		printf("\n======= thong tin sinh vien: ===========\n");
		printf("ID sinh vien: %d \n",list[i].id);
		printf("Ho va ten: %s \n",list[i].name);
		printf("Tuoi: %d \n",list[i].age);
		printf("Sdt: %s \n",list[i].phone);
		
	}
   return 0;
}

