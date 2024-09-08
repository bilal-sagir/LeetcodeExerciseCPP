//
//  GreatestCommonDivisor.hpp
//  LeetcodeExerciseCPP
//
//  Created by Bilal on 8.09.2024.
//

#ifndef GreatestCommonDivisor_hpp
#define GreatestCommonDivisor_hpp

#include <string>
using namespace std;

class GreatestCommonDivisor {
public:
    string gcdOfStrings(string str1, string str2);
private:
    int gcd(int a, int b);
};


#endif /* GreatestCommonDivisor_hpp */
