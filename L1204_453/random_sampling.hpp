#ifndef RANDOM_SAMPLING_HPP
#define RANDOM_SAMPLING_HPP

typedef struct {
    int n; // количество городов
    // другие параметры задачи коммивояжера
} tsp_instance;

typedef struct {
    int* tour; // маршрут
    int length; // длина маршрута
} tsp_solution;

// Инициализация решения
void initialize_solution(int n, tsp_solution* s);

// Случайное решение
void random_solution(tsp_solution* s);

// Вычисление стоимости решения
double solution_cost(tsp_solution* s, tsp_instance* t);

// Копирование решения
void copy_solution(tsp_solution* src, tsp_solution* dest);

// Обновление счетчика решений
void solution_count_update(tsp_solution* s, tsp_instance* t);

// Основная функция произвольной выборки
void random_sampling(tsp_instance* t, int nsamples, tsp_solution* best_solution);

#endif