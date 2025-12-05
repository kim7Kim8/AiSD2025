#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include "random_sampling.hpp"

// Инициализация решения
void initialize_solution(int n, tsp_solution* s) {
    s->tour = new int[n];
    s->length = n;
    for (int i = 0; i < n; i++) {
        s->tour[i] = i;
    }
}

// Генерация случайного решения (случайная перестановка)
void random_solution(tsp_solution* s) {
    int n = s->length;
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // swap
        int temp = s->tour[i];
        s->tour[i] = s->tour[j];
        s->tour[j] = temp;
    }
}

// Вычисление стоимости решения (упрощенная версия)
double solution_cost(tsp_solution* s, tsp_instance* t) {
    double cost = 0;
    for (int i = 0; i < s->length; i++) {
        cost += s->tour[i];
    }
    return cost;  
}

// Копирование решения
void copy_solution(tsp_solution* src, tsp_solution* dest) {
    dest->length = src->length;
    for (int i = 0; i < src->length; i++) {
        dest->tour[i] = src->tour[i];
    }
}

// Обновление счетчика решений
void solution_count_update(tsp_solution* s, tsp_instance* t) {
    static int count = 0;
    count++;
    if (count % 1000000 == 0) {
        std::cout << "Проверено решений: " << count << std::endl;
    }
}

// Основная функция произвольной выборки (как в листинге 12.4)
void random_sampling(tsp_instance* t, int nsamples, tsp_solution* best_solution) {
    tsp_solution current_solution; // Текущее решение
    double best_cost; // Лучшая стоимость
    double current_cost; // Текущая стоимость
    int i; // Счетчик

    initialize_solution(t->n, &current_solution);
    best_cost = solution_cost(&current_solution, t);
    copy_solution(&current_solution, best_solution);

    for (i = 1; i <= nsamples; i++) {
        random_solution(&current_solution);
        current_cost = solution_cost(&current_solution, t);

        if (current_cost < best_cost) {
            best_cost = current_cost;
            copy_solution(&current_solution, best_solution);
            std::cout << "Найдено лучшее решение: " << best_cost << std::endl;
        }

        solution_count_update(&current_solution, t);
    }
    
    delete[] current_solution.tour;
}
