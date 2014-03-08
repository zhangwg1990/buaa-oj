#include <cstdio>

#define maxn 100000
int a[maxn];

int main(){
    int n;
	int sumLeft, sumRight;
    while ( scanf("%d", &n) == 1 ){
        long long res = 0;
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
		sumLeft = a[1];
		sumRight = 0;
		for (int i = 3; i <= n; i++)
			sumRight += a[i];
		for (int i = 2; i <= n - 1; i++) {
			res += (long long)sumLeft * sumRight;
			sumLeft += a[i];
			sumRight -= a[i + 1];
		}
        printf("%lld\n", res);
    }	
}