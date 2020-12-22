#include<bits/stdc++.h>\n\nusing namespace std;\n\n\n/* macros*/\n#define gc getchar_unlocked\n#define fo(i,n) for(i=0;i<n;i++)\n#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)\n#define ll long long\n#define si(x)	scanf("%d",&x)\n#define sl(x)	scanf("%lld",&x)\n#define ss(s)	scanf("%s",s)\n#define pi(x)	printf("%d\\n",x)\n#define pl(x)	printf("%lld\\n",x)\n#define ps(s)	printf("%s\\n",s)\n#define deb(x) cout << #x << "=" << x << endl\n#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl\n#define pb push_back\n#define mp make_pair\n#define F first\n#define S second\n#define all(x) x.begin(), x.end()\n#define clr(x) memset(x, 0, sizeof(x))\n#define sortall(x) sort(all(x))\n#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)\n#define PI 3.1415926535897932384626\ntypedef pair<int, int>	pii;\ntypedef pair<ll, ll>	pl;\ntypedef vector<int>		vi;\ntypedef vector<ll>		vl;\ntypedef vector<pii>		vpii;\ntypedef vector<pl>		vpl;\ntypedef vector<vi>		vvi;\ntypedef vector<vl>		vvl;\nmt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());\nint rng(int lim) {\n\t uniform_int_distribution<int> uid(0,lim-1);  \n\t return uid(rang);\n}\nint mpow(int base, int exp);\nvoid ipgraph(int n, int m);\nvoid dfs(int u, int par);\n \nconst int mod = 1'000'000'007;\nconst int N = 3e5, M = N;\n \n \n/*starts from here*/\nvi g[N];\nint a[N];\n \nvoid solve() {\n\t int i, j, n, m;\n}\n\nint main() {\n\tios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);  \n\tsrand(chrono::high_resolution_clock::now().time_since_epoch().count());\n\tint t = 1;  \n\tcin >> t;  \n\twhile(t--) {\n\t\tsolve();\n\t}\n\treturn 0;\n}\n\nint mpow(int base, int exp) {\n\tbase %= mod;\n\tint result = 1;\n\twhile (exp > 0) {\n\t\tif (exp & 1) result = ((ll)result * base) % mod;\n\t\tbase = ((ll)base * base) % mod;\n\t\texp >>= 1;\n\t}\n\treturn result;\n}\n\nvoid ipgraph(int n, int m){\n\tint i, u, v;\n\twhile(m--){\n\t\tcin>>u>>v;\n\t\tu--, v--;\n\t\tg[u].pb(v);\n\t\tg[v].pb(u);\n\t}\n}\n\nvoid dfs(int u, int par){\n\tfor(int v:g[u]){\n\t\tif (v == par) continue;\n\t\tdfs(v, u);\n\t}\n}\n