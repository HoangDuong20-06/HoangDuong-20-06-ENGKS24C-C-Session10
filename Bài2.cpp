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
	for(int i=0; i<n; i++){
		printf("%d\t", number[i]);
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n-1-i; j++){
			if(number[j+1]<number[j]){
				int temp = number[j];
				number[j] = number[j+1];
				number[j+1] = temp;
			}
		}
	}
	printf("\nMang da sap xep: ");
	for(int i= 0; i<n; i++){
		printf("%d\t",number[i]);
	}
}
