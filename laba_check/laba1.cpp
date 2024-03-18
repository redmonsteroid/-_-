#include <iostream>
#include <cmath>
using namespace std;
int main(){

    cout << "Enter the number of the desired figure:" << endl; // Вывод первого меню
    cout << "1) Rectangle 2) Triangle" << endl;
    int figureId; // Переменная для идентификации фигуры
    cin >> figureId;
    cout << endl;
    switch (figureId){ // обработка длин сторон для нужной фигуры и вывод
        case 1:
            cout << "Enter the side lengths" << endl;
            int a,b;
            cin >> a >> b;
            cout << "Perimeter = " << ( a + b ) * 2 << endl;
            cout << "Area = " << a * b << endl; 
            cout << "Diagonal = " << sqrt( pow( a , 2 ) + pow( b , 2 ) ) << endl;
            break; 
        case 2:
            cout << "Enter the sides of triangle" << endl;
            int x, y, z, p;
            cin >> x >> y >> z;
            p = x + y + z;
            cout << "Perimeter triangl = " << p << endl;
            double f;
            f = p * 0.5;
            cout << "Area Geron = " << sqrt(f * (f - x) * (f - y) * (f - z)) << endl;
            if ((x == y) or (x == z) or (y == z)) {
                cout << "Isosceles triangle " << endl;
            }
            else {
                cout << "A non-isosceles triangle " << endl;
            }
            break;
        default:
            cout << "Incorrect figure number entered" << endl;
            return -1;
    }
    
    return 0;
}