#include <iostream>
#include <chrono>

using namespace std;

int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool is_leap_year(int year) {
    if (year % 4 != 0) return false;
    if (year % 100 != 0) return true;
    if (year % 400 == 0) return true;
    return false;
}

int days_in_month(int year, int month) {
    int days = month_days[month-1];
    if (month == 2 && is_leap_year(year)) {
        days++;
    }
    return days;
}

int days_between_dates(int start_day, int start_month, int start_year,
                       int end_day, int end_month, int end_year) {
    int days = 0;
    while (start_day != end_day || start_month != end_month || start_year != end_year) {
        days++;
        start_day++;
        if (start_day > days_in_month(start_year, start_month)) {
            start_day = 1;
            start_month++;
            if (start_month > 12) {
                start_month = 1;
                start_year++;
            }
        }
    }
    return days;
}

int main() {
    int start_day, start_month, start_year;
    cout << "Ingrese la fecha de inicio (dd mm aaaa): ";
    cin >> start_day >> start_month >> start_year;

    int end_day, end_month, end_year;
    cout << "Ingrese la fecha de fin (dd mm aaaa): ";
    cin >> end_day >> end_month >> end_year;

    int days = days_between_dates(start_day, start_month, start_year,
                                  end_day, end_month, end_year);

    chrono::seconds seconds = chrono::hours(24 * days);

    cout << "La cantidad de segundos entre las dos fechas es: " << seconds.count() << endl;
    system ("pause");
    return 0;
}
