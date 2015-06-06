static int methodFor(int n)
{
	int answer = 0;
	for(int i = 1; i <= n; i++)
		answer += i;
	return answer;
}

static int methodWhile(int n)
{
	int answer = 0;
	int i = 1;
	while(int i <= n){
		answer += i;
		i += 1;
	}
	return answer;
}

static int methodRecurse(int n)
{
	if(n == 1){
		return 1;
	}
	return n + methodRecurse(n - 1);
}
