#include "Human.h"

void Human::Init()
{
    cout << "\n¬ведите им€: ";
    cin >> name;
    cout << "\n¬ведите фамилию: ";
    cin >> surname;
    cout << "\n¬ведите ќтчество: ";
    cin >> second_name;
    cout << "\n¬ведите пасспортные данные: ";
    cout << "\n¬ведите серию: ";
    cin >> passport_series;
    cout << "\n¬ведите номер: ";
    cin >> passport_series;
    cout << "\n¬ведите год рождени€: ";
    cin >> year_of_birth;
}

Human::Human()
{
    name = "»ван";
    second_name = "»ваныч";
    surname = "»ванов";
    passport_series = 1245;
    passport_number = 67890;
    year_of_birth = 1990;
}
