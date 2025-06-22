#include <stdio.h>
#include <stdlib.h>
struct phan_so {
	int tu;
	int mau;
};
typedef struct phan_so PHANSO;
int main() {
	PHANSO* ps1, * ps2;
	ps1 = (PHANSO*)malloc(sizeof(PHANSO));
	ps2 = (PHANSO*)malloc(sizeof(PHANSO));
	ps1->tu = 2;
	ps1->mau = 4;
	ps2->tu = 3;
	ps2->mau = 5;
	printf("nhan phan so: %d/%d\n", (ps1->tu)*(ps2->tu), (ps1->mau)*(ps2->mau));
	free(ps1);
	free(ps2);
}