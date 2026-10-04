#include <iostream>
#include <Windows.h>

int main()
{
  
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // Задан 1
    float distance = 0;
    float travelTime = 0;

    std::cout << "Введите расстояние до аэропорта (км): ";
    std::cin >> distance;
    std::cout << "Введите время, за которое нужно доехать (ч): ";
    std::cin >> travelTime;

    float speed = distance / travelTime;
    std::cout << "Нужно ехать со скоростью: " << speed << " км/ч\n";

    // Задан 2
    const int pricePerMinute = 2;

    int startHours = 0;
    int startMinutes = 0;
    int startSeconds = 0;
    int endHours = 0;
    int endMinutes = 0;
    int endSeconds = 0;

    std::cout << "\nВведите время начала поездки\n";
    std::cout << "Часы: ";
    std::cin >> startHours;
    std::cout << "Минуты: ";
    std::cin >> startMinutes;
    std::cout << "Секунды: ";
    std::cin >> startSeconds;

    std::cout << "Введите время конца поездки\n";
    std::cout << "Часы: ";
    std::cin >> endHours;
    std::cout << "Минуты: ";
    std::cin >> endMinutes;
    std::cout << "Секунды: ";
    std::cin >> endSeconds;

    int startTotal = startHours * 3600 + startMinutes * 60 + startSeconds;
    int endTotal = endHours * 3600 + endMinutes * 60 + endSeconds;
    float tripSeconds = endTotal - startTotal;
    float tripPrice = tripSeconds / 60 * pricePerMinute;

    std::cout << "Стоимость поездки: " << tripPrice << " грн\n";

    // Задан 3
    float tripDistance = 0;
    float consumption = 0;
    float petrolPrice1 = 0;
    float petrolPrice2 = 0;
    float petrolPrice3 = 0;

    std::cout << "\nВведите расстояние (км): ";
    std::cin >> tripDistance;
    std::cout << "Введите расход бензина на 100 км (л): ";
    std::cin >> consumption;
    std::cout << "Введите стоимость 1 вида бензина: ";
    std::cin >> petrolPrice1;
    std::cout << "Введите стоимость 2 вида бензина: ";
    std::cin >> petrolPrice2;
    std::cout << "Введите стоимость 3 вида бензина: ";
    std::cin >> petrolPrice3;

    float liters = tripDistance / 100 * consumption;

    std::cout << "\nВид бензина\tСтоимость поездки\n";
    std::cout << "Бензин 1\t" << liters * petrolPrice1 << "\n";
    std::cout << "Бензин 2\t" << liters * petrolPrice2 << "\n";
    std::cout << "Бензин 3\t" << liters * petrolPrice3 << "\n";

    system("pause");
  
    return 0;
}
