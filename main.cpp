#include <iostream>
using namespace std;
 
int main()
{
    // задача Begin15 - циклічна перестановка значень трьох змінних
    // декларація змінних
    double A, B, C, temp;
 
    // введення значень A, B, C
    cout << "Enter value A: ";
    cin >> A;
    cout << "Enter value B: ";
    cin >> B;
    cout << "Enter value C: ";
    cin >> C;
 
    // переміщення: A -> C, C -> B, B -> A
    // використовуємо допоміжну змінну temp, щоб не втратити значення
    temp = A;
    A = B;
    B = C;
    C = temp;
 
    // вивід нових значень A, B, C
    cout << "New A = " << A << endl;
    cout << "New B = " << B << endl;
    cout << "New C = " << C << endl;
 
    // задача Begin18 - обчислення A^8 через A^2, A^4, A^8
    // декларація змінних
    double a, a2, a4, a8;
 
    // введення числа a
    cout << "Enter number a: ";
    cin >> a;
 
    // послідовне обчислення степенів за допомогою трьох операцій множення
    a2 = a * a;
    a4 = a2 * a2;
    a8 = a4 * a4;
 
    // вивід всіх знайдених степенів
    cout << "a^2 = " << a2 << endl;
    cout << "a^4 = " << a4 << endl;
    cout << "a^8 = " << a8 << endl;
 
    // задача Begin35 - сума квадратів трьох чисел
    // декларація змінних
    double x, y, z, sum;
 
    // введення трьох чисел
    cout << "Enter number x: ";
    cin >> x;
    cout << "Enter number y: ";
    cin >> y;
    cout << "Enter number z: ";
    cin >> z;
 
    // обчислення суми квадратів x^2 + y^2 + z^2
    sum = x * x + y * y + z * z;
 
    // вивід результату
    cout << "Sum of squares = " << sum << endl;
 
    return 0;
}
