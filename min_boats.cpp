#include <iostream>
#include <vector>
#include <algorithm> 
#include "min_boats.h"

using namespace std;

int min_boats(vector<int>& people, const int& limit) {
    // For a vector
    sort(people.begin(), people.end()); // Sorts in ascending order by default
    int left = 0;
    int right = people.size() - 1;
    int boats = 0;

    if (people[right] > limit) {
        return -1;
    }

    while (left <= right) {
        if (people[left] + people[right] <= limit) {
            left++;
        }
        right--;
        boats++;
    }

    return boats;
}