#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool LaSoChinhPhuong(int dienTich) {
    int can = sqrt(dienTich);
    return can * can == dienTich;
}
bool CoTheDat(int x, int y, int rong, int cao, int luoi[100][100], int canh){
    if (x + rong > canh || y + cao > canh) return false;
    for (int i = x; i < x + rong; i++) {
        for (int j = y; j < y + cao; j++) {
            if (luoi[i][j] == 1) return false; 
        }
    }
    return true;  
}
void DatHinhChuNhat(int x, int y, int rong, int cao, int luoi[100][100], int giaTri){
    for (int i = x; i < x + rong; i++) {
        for (int j = y; j < y + cao; j++) {
            luoi[i][j] = giaTri;
        }
    }
}
bool ThuXep(int hinhChuNhat[3][2], int index, int luoi[100][100], int canh){
    if (index == 3) return true;

    for (int i = 0; i < canh; i++) {
        for (int j = 0; j < canh; j++) {
            if (luoi[i][j] == 0) {
                
                if (CoTheDat(i, j, hinhChuNhat[index][0], hinhChuNhat[index][1], luoi, canh)){
                    DatHinhChuNhat(i, j, hinhChuNhat[index][0], hinhChuNhat[index][1], luoi, 1);
                    if (ThuXep(hinhChuNhat, index + 1, luoi, canh)) return true;
                    DatHinhChuNhat(i, j, hinhChuNhat[index][0], hinhChuNhat[index][1], luoi, 0);
                }
                
                if (hinhChuNhat[index][0] != hinhChuNhat[index][1] && CoTheDat(i, j, hinhChuNhat[index][1], hinhChuNhat[index][0], luoi, canh)) {
                    DatHinhChuNhat(i, j, hinhChuNhat[index][1], hinhChuNhat[index][0], luoi, 1);
                    if (ThuXep(hinhChuNhat, index + 1, luoi, canh)) return true;
                    DatHinhChuNhat(i, j, hinhChuNhat[index][1], hinhChuNhat[index][0], luoi, 0);
                }
            }
        }
    }
    return false;
}

int main() {
    int hinhChuNhat[3][2];
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &hinhChuNhat[i][0], &hinhChuNhat[i][1]);
    }

    int tongDienTich = 0;
    for (int i = 0; i < 3; i++) {
        tongDienTich += hinhChuNhat[i][0] * hinhChuNhat[i][1];
    }

    if (!LaSoChinhPhuong(tongDienTich)) {
        printf("NO\n");
        return 0;
    }

    int canh = sqrt(tongDienTich);
    int luoi[100][100] = { 0 };

    if (ThuXep(hinhChuNhat, 0, luoi, canh)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
