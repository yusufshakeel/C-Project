#include <stdio.h>
#include <limits.h>
#define pint(x,y,z) printf("%-20s = %d %s\n",x,y,z)
#define puint(x,y,z) printf("%-20s = %u %s\n",x,y,z)
#define plint(x,y,z) printf("%-20s = %ld %s\n",x,y,z)
#define pllint(x,y,z) printf("%-20s = %lld %s\n",x,y,z)
#define pullint(x,y,z) printf("%-20s = %llu %s\n",x,y,z)

//for windows
//using %l64u for unsigned long long int
//and using %l64d for long long int

//for other platform use %lld and %llu for signed and unsigned

int main(){
	pint("CHAR_BIT",CHAR_BIT,"bits");	//Number of bits in a char object (byte)
	pint("SCHAR_MIN",SCHAR_MIN,"val");	//Minimum value for an object of type signed char
	pint("SCHAR_MAX",SCHAR_MAX,"val");	//Maximum value for an object of type signed char
	pint("UCHAR_MAX",UCHAR_MAX,"val");	//Maximum value for an object of type unsigned char
	pint("CHAR_MIN",CHAR_MIN,"val");	//Minimum value for an object of type char
	pint("CHAR_MAX",CHAR_MAX,"val");	//Maximum value for an object of type char
	pint("MB_LEN_MAX",MB_LEN_MAX,"bytes");	//Maximum number of bytes in a multibyte character, for any locale
	pint("SHRT_MIN",SHRT_MIN,"val");	//Minimum value for an object of type short int
	pint("SHRT_MAX",SHRT_MAX,"val");	//Maximum value for an object of type short int
	pint("USHRT_MAX",USHRT_MAX,"val");	//Maximum value for an object of type unsigned short int
	pint("INT_MIN",INT_MIN,"val");		//Minimum value for an object of type int
	pint("INT_MAX",INT_MAX,"val");		//Maximum value for an object of type int
	puint("UINT_MAX",UINT_MAX,"val");	//Maximum value for an object of type unsigned int
	plint("LONG_MIN",LONG_MIN,"val");	//Minimum value for an object of type long int
	plint("LONG_MAX",LONG_MAX,"val");	//Maximum value for an object of type long int
	puint("ULONG_MAX",ULONG_MAX,"val");	//Maximum value for an object of type unsigned long int
	pllint("LLONG_MIN",LLONG_MIN,"val");	//Minimum value for an object of type long long int
	pllint("LLONG_MAX",LLONG_MAX,"val");	//Maximum value for an object of type long long int
	pullint("ULLONG_MAX",ULLONG_MAX,"val");	//Maximum value for an object of type unsigned long long int

	return 0;
}