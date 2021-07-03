/*nput Format

Input will contain four integers -a,b,c,d , one per line.

Output Format

Return the greatest of the four integers.
PS: I/O will be automatically handled.
*/
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{       int ans;
    if (a>=b && a>=c && a>=c)
    {return a;}
    else if (b>=c && b>=d)
    {return b;}
    else if (c>=d)
    {return c;}
    else 
    return d;
}
   
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}