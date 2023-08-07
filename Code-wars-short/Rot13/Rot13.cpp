#include <string>
using namespace std;

string rot13(string msg)
{
    string output = "";
    for (int i = 0; i < msg.length(); i++) {
        char c = msg[i];
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + 13) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + 13) % 26;
        }
        output += c;
    }
    return output;
}
