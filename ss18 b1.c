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
	
	struct SinhVien svien01={"Dinh Dinh Thanh",18,"9182348184"
	};
	printf("thong tin sinh vien: \n");
	printf("Ho va ten: %s \n",svien01.name);
	printf("Tuoi: %d \n",svien01.age);
	printf("Sdt: %s \n",svien01.phone);
	
	

   return 0;
}

