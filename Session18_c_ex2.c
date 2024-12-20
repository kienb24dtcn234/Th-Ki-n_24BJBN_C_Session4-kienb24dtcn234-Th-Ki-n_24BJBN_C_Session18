#include<stdio.h>
int main(){
	struct Student{
	int fullname[100];
	int age;
	int phone[20];
	}; 
	struct Student user01;
	printf("Moi ban nhap thong tin cua sinh vien la : \n");
	printf ("Moi ban nhap vao ho va ten cua sinh vien : ");
	fgets(user01.fullname,sizeof(user01.fullname), stdin);
	printf("Moi ban nhap do tuoi cua sinh vien la : ");
	scanf("%d", &user01.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai cua sinh vien la : ");
	fgets(user01.phone, sizeof(user01.phone), stdin);
	
	return 0;
}	 
