#include <bits/stdc++.h>
int main()
{
    int n, q;
    std::cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    std::sort(arr, arr + n);
    while (q--)
    {
        int tv;
        std::cin >> tv;
        bool ans = std::binary_search(arr, arr + n, tv);
        (ans) ? std::cout << "found" << std::endl : std::cout << "not found" << std::endl;
    }
}