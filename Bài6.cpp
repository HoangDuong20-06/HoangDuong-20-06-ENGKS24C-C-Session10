#include <stdio.h>

int main() {
	 int a[100];
	 int count = 0;
    int index[100];
    int n, x;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            index[count] = i;
            count++;
        }
    }
    if (count == 0) {
        printf("Khong tim thay phan tu %d trong mang\n", x);
    } else {
        printf("Vi tri cua phan tu %d trong mang la:\n", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", index[i]);
        }
    }
    return 0;
}
