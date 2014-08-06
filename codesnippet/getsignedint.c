//fast read and write using pointer
//both positive and negative integer
//ASCII 45 is '-'
//ASCII >33 means digits
typedef long long int L;
inline void getint(L *x){
	register char c;
	int f = 0;
	*x = 0;
	c = _gc();
	while(c<33){
		c = _gc();
	}
	if(c==45){
		f++;
		c = _gc();
	}
	while(c>33){
		*x = (*x << 3) + (*x << 1) + (c - 48);
		c = _gc();
	}
	if(f){
		*x*=-1;
	}
}