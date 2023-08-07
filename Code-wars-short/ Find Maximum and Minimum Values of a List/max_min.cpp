#include <vector>
using namespace std;

int min(vector<int> list) {
    int min_val = list[0];
    for (size_t i = 0; i < list.size(); i++) {
        if (min_val > list[i]) {
            min_val = list[i];
        }
    }
    return min_val;
}

int max(vector<int> list) {
    int max_val = list[0];
    for (size_t i = 0; i < list.size(); i++) {
        if (max_val < list[i]) {
            max_val = list[i];
        }
    }
    return max_val;
}
