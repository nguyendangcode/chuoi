#include <stdio.h>
int main() {
	// nhap tu ban phim so luong phan tu cua mang
	//sau do nhap tung phan tu cua mang
	//in tong cua cac phan tu trong mang
	int n, i, sum = 0;
	int arr[100];
	printf("Nhap so luong phan tu cua mang: ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d",arr+i);
	}
	for (i = 0; i < n; i++) {
		sum += arr[i];
	}	
	printf("Tong cua cac phan tu trong mang la: %d\n", sum);
	return 0;
}