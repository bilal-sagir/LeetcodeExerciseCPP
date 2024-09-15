//
//  main.cpp
//  LeetcodeExerciseCPP
//
//  Created by Bilal on 7.09.2024.
//

#include <iostream>
#include "MergeStringsAlternately.hpp"
#include "GreatestCommonDivisor.hpp"
#include "KidsWithCandies.hpp"
#include "CanPlaceFlowers.hpp"

int main(int argc, const char * argv[]) {
    
    MergeStringsAlternately obj = MergeStringsAlternately();
    string a = obj.mergeStrings("123", "abcd");
    cout << a << endl;
    
    GreatestCommonDivisor greatestCommonDivisor;
    string s1 = "ababab";
    string s2 = "abab";
    string result = greatestCommonDivisor.gcdOfStrings(s1, s2);
    cout << result << endl;
    
    KidsWithCandies kidWithCandies;
    vector<int> numbers = { 2,3,5,1,3 };
    vector<bool> r = kidWithCandies.kidsWithCandies(numbers, 3);
    for(bool val: r) {
        cout << (val ? "true" : "false") << " ";
    }
    cout << endl;
    
    CanPlaceFlowers obj2;
    vector<int> flowers = { 1,0,0,0,1 };
    int n = 2;
    bool res = obj2.canPlaceFlowers(flowers, n);
    cout << res << endl;
    
    
    return 0;
}
