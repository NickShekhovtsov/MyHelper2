#include "Human.h"

void Human::Init()
{
    cout << "\n������� ���: ";
    cin >> name;
    cout << "\n������� �������: ";
    cin >> surname;
    cout << "\n������� ��������: ";
    cin >> second_name;
    cout << "\n������� ����������� ������: ";
    cout << "\n������� �����: ";
    cin >> passport_series;
    cout << "\n������� �����: ";
    cin >> passport_series;
    cout << "\n������� ��� ��������: ";
    cin >> year_of_birth;
}

Human::Human()
{
    name = "����";
    second_name = "������";
    surname = "������";
    passport_series = 1245;
    passport_number = 67890;
    year_of_birth = 1990;
}
