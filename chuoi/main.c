#include <stdio.h>
#include <string.h>
//bài 7: Xây dựng hàm. dùng để tìm chuỗi subStr trong chuỗi str. hàm trả về địa chỉ bất đầu của subStr trong chuỗi str
long long findSubStr(const char *str, const char *subStr) {
	for (int i = 0; str[i] != '\0'; i++) {
		if( str[i] == subStr[0]) {
			int j;
			for (j = 0; subStr[j] != '\0'; j++) {
				if (str[i + j] != subStr[j]) {
					break;
				}
			}
			if (subStr[j] == '\0') { 
				return (long long)(str + i); 
			}
		}
		else if (subStr[0] == '\0') {
			return NULL;
		}
	}
}
int main() {
	char str[100], subStr[50];
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	printf("Nhap chuoi con: ");
	fgets(subStr, sizeof(subStr),stdin);
	int result = findSubStr(str, subStr);
	printf("Dia chi bat dau cua chuoi con trong chuoi la: %lld\n", result);
}