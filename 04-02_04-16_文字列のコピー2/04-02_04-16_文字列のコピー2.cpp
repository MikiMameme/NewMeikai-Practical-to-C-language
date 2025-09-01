/*文字列コピーを行う関数の実現例(関数のみ)*/

/*文字列をコピー１*/
char* scpy1(char* d, const char* s)
{
	int i = 0;

	while((d[i] = s[i]) != '\0')
		i++;

	return d;
}

/*文字列をコピー２*/
char* scpy2(char* d, const char* s)
{
	char* p = d;

	while ((*d = *s) != '\0') {
		d++;
		s++;
	}

	return p;
}

/*文字列をコピー３*/
char* scpy3(char* d, const char* s)
{
	char* p = d;

	while ((*d++ = *s++) != '\0')
		;

	return p;
}

/*文字列をコピー４*/
char* scpy4(char* d, const char* s)
{
	char* p = d;

	while (*d++ = *s++)
		;

	return p;
}