/*1-max‚Ì˜a‚ğ‹‚ß‚éŠÖ”sum*/

int sum(int max)
{
	int i, s = 0;

	for (i = 1; i <= max; i++)
		s += i;

	return s;
}