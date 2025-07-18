#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
void solve() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    bool p[N][N] = {false}; // p[số][hàng] = true nếu num xuất hiện ở hàng i
    // Đọc dữ liệu và đánh dấu các số xuất hiện ở mỗi hàng
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            p[a[i][j]][i] = true;
        }
    }
    
    // Kiểm tra từng số có xuất hiện ở tất cả các hàng không
    bool end = true;
    for(int num = 0; num < N; num++) {
        bool check = true;
        for(int i = 0; i < n; i++) {
          //  Nếu số không xuất hiện ở hàng i thì đánh dấu check = false
            if(!p[num][i]) {
                check = false;
                break;
            }
        }
        // Nếu check = true thì in số đó ra
        if(check) {
            if(!end) printf(" ");
            printf("%d", num);
            end = false;
        }
    }
    // Nếu không có số nào xuất hiện ở tất cả các hàng thì in -1
    if(end) {
        printf("-1");
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}