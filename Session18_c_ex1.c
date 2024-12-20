#include<stdio.h>
int main(){
	struct Student{
	int fullname;
	int age;
	int phone;
	}; 
	struct Student user01={"Nguyen The Kien", 18, "0984178465"};
	printf("Ho va Ten sinh vien la : %s \n", user01.fullname);
	printf("Do tuoi cua sinh vien la : %d \n", user01.age);
	printf("So dien thoai cua sinh vien la : %s \n", user01.phone);
	 
	return 0;	 
} 
