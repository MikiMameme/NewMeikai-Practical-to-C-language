/*�֐��e���v���[�g�ɂ��max2���`����w�b�_�iC / C++�j*/

/* C++ */
#ifdef __cplusplus
	template <typename Type> Type max2(const Type& a, const Type& b)
{
	return a > b ? a : b;
}

/* C */
#else
	#define max2(a, b) ((a) > (b) ? (a) : (b))
#endif