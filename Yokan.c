#include <stdio.h>
#include <stdbool.h>

long N,K,L;
long A[1<<18];

bool solve(long M){
	long cnt = 0;
	long pre = 0;
	for (int i = 0; i <= N; ++i)
	{
		if(A[i] - pre>= M && L-A[i] >= M){
			cnt += 1;
			pre = A[i];
		}
	}
	if(cnt >= K){
		return true;
	}else{
		return false;
	}
}

int main(int argc, char const *argv[])
{
	scanf("%ld",&N);
	scanf("%ld",&L);
	scanf("%ld",&K);

	for (int i = 1; i <= N; ++i)
	{
		scanf("%ld",&A[i]);
	}

	long left = -1;
	long right = L+1;

	while(right-left > 1){
		long mid = left + (right -left)/2;
		if(solve(mid) ==false){
			right = mid;
		}else{
			left = mid;
		}
	}

	printf("%ld\n",left );
	return 0;
}