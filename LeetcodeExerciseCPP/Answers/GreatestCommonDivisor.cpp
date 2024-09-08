//
//  GreatestCommonDivisor.cpp
//  LeetcodeExerciseCPP
//
//  Created by Bilal on 8.09.2024.
//

#include "GreatestCommonDivisor.hpp"

int GreatestCommonDivisor::gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

string GreatestCommonDivisor::gcdOfStrings(string str1, string str2) {
    return (str1 + str2 == str2 + str1) ?
    str1.substr(0, gcd(size(str1), size(str2))) : "";
}
