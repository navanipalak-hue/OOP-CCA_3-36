#include <iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d) {
    int max_val = a;  

    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    if (d > max_val) max_val = d;

    return max_val;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;  

    cout << max_of_four(a, b, c, d) << endl; 

    return 0;
}
