#include <bits/stdc++.h>
using namespace std;
class diem {
public:
    int x, y;
};
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int w, h, n;
    cin >> w >> h >> n;
    int xmin = 0, ymin = 0, res;
    diem a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y >> b[i];
        if (b[i] == 1) {
            xmin = max(xmin, a[i].x);
        } else if (b[i] == 2) {
            w = min(w, a[i].x);
        } else if (b[i] == 3) {
            ymin = max(ymin, a[i].y);
        } else {
            h = min(h, a[i].y);
        }
    }
    res = max(0, (w - xmin)) * max(0, (h - ymin));
    cout << res;
    return 0;
}
