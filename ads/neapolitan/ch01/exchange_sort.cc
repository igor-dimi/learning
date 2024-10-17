#include <iostream>
#include <cstdlib>
#include <utility>
#include "arr.hh"

template <typename T>
void swap(T& a, T& b)
{
    T tmp{std::move(a)};
    a = std::move(b);
    b = std::move(tmp);
}

template <typename T>
void exhange_sort(T s[], int N)
{
    //invariant: sorted a[0..i-1]
    for (int i = 0; i < N; i++) {
        // invariant: a[i] == min(a[i..j-1])
        for (int j = i + 1; j < N; j++)
            if (s[j] < s[i]) swap(s[i], s[j]);
    }
}

const int SIZE = 20;

int main(int argc, char const *argv[])
{
    /* code */
    int a[SIZE];
    srand(time(0));
    fill_rand(a, SIZE, 100);
    print(a, SIZE);
    exhange_sort(a, SIZE);
    print(a, SIZE);

    return 0;
}

