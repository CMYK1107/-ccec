#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void sap_xep(int a[2]) {
	if (a[0] > a[1]) {
		int t = a[1];
		a[1] = a[0];
		a[0] = t;
	}
}

bool check(int a[2], int b[2], int c[2]) {
	if ((a[1] == b[1] && b[1] == c[1]) && (a[0] + b[0] + c[0] == a[1])) return true;
	if ((a[1] == b[1] && b[1] != c[1])) return false;
	return ((a[1] == b[1] + c[1]) || (a[1] == b[0] + c[0]) || (a[1] == b[0] + c[1])) && ((a[1] == a[0] + b[0]) || (a[1] == a[0] + b[1]));
}

int main () {
	int a[2], b[2], c[2], i;
// Nhap hinh 1
	for (i = 0; i < 2; i++) {
		scanf("%i", &a[i]);
		if (a[i] > 100 || a[i] <= 0) {
			printf("ERRROR!");
			return 0;
		}
	}
// Nhap hinh 2
	for (i = 0; i < 2; i++) {
		scanf("%i", &b[i]);
		if (b[i] > 100 || b[i] <= 0) {
			printf("ERRROR!");
			return 0;
		}
	}
// Nhap hinh 3
	for (i = 0; i < 2; i++) {
		scanf("%i", &c[i]);
		if (c[i] > 100 || c[i] <= 0) {
			printf("ERRROR!");
			return 0;
		}
	}
// Sap xep lai canh tu nho den lon
	sap_xep(a);
	sap_xep(b);
	sap_xep(c);
// Kiem tra
	if (check(a, b, c) || check(a, c, b) || check(b, a, c) || check(b, c, a) || check(c, b, a) || check(c, a, b)) printf("YES");
	else printf("NO");
	return 0;
}
