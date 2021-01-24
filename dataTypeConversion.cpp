
#include <iostream>
using namespace std;
void dataTypeConversion(int a, float b, double c, long long l, string d)
{
    printf("a= %d  b= %f  c= %lf  l= %lld  d= %s", a, b, c, l, d);
    float p = b / c;     //b/c
    double q = b / a;    //b/a
    int r = c / a;       //c/a
    long long m = r + l; //r+l
    cout << "\np=b/c, q=b/a, r=c/a, m=r+l";
    cout << "p=" << p << " q=" << q << " r=" << r << " m=" << m << endl;
    cout << d << " " << d[3] << endl;
}
int main()
{
    int T;
    int a;
    float b;
    double c;
    long long l;
    string d;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c >> l >> d;
        dataTypeConversion(a, b, c, l, d);
    }
    return 0;
}