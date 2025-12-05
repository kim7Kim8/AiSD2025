#include "random_sampling.hpp"

void initialize_solution(int n, tsp_solution* s) {
}

void random_solution(tsp_solution* s) {
}

double solution_cost(tsp_solution* s, tsp_instance* t) {
    return 0.0;
}

void copy_solution(tsp_solution* src, tsp_solution* dest) {
}

void solution_count_update(tsp_solution* s, tsp_instance* t) {
}

void random_sampling(tsp_instance* t, int nsamples, tsp_solution* s) {
    tsp_solution s_now;
    double best_cost;
    double cost_now;
    int i;
    
    initialize_solution(t->n, &s_now);
    best_cost = solution_cost(&s_now, t);
    copy_solution(&s_now, s);
    
    for (i = 1; i <= nsamples; i++) {
        random_solution(&s_now);
        cost_now = solution_cost(&s_now, t);
        
        if (cost_now < best_cost) {
            best_cost = cost_now;
            copy_solution(&s_now, s);
        }
        
        solution_count_update(&s_now, t);
    }
}
