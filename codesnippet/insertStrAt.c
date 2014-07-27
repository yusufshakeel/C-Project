#include <stdio.h>
#include <string.h>

/*
parameter:
s[]         = string to insert.
insertAt    = index where the string s will be inserted.
slen        = length of the string s.
sourceSIZE  = size of the source array.
source[]    = the source array
*/

inline insertStrAt(char s[], int insertAt, int slen, int sourceSIZE, char source[]){
    int i;
    memmove(
        source + insertAt + slen,
        source + insertAt,
        sourceSIZE - (insertAt + slen)
    );
    for(i=0;i<slen;i++){
        source[i+insertAt]=s[i];
    }
}

int main(){
    char str[15]="ab";
    insertStrAt("c",1,1,15,str);
    printf("%s",str);    //output: acb
    return 0;
}