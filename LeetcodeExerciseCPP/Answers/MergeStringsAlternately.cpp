//
//  MergeStringsAlternately.cpp
//  LeetcodeExerciseCPP
//
//  Created by Bilal on 7.09.2024.
//

#include "MergeStringsAlternately.hpp"

string MergeStringsAlternately::mergeStrings(string word1, string word2) {
    
    string mergedString;
    size_t len1 = word1.length();
    size_t len2 = word2.length();
    size_t minLenght = min(len1, len2);
    
    for(size_t i = 0; i < minLenght; i++) {
        mergedString.push_back(word1[i]);
        mergedString.push_back(word2[i]);
    }
    
    if (len1>len2) {
        mergedString.append(word1.substr(minLenght));
    } else if (len2>len1) {
        mergedString.append(word2.substr(minLenght));
    }
    return mergedString;
}
