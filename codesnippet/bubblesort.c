//int
inline void bsortint(int *a,int n){int k,j;for(k=1;k<=n-1;k++){for(j=0;j<=n-k-1;j++){if(*(a+j)>*(a+j+1)){*(a+j)=*(a+j)+*(a+j+1);*(a+j+1)=*(a+j)-*(a+j+1);*(a+j)=*(a+j)-*(a+j+1);}}}}

//long int
inline void bsortlint(long int *a,long int n){long int k,j;for(k=1;k<=n-1;k++){for(j=0;j<=n-k-1;j++){if(*(a+j)>*(a+j+1)){*(a+j)=*(a+j)+*(a+j+1);*(a+j+1)=*(a+j)-*(a+j+1);*(a+j)=*(a+j)-*(a+j+1);}}}}

//long long int
inline void bsortllint(long long int *a,long long int n){int k,j;for(k=1;k<=n-1;k++){for(j=0;j<=n-k-1;j++){if(*(a+j)>*(a+j+1)){*(a+j)=*(a+j)+*(a+j+1);*(a+j+1)=*(a+j)-*(a+j+1);*(a+j)=*(a+j)-*(a+j+1);}}}}
