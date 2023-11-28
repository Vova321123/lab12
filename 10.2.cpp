#include <iostream>
#include <vector>

void замінити_сусідніми_елементами(std::vector<int>& масив) {
    if (масив.size() < 3) {
        std::cout << "Масив занадто короткий для операції" << std::endl;
        return;
    }

    std::vector<int> тимчасовий = масив; // Створення копії масиву для збереження початкових значень

    for (int індекс = 1; індекс < масив.size() - 1; індекс++) {
        масив[індекс] = (тимчасовий[індекс - 1] + тимчасовий[індекс + 1]) / 2;
    }
}

int main() {
    std::vector<int> мій_масив = {1, 2, 3, 4, 5}; // Зразок масиву, який можна змінити

    замінити_сусідніми_елементами(мій_масив);

    std::cout << "Результат заміни елементів масиву (крім крайніх) на півсуму сусідніх:" << std::endl;
    for (int елемент : мій_масив) {
        std::cout << елемент << " ";
    }
    std::cout << std::endl;

    return 0;
}
