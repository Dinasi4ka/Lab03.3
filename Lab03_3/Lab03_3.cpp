// Lab03_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//³���� ĳ���
//����������� ������ 3.3
//������������, ������ �������� �������
//������ 2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // ������� ��������66
    double R; // ������� ��������
    double y; // ��������� ���������� ������

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -8)
        y = -R;
    else
        if (-8 < x && x <= -R)
            y = (R * x) / 8;
        else
            if (-R < x && x <= R)
                y = sqrt(pow(R, 2) - pow(x, 2));
            else
                if (R < x && x <= 5)
                    y = (2 * x - 2 * R) / (5 - R);
                else
                    y = 3;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}

