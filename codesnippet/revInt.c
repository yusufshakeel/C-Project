//int
int revInt(int x){int i,r=0;while(x){i=x%10;r=(r<<3)+(r<<1)+i;x/=10;}return r;}


//long int
typedef long int L
L revInt(L x){L i,r=0;while(x){i=x%10;r=(r<<3)+(r<<1)+i;x/=10;}return r;}


//long long int
typedef long long int LL
LL revInt(LL x){LL i,r=0;while(x){i=x%10;r=(r<<3)+(r<<1)+i;x/=10;}return r;}
