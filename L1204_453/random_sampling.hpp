//еще поменяю чуть позже

#ifndef RANDOM_SAMPLING_HPP
#define RANDOM_SAMPLING_HPP

// Минимальные объявления для компиляции
typedef struct {
    int n;
} tsp_instance;

typedef struct {
    int* tour;
    int length;
} tsp_solution;

// Только функция из листинга 12.4
void random_sampling(tsp_instance* t, int nsamples, tsp_solution* s);

#endif
