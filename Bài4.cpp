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
		int min = number[i];
		for(int j=i+1; j<n; j++){
			if(number[j]<min){
				min = number[j];
			    number[j] = number[i];
			    number[i] = min; 
			}
		}
	}
	printf("\nMang da sap xep: ");
	for(int i= 0; i<n; i++){
		printf("%d\t",number[i]);
	}
}
