#include<stdio.h>
int main(){
	int number[100];
	int n;
	printf("Nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	printf("Nhap cac phan tu cua mang: \n");
	for(int i = 0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d", &number[i]);
    }
	printf("Mang truoc khi duoc sap xep: ");
	for(int i = 0; i<n; i++){
		printf("%d\t",number[i]);
	}
	for(int i = 1; i<n; i++){
		int key = number[i];
		int j = i - 1;
		while(j>=0 && key<number[j]){
			number[j+1]=number[j];
			j--;
		}
		number[j+1]=key;
	}
	printf("\n");
	printf("Mang sau khi duoc sap xep: ");
	for(int i = 0; i<n; i++){
		printf("%d\t",number[i]);
	}
}
