#include <iostream>
#include "random_sampling.hpp"

int main() {
    tsp_instance problem;
    problem.n = 10;  // 10 городов
    
    tsp_solution solution;
    
    // Количество случайных выборок
    int num_samples = 100;
    
    // Вызываем функцию из листинга 12.4
    random_sampling(&problem, num_samples, &solution);
    
    // Выводим сообщение о завершении
    std::cout << "Функция random_sampling выполнена." << std::endl;
    std::cout << "Проверено " << num_samples << " случайных решений." << std::endl;
    
    return 0;
}
