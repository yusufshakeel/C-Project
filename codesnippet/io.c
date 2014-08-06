/**
File: io.c
Description: This file contains i/o functions to read and write integers
Author: Yusuf Shakeel

Links
https://www.facebook.com/yusufshakeel
https://www.youtube.com/yusufshakeel
https://plus.google.com/+YusufShakeel
https://www.twitter.com/yusufshakeel
https://www.github.com/yusufshakeel

The MIT License (MIT)
Copyright (c) 2014 Yusuf Shakeel
*/


#define _gc() getchar_unlocked()
#define _pc(x) putchar_unlocked(x)

//for positive integers only

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

typedef long long int L;
inline L getint(){L x=0,c=_gc();while(!(c>='0'&&c<='9')){c=_gc();}while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}return x;}
inline void putint(L n){L N=n,r=n,c=0;if(N==0){_pc('0');_pc('\n');return;}while(r%10==0){c++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){_pc(r%10+'0');r/=10;}while(c--){_pc('0');}_pc('\n');}


//fast read and write using pointer
//both positive and negative integer
//ASCII 45 is '-'
//ASCII >33 means digits
typedef long long int L;
inline void getint(L *x){register char c;int f=0;*x=0;c=_gc();while(c<33){c=_gc();}if(c==45){f++;c=_gc();}while(c>33){*x=(*x<<3)+(*x<<1)+(c-48);c=_gc();}if(f){*x*=-1;}}

