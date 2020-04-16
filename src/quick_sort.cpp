//
// Created by phiysng on 2020/4/16.
//

#ifndef REAL_TEST_QUICK_SORT_H
#define REAL_TEST_QUICK_SORT_H

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

///[lhs,rhs)版本
/// \tparam T  type of item
/// \param v  vector to be sorted
/// \param __beg  begin position
/// \param __end  end position
template<typename T>
void quick_sort(vector<T> &v, int __beg, int __end) {
    if (__end - __beg <= 1) return;

    int next = __beg;
    for (int i = __beg; i < __end - 1; ++i) {
        if (v[i] < v[__end - 1]) {
            swap(v[i], v[next++]);
        }
    }
    swap(v[__end - 1], v[next]);

    quick_sort(v, __beg, next);
    quick_sort(v, next + 1, __end);
}

#endif //REAL_TEST_QUICK_SORT_H
