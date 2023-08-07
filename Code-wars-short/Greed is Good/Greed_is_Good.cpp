#include <vector>

int score(const std::vector<int>& dice) {
    int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0, counter_6 = 0, result = 0;

    for (auto i = 0; i < 5; i++) {
        if (dice[i] == 1) {
            counter_1++;
        } else if (dice[i] == 2) {
            counter_2++;
        } else if (dice[i] == 3) {
            counter_3++;
        } else if (dice[i] == 4) {
            counter_4++;
        } else if (dice[i] == 5) {
            counter_5++;
        } else if (dice[i] == 6) {
            counter_6++;
        }
    }
    if (counter_1 >= 3) {
        result += 1000; // Special Scores for 1
        counter_1 -= 3;}
    if (counter_1 < 3) {
        result += counter_1 * 100;}
    if (counter_5 >= 3) {
        result += 500; // Special Scores for 5
        counter_5 -= 3;}
    if (counter_5 < 3) {
        result += counter_5 * 50;}
    if (counter_2 >= 3) {
        result += 200;}
    if (counter_3 >= 3) {
        result += 300;}
    if (counter_4 >= 3) {
        result += 400;}
    if (counter_6 >= 3) {
        result += 600;}

    return result;
}
