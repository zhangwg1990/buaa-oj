int equal(int a[])
{
	for(int i = 0;i < 10;i++)
	{
		if( a[i] != a[(i+1)%10])
			return 0;
	}
	return 1;
}


void distribute()
{
	int children[10];
	int n = 0;

	children[0] = 12;
	children[1] = 2;
	children[2] = 8;
	children[3] = 22;
	children[4] = 16;
	children[5] = 4;
	children[6] = 10;
	children[7] = 6;
	children[8] = 14;
	children[9] = 20;

	while(!equal(children[]))
	{
		for(int i = 0;
