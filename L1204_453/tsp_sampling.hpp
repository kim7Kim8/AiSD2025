#ifndef TSP_SAMPLING_HPP
#define TSP_SAMPLING_HPP

struct tsp_instance {
    int n;
    double** distance;
};

struct tsp_solution {
    int* path;
    double cost;
    int count;
};

void random_sampling(tsp_instance* t, int nsamples, tsp_solution* s);

#endif