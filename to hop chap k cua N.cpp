#include<stdio.h>

long long gt(int n){
	long long res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
long long tohop(int n,int k){
	return gt(n)/(gt(k)*gt(n-k));
}
int main(){
	int m, sum=0;
	scanf("%d", &m);
	int n[m],k[m];
	for(int i=0;i<m;i++){
	scanf("%d %d", &n[i], &k[i]);
	}
	for(int i=0;i<m;i++){
		sum+=tohop(n[i],k[i]);
	}
		printf("%d", sum);
}
