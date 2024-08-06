#include <iostream>
#include <cstdlib>

int seq_search(const int a[], int size, int val)
{
   int i = 0;
   // val not in a[0 .. i - 1] 
   while (i < size && a[i] != val) i++;
   // i >= size || a[i] == val;
   if (a[i] == val) return i;
   return -1;
}

void print(const int a[], int size)
{
    for (int i = 0; i < size; i++) std::cout << a[i] << " ";
    std::cout << std::endl;
}

const int SIZE = 10;

int main(int argc, char const *argv[])
{
    srand(time(0));
    int a[SIZE];
    // fill a with random values
    for (int i = 0; i < SIZE; i++) a[i] = rand() % 100;
    print(a, SIZE);
    std::cout << "Search for: " << std::endl;
    int val;
    std::cin >> val;
    int pos = seq_search(a, SIZE, val);

    std::cout << val << " found in position " << pos << std::endl;
    bool x = true;
    std::cout << x << std::endl;
    return 0;
}
