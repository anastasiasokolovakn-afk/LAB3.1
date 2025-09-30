// LR3.1.cpp 
// �������� �������� �������� 
// ����������� ������ � 3.1 
// ������������, ������ ��������: ������� ���� �����. 
// ������ 27
#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // ������� �������� 
    double y;  // ��������� ���������� ������ 
    double A;  // �������� ��������� - ������������� ����� ������� ������ 
    double B;  // �������� ��������� - ������������� ����� ������� ������ 

    cout << "x = "; cin >> x;

    A = fabs(9 * x * x * x + 2);

    // ����� 1: ������������ � ��������� ����
    if (x < 4)
        B = 3 * pow(x, 5) - pow(x, 3) + 2 * x - 1;
    if (4 <= x && x < 7)
        B = atan((x - 2)/3.0);
    if (x >= 7)
        B = log10(pow(2, 1.0 / x) + exp(3 * x + 1));

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ����� ���� 
    if (x < 4)
        B = 3 * pow(x, 5) - pow(x, 3) + 2 * x - 1;
    else
        if (x >= 7)
            B = log10(pow(2, 1.0 / x) + exp(3 * x + 1));
        else
            B = atan((x - 2) / 3.0);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}