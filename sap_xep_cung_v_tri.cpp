#include <bits/stdc++.h>
using namespace std;
int main() {
  //  freopen("CAU2.INP", "r", stdin);
  //  freopen("CAU2.OUT", "w", stdout);

    int n, x;
    cin >> n;
    // Cấp phát động mảng
    int*a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    sort(a, a + n);
    bool find = false;
    int pos = -1;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            find = true;
            pos = i;
            break;
        }
    }
    if (!find){
        int* newa = new int[n + 1];
        int j = 0;
        while (j < n && a[j] < x){
            j++;
        }
        // lấy các ptu trc của gitri tim thấythấy
        for (int i = 0; i < j; i++){
            newa[i] = a[i];
        }
        newa[j] = x;// thêm vao mảng
        // lấy các gtri sau của mảng cũ
        for (int i = j; i < n; i++){
            newa[i + 1] = a[i];
        }
        // Giải phóng mảng cũ và cập nhật
        delete[] a;
        a = newa;
        n++;
    } else {
        cout  << x << " co vi tri " << pos+1 << "\n";
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    // Giải phóng bộ nhớ
    delete[] a;
    return 0;
}