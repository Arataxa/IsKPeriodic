#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int k) {
    int n = str.length();

    if (n % k != 0) {
        return false;
    }

    for (int i = k; i < n; i++) {
        if (str[i] != str[i % k]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string testStr = "abcabcabcabc";

    int k = 3;

    std::cout << "String: " << testStr << ", k=" << k << " Result: " << IsKPeriodic(testStr, k) << std::endl;

    return 0;
}