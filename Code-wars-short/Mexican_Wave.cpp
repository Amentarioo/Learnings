#include <vector>
#include <string>
#include <cctype>
using namespace std;
vector<string> wave(string y) {
    vector<string> result;
    int len = y.size();
    
    for (int i = 0; i < len; i++) {
        if (isalpha(y[i])) { // Check if it's an alphabet character
            y[i] = toupper(y[i]); // Convert the character to uppercase
            result.push_back(y); // Add the modified string to the result vector
            y[i] = tolower(y[i]); // Convert the character back to lowercase
        }
    }

    return result; // Return the result vector with the Mexican Wave
}
