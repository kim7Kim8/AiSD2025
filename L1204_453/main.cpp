#include <iostream>
#include <ctime>
#include "random_sampling.hpp"

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел
    
    tsp_instance problem;
    problem.n = 10; // 10 городов
    
    tsp_solution best_solution;
    initialize_solution(problem.n, &best_solution);
    
    std::cout << "=== Метод произвольной выборки (Монте-Карло) ===" << std::endl;
    std::cout << "Поиск решения для " << problem.n << " городов" << std::endl;
    
    int num_samples = 100; // Количество случайных выборок
    
    random_sampling(&problem, num_samples, &best_solution);
    
    std::cout << "\nЛучший найденный маршрут: ";
    for (int i = 0; i < best_solution.length; i++) {
        std::cout << best_solution.tour[i] << " ";
    }
    std::cout << std::endl;
    
    double final_cost = solution_cost(&best_solution, &problem);
    std::cout << "Стоимость лучшего решения: " << final_cost << std::endl;
    
    delete[] best_solution.tour;
    return 0;
}