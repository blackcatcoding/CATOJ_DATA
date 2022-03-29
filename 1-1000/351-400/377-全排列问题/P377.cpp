#include <iostream>
#include <cstdio>
using namespace std;

const int N = 15;

int n;
int a[N];
bool book[N];

void dfs(int u){
	if(u > n){
		for(int i = 1; i <= n; i++)
			printf("%3d", a[i]);
		puts("");
      	return;
	}

	for(int i = 1; i <= n; i++){
		if(book[i]) continue;
		a[u] = i;
		book[i] = true;
		dfs(u + 1);
		book[i] = false;
	}
}

int main() {

	cin >> n;
	dfs(1);
	
	return 0;
}


