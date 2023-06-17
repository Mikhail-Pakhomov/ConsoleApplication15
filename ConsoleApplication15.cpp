#include <iostream>
#include <vector>

int main() {
    std::vector<char> sequence = { 'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T', 'Z', 'Y', 'X', 'W', 'O', 'T',
                                   'Z', 'Y', 'Q', 'V', 'U', 'T', 'S', 'X', 'W', 'V', 'N', 'Z', 'Y', 'X', 'P', 'U', 'T',
                                   'Z', 'R', 'W', 'V', 'U', 'M', 'Y', 'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U',
                                   'T', 'S', 'X', 'W', 'V', 'N', 'Z', 'Y', 'X', 'P', 'U', 'T', 'Z', 'R', 'W', 'V', 'U',
                                   'M', 'Y', 'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T', 'S', 'X', 'W', 'V', 'N',
                                   'Z', 'Y', 'X', 'P', 'U', 'T', 'Z' };
    std::vector<char> uniqueChars;
    std::vector<int> intervals;
    for (char ch : sequence) {
        if (std::find(uniqueChars.begin(), uniqueChars.end(), ch) == uniqueChars.end()) {
            uniqueChars.push_back(ch);
            intervals.push_back(1);
        }
        else {
            intervals.back() += 1;
        }
    }

    std::cout << "Intervals:\n";
    for (int i = 0; i < uniqueChars.size(); i++) {
        std::cout << "'" << uniqueChars[i] << "': " << intervals[i] << "\n";
    }

    return 0;
}