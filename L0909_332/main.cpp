#include <iostream>
#include "find_paths.hpp"
using namespace std;

int main() {
    int path1[] = {1, 2, 3, 5};
    if (is_a_solution(path1, 3, 5)) {
        cout << "Path found!" << endl;
    } else {
        cout << "Path not completed" << endl;
    }

    int path2[] = {1, 2, 3, 4};
    if (is_a_solution(path2, 3, 5)) {
        cout << "Path found!" << endl;
    } else {
        cout << "Path not completed" << endl;
    }

    return 0;
}