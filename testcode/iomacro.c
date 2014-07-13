/* characters and strings */
#define sfchar(x)	scanf("%c",&x)		//char
#define sfword(x)	scanf("%s",&x)		//word like "yusuf"
#define sfstring(x)	scanf("%[^\n]",&x)	//string like "yusuf shakeel"
#define sfwordlc(x)	scanf("%[a-z]",&x)	//lower case word like "yusuf"
#define sfworduc(x)	scanf("%[A-Z]",&x)	//upper case word like "YUSUF"
#define sfwordd(x)	scanf("%[0-9]",&x)	//word consisting of digits like "0123456789"

#define pfchar(x)	printf("%c",x)		//print char
#define pfstring(x)	printf("%s",x)		//print string of characters including word, string, num string etc.

/* integer */
#define sfint(x)	scanf("%d",&x)		//int
#define sfshort(x)	scanf("%hd",&x)		//short int
#define sflint(x)	scanf("%ld",&x)		//lont int
#define sfllint(x)	scanf("%lld",&x)	//long long int
#define sfoct(x)	scanf("%o",&x)		//ocatal like 001, 0751 etc
#define sfhex(x)	scanf("%x",&x)		//hexadecimal like 0x00 0x0A etc
#define sfuint(x)	scanf("%u",&x)		//unsigned int

#define pfint(x)	printf("%d",x)		//int
#define pfshort(x)	printf("%hd",x)		//short int
#define pflint(x)	printf("%ld",x)		//lont int
#define pfllint(x)	printf("%lld",x)	//long long int
#define pfoct(x)	printf("%o",x)		//ocatal without leading zeros like 1, 751 etc
#define pfhex(x)	printf("%x",x)		//hexadecimal like 0x00 0x0A etc
#define pfuint(x)	printf("%u",x)		//unsigned int

/* floating point number */
#define sffloat(x)	 scanf("%f",&x)		//float
#define sfdouble(x)	 scanf("%lf",&x)	//double
#define sfldouble(x) scanf("%Lf",&x)	//long double
#define sffloatE(x)  scanf("%e",&x)		//floating point in exponential form like 1e3, 1e9 etc

#define pffloat(x)	 printf("%f",x)		//float
#define pfdouble(x)	 printf("%lf",x)	//double
#define pfldouble(x) printf("%Lf",x)	//long double
#define pffloatE(x)  printf("%e",x)		//floating point in exponential form like 1e3, 1e9 etc
