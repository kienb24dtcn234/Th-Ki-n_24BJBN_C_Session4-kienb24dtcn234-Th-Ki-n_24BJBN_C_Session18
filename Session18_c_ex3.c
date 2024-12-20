#include<stdio.h>
int main(){
	struct Student{
		int fullname[100];
		int age;
		int phone[20];
	};
      struct Student students[5];
	for(int i = 0; i<5; i++){
		printf("Nhap thong tin sinh vien thu %d : \n", i +1);
		printf("Ho va ten cua sinh vien la :");
		fgets(students[i].fullname, sizeof(students[i].fullname), stdin);
		printf("Tuoi cua sinh vien la :");
		scanf("%d", students[i].age);
		fflush(stdin);
		printf("So dien thoai cua sinh vien la :");
		fgets(students[i].phone, sizeof(students[i].phone), stdin);
			
		printf("\n Thong tin cac sinh vien la : \n");
		for(int i =0; i <5; i++){
			printf("Sinh vien thu %d : \n ", i +1);
			printf("Ho va Ten cua sinh vien la : %s \n", students[i].fullname);
			printf("Tuoi cua sinh vien la : %d \n", students[i].age);
			printf("So dien thoai cua sinh vien la : %s \n", students[i].phone);
		}
	}
	return 0;
	}
	
	

