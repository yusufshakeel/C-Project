/*
quick sort
Parameter
	*a 	1D array to sort
	b 	start index
	e 	end index
*/

//integer
inline void qsortint(int *a,int b,int e){int p;if(b<e){_qspaint(a,b,e,&p);qsortint(a,b,p-1);qsortint(a,p+1,e);}}
void _qspaint(int *a,int b,int e,int *p);
void _qspaint(int *a,int b,int e,int *p){int L=b,R=e;*p=L;while(1){while(*(a+*p)<=*(a+R)&&*p!=R){R--;}if(*p==R){break;}else if(*(a+*p)>*(a+R)){*(a+R)=*(a+R)+*(a+*p);*(a+*p)=*(a+R)-*(a+*p);*(a+R)=*(a+R)-*(a+*p);*p=R;}while(*(a+*p)>=*(a+L)&&*p!=L){L++;}if(*p==L){break;}else if(*(a+*p)<*(a+L)){*(a+L)=*(a+L)+*(a+*p);*(a+*p)=*(a+L)-*(a+*p);*(a+L)=*(a+L)-*(a+*p);*p=L;}}}

//long int
inline void qsortlint(long int *a,long int b,long int e){long int p;if(b<e){_qspalint(a,b,e,&p);qsortlint(a,b,p-1);qsortlint(a,p+1,e);}}
void _qspalint(long int *a,long int b,long int e,long int *p);
void _qspalint(long int *a,long int b,long int e,long int *p){long int L=b,R=e;*p=L;while(1){while(*(a+*p)<=*(a+R)&&*p!=R){R--;}if(*p==R){break;}else if(*(a+*p)>*(a+R)){*(a+R)=*(a+R)+*(a+*p);*(a+*p)=*(a+R)-*(a+*p);*(a+R)=*(a+R)-*(a+*p);*p=R;}while(*(a+*p)>=*(a+L)&&*p!=L){L++;}if(*p==L){break;}else if(*(a+*p)<*(a+L)){*(a+L)=*(a+L)+*(a+*p);*(a+*p)=*(a+L)-*(a+*p);*(a+L)=*(a+L)-*(a+*p);*p=L;}}}

//long long int
inline void qsortllint(long long int *a,long long int b,long long int e){long long int p;if(b<e){_qspallint(a,b,e,&p);qsortllint(a,b,p-1);qsortllint(a,p+1,e);}}
void _qspallint(long long int *a,long long int b,long long int e,long long int *p);
void _qspallint(long long int *a,long long int b,long long int e,long long int *p){long long int L=b,R=e;*p=L;while(1){while(*(a+*p)<=*(a+R)&&*p!=R){R--;}if(*p==R){break;}else if(*(a+*p)>*(a+R)){*(a+R)=*(a+R)+*(a+*p);*(a+*p)=*(a+R)-*(a+*p);*(a+R)=*(a+R)-*(a+*p);*p=R;}while(*(a+*p)>=*(a+L)&&*p!=L){L++;}if(*p==L){break;}else if(*(a+*p)<*(a+L)){*(a+L)=*(a+L)+*(a+*p);*(a+*p)=*(a+L)-*(a+*p);*(a+L)=*(a+L)-*(a+*p);*p=L;}}}