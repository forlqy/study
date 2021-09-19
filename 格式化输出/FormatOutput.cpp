#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
int main() {
    //����1:չʾsetw��setfill
    cout << std::setw(4) << std::setfill('#') << "a";
    cout << std::setfill('#');
    for (int i = 0; i < 5; i++) {
        cout << std::setw(i+2) << ' ' << endl;
    }
    //����2:չʾsetprecision, fixed, showpoint, left, right
    double pi = 3.14159265358979323846;
    cout << std::setprecision(6) << pi << endl;
    cout << std::setprecision(6) << std::fixed << pi << endl;
    double y = 3.0;
    cout << y << endl;
    cout << std::showpoint << y << endl;

    cout << std::setw(20) << std::left << pi << endl;
    cout << std::setw(20) << std::right << pi << endl;
    //����3:չʾhexfloat
    double z = 3.0;
    cout << std::hexfloat << z << endl;
    cout << std::defaultfloat;
    cout << z << endl;
    cout << std::showpoint << z << endl;
    return 0;
}
