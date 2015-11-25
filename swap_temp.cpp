/* method I */
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;	
}

/*
 * method II
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}
*/
