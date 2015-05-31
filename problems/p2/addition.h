static int methodFor(int n)
{
	int answer = 0;
	for(int i = 0; i < n; i++)
		answer += i;
	return answer;
}

static int methodWhile(int n)
{
	(void)n;
	return 0;
}

static int methodRecurse(int n)
{
	(void)n;
	return 0;
}
