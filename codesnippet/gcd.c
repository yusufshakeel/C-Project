/* GCD = Greatest Common Divisor */
inline int gcdint(int x,int y){if(y==0)return x;else gcdint(y,x%y);}
inline long int gcdlint(long int x,long int y){if(y==0)return x;else gcdlint(y,x%y);}
inline long long int gcdllint(long long int x,long long int y){if(y==0)return x;else gcdllint(y,x%y);}
