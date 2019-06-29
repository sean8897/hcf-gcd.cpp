
int main()
{
	int A1, A2, max, min, re1, re2;
	cout << "Enter No1 integer values \n";
	cin >> A1;
	cout << "Enter No2 integer values \n";
	cin >> A2;

	if (A1 > A2)
	{
		max = A1;
		min = A2;
	}
	else
	{
		max = A2;
		min = A1;
	}

	for (int i = min; i > 0; i--)
	{
		re1 = A1 % i;
		re2 = A2 % i;
		if ((re1 == 0) && (re2 == 0))
		{
			cout << "g.c.d. = " << i << "\n";
			break;
		}
	}

	for (int y = max; y > 0; y++)
	{
		re1 = y % A1;
		re2 = y % A2;
		if ((re1 == 0) && (re2 == 0))
		{
			cout << "l.c.m. = " << y	;
			break;
		}
	}
}
