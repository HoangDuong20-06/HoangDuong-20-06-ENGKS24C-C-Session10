#include<stdio.h>
int main(){
	int search_value;
	int count=0;
	int a[]={2,5,7,8,9,11,20};
	int size = sizeof(a)/sizeof(int);
	printf("Cac phan tu trong mang: \n");
	for(int i = 0; i< size; i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("Nhap so can tim: ");
	scanf("%d",&search_value);
	for(int i = 0; i<size; i++){
		if(a[i]==search_value){
			printf("Vi tri cua so can tim o %d la: %d",search_value,i);
			count=1;
		}
	}
	if(!count){
		printf("Khong tim thay phan tu nay trong mang");
	}
	return 0;
}

