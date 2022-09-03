#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL)

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<string> vstr;
/* ---< CodeEz ThinhCPOJ2022 >--- */
/* ---< Function Prototype >--- */
/* ---< Function >--- */

/* ---< Function Main >--- */
int main (){
    FAST_IO; /* ---< FAST_IO >--- */ // If "FASTIO" is used, don't use "endl" because "endl" is slower than "\n" and disable "FASTIO"
    /* ---< code >--- */
	int money[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int n; cin >> n;
	int cnt = 0;
	for (int i = 0; i < 10; i++){
		cnt += n / money[i];
		n %= money[i];
	}
	cout << cnt;
	/* ---< endcode >--- */
    return (0-0);
}

