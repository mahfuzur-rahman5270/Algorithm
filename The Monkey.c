#include <stdio.h>

int main() {
    int t, n, test = 0;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        scanf("%d", &n); // Read the number of elements in the array
        int a[100001] = {}; // Declare an array 'a' to store the elements (initialized to all zeros)
        int i;

        // Read the elements into the array 'a'
        for (i = 1; i <= n; i++) {
            scanf("%d", a + i);
        }

        int k = 0, ans;

        // Find the maximum difference between consecutive elements in 'a'
        for (i = 1; i <= n; i++) {
            if (a[i] - a[i - 1] > k)
                k = a[i] - a[i - 1];
        }

        ans = k;

        // Find the minimum value of 'k' that satisfies the given conditions
        for (i = 1; i <= n; i++) {
            if (a[i] - a[i - 1] == k)
                k--;
            else if (a[i] - a[i - 1] > k) {
                ans++;
                break;
            }
        }

        printf("Case %d: %d\n", ++test, ans); // Output the result for the current test case
    }

    return 0;
}
