#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;

void fecha_actual ();
void dias_totales ();
void diasRestantes ();

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

void fecha_actual ()
{      
       // Obtener la fecha actual
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);
    tm now_tm = *localtime(&now_time);
    char now_date[11];
    strftime(now_date, sizeof(now_date), "%Y-%m-%d", &now_tm);

    cout << "Fecha actual: " << now_date << endl;
           
}

/*void diasRestantes ()
{
   // Calcular los días restantes
    chrono::duration<double> remaining_seconds = chrono::duration_cast<chrono::duration<double>>(chrono::system_clock::from_time_t(expiration_time) - now);
    int remaining_days = static_cast<int>(remaining_seconds.count() / 86400);

    cout << "Días restantes: " << remaining_days << endl; 
    */
    
    
    
    
    void diasRestantes()
{
    // Obtener la fecha actual
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);
    tm now_tm = *localtime(&now_time);

    // Obtener la fecha de vencimiento (expiration_time)
    tm expiration_tm = {};  // Initialize to zero
    expiration_tm.tm_year = 123;  // Set the year (e.g., 2023)
    expiration_tm.tm_mon = 4;    // Set the month (e.g., May)
    expiration_tm.tm_mday = 31;  // Set the day

    time_t expiration_time = mktime(&expiration_tm);

    // Calcular los días restantes
    chrono::duration<double> remaining_seconds = chrono::duration_cast<chrono::duration<double>>(chrono::system_clock::from_time_t(expiration_time) - now);
    int remaining_days = static_cast<int>(remaining_seconds.count() / 86400);

    cout << "Días restantes: " << remaining_days << endl;

}
