#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int i;
	struct SinhVien{
		char name[50];
		int age;
		char phone[20];
	};
	
	struct SinhVien list[5];
	for(i=0;i<5;i++){
		printf("\n Moi nhap thong tin cho sinh vien thu %d\n",i+1);
		printf("moi nhap Ho ten: ");
		fgets(list[i].name,sizeof(list[i].name),stdin);
		list[i].name[strcspn(list[i].name, "\n")] = '\0'; 
		printf("moi nhap tuoi: ");
		scanf("%d", &list[i].age);
		getchar();
		printf("moi nhap sdt: ");
		fgets(list[i].phone,sizeof(list[i].phone),stdin);	
	}

	for(i=0;i<5;i++){
		printf("\n========thong tin sinh vien thu %d: ===========\n",i+1);
		printf("Ho va ten: %s \n",list[i].name);
		printf("Tuoi: %d \n",list[i].age);
		printf("Sdt: %s \n",list[i].phone);
		
		}
	
	
   return 0;
}

