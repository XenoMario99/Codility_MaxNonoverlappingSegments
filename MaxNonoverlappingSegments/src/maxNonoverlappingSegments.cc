#include "maxNonoverlappingSegments.h"

int solution(vector<int>& A, vector<int>& B) {
    if (A.empty()) {
        return 0;
    } else if (A.size() == 1) {
        return 1;
    }

    const auto size{A.size()};

    int numOfelements{1};
    int prior{B[0]};
    for (std::size_t i = 1; i < size; i++) {
        if (prior < A[i]) {
            prior = B[i];
            numOfelements++;
        }
    }

    return numOfelements;
}
