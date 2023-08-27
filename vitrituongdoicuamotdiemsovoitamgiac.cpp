#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int x, y;
} diem;
float area(diem a, diem b, diem c)
{
    float s = 0.5 * abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y));
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    diem a, b, c, m;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> m.x >> m.y;
    float areaABC = area(a, b, c);
    float areaABM = area(a, b, m);
    float areaACM = area(a, c, m);
    float areaBCM = area(b, c, m);
    if (areaABM == 0 || areaACM == 0 || areaBCM == 0)
        cout << "M o tren canh tam giac";
    else if (areaABC < areaACM + areaABM + areaBCM)
        cout << "M o ngoai tam giac";
    else
        cout << "M o trong tam giac";
}
