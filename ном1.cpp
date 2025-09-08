#include <iostream>
using namespace std;
int main()
{
    float min, max, a, b, c, n = 3, sr, sum = 0;
    cin >> a >> b >> c;
    if (a >= b) {
        max = a;
        min = b;
        if (c >= a) max = c;
        else if (c <= b) min = c;
    }
    else {
        max = b;
        min = a;
        if (c >= b) max = c;
        else if (c <= a) min = c;
    }
    sum = a + b + c;
    sr = sum / n;
    cout << min << " " << sr << " " << max << "\n";
    for (int i = 0; ; i++) {
        cin >> a;
        if (!a) break;
        if (a < min) min = a;
        if (a > max) max = a;
        sum += a;
        sr = sum / ++n;
        cout << min << " " << sr << " " << max << "\n";
    }
    return 0;
}