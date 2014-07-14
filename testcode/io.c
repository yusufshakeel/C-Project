#define _gc() getchar_unlocked()
#define _pc(x) putchar_unlocked(x)

/* integer */
inline int getint(){register int x=0,c=_gc();while(!(c>='0'&&c<='9')){c=_gc();}while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}return x;}
inline void putint(int n){int N=n,r=n,c=0;if(N==0){_pc('0');_pc('\n');return;}while(r%10==0){c++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){_pc(r%10+'0');r/=10;}while(c--){_pc('0');}_pc('\n');}

/* long int */
inline long int getlint(){long int x=0,c=_gc();while(!(c>='0'&&c<='9')){c=_gc();}while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}return x;}
inline void putlint(long int n){long int N=n,r=n,c=0;if(N==0){_pc('0');_pc('\n');return;}while(r%10==0){c++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){_pc(r%10+'0');r/=10;}while(c--){_pc('0');}_pc('\n');}

/* long long int */
inline long long int getllint(){long long int x=0,c=_gc();while(!(c>='0'&&c<='9')){c=_gc();}while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}return x;}
inline void putllint(long long int n){long long int N=n,r=n,c=0;if(N==0){_pc('0');_pc('\n');return;}while(r%10==0){c++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){_pc(r%10+'0');r/=10;}while(c--){_pc('0');}_pc('\n');}

/* template */
typedef long long int iTYPE;
inline iTYPE getint(){iTYPE x=0,c=_gc();while(!(c>='0'&&c<='9')){c=_gc();}while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}return x;}
inline void putint(iTYPE n){iTYPE N=n,r=n,c=0;if(N==0){_pc('0');_pc('\n');return;}while(r%10==0){c++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){_pc(r%10+'0');r/=10;}while(c--){_pc('0');}_pc('\n');}
