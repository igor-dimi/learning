#include <iostream>
#include <cstdlib>
#include "arr.hh"

int bin_search(int* a, int size, int key)
{
    int lo = 0;
    int hi = size - 1;
    int mid = (lo + hi)/2;
    // invariant: key possibly in a[lo..hi] && mid == (lo + hi) / 2 
    while (lo <= hi && key != a[mid]) {
        if (key > a[mid]) lo = mid + 1;
        else hi = mid - 1;
        mid = (lo + hi) / 2;
    } // lo >= key || key == a[mid]
    if (key == a[mid]) return mid;
    return -1;
}

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

const int SIZE = 3;

int main(int argc, char const *argv[])
{
    int a[SIZE];
    srand(time(0));
    fill_rand(a, SIZE, 100);
    print(a, SIZE);
    exhange_sort(a, SIZE);
    print(a, SIZE);

    int key;
    std::cout << "search for: ";
    std::cin >> key;

    std::cout << "found at: " << bin_search(a, SIZE, key) 
        << std::endl;

    return 0;


}
