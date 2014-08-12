
typedef unsigned long long int UL;
inline UL nCr(UL n,UL k){if(k>n){return 0;}UL r=1;for(UL d=1;d<=k;++d){r*=n--;r/=d;}return r;}

