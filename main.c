//https://codeforces.com/problemset/problem/577/A

#include <stdio.h>

int solveProblem(int n, int x) {
    int k=0;

    for (int i=1; i<=n; i++) {
        if (x%i == 0 && x/i <= n) k++;
    }

    return k;
}

int doCheck() {
    if (solveProblem(10, 5) != 2) return 0;
    if (solveProblem(6, 12) != 4) return 0;
    if (solveProblem(5, 13) != 0) return 0;
    return 1;
}

int main() {

    if (!doCheck()) return -1;

    long int n, x, k=0;

    scanf("%d %d", &n, &x);

    k=solveProblem(n, x);

    printf("%d", k);

    return 0;
}
