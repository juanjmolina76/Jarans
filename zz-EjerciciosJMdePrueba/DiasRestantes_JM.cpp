#include <iostream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;

int main() {
    // Obtener la fecha de expiración
    time_t expiration_time = time(nullptr) + (86400*3);
    tm expiration_tm = *localtime(&expiration_time);
    char expiration_date[11];
    strftime(expiration_date, sizeof(expiration_date), "%Y-%m-%d", &expiration_tm);

    cout << "Fecha de expiración: " << expiration_date << endl;

    // Obtener la fecha actual
    auto now = chrono::system_clock::now();
    time_t now_time = chrono::system_clock::to_time_t(now);
    tm now_tm = *localtime(&now_time);
    char now_date[11];
    strftime(now_date, sizeof(now_date), "%Y-%m-%d", &now_tm);

    cout << "Fecha actual: " << now_date << endl;

    // Calcular los días restantes
    chrono::duration<double> remaining_seconds = chrono::duration_cast<chrono::duration<double>>(chrono::system_clock::from_time_t(expiration_time) - now);
    int remaining_days = static_cast<int>(remaining_seconds.count() / 86400);

    cout << "Días restantes: " << remaining_days << endl;

    return 0;
}
