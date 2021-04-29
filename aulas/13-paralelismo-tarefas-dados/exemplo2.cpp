#include <omp.h>
#include <iostream>

int main() {
    #pragma omp parallel for schedule(static, 4)
    for (int i = 0; i < 20; i++) {
        std::cout << i << " Eu rodei na thread: " << omp_get_thread_num() << "\n";
    }
    return 0;
}
