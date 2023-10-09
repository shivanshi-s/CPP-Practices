#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100], b[100];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (int i=0; i<m; i++)
        scanf("%d", &b[i]);
    int cnt = 0;
    for (int k=1; k<=100; k++)
    {
        int flag = 1;
        for (int i=0; i<n; i++)
            if (k % a[i] != 0)
                flag = 0;
        for (int i=0; i<m; i++)
            if (b[i] % k != 0)
                flag = 0;
        if (flag == 1)
            cnt ++;
    }
    printf("%d\n", cnt);
    return 0;
}
