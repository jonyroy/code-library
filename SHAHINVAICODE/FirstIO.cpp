#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;

/****************** FAST IO *************************/
char *ipos, *opos, InFile[50000000], OutFile[50000000], DIG[20];
inline int input(int flag=0){
	while(*ipos<=32) ++ipos;
	if(flag) return (*ipos++ -'0');
	int x=0,neg=0; char c;
	while(1){
		c=*ipos++; if(c=='-') neg=1;
		else{
			if(c<=32) return neg?-x:x;
			x=(x<<1)+(x<<3)+c-'0';
		}
	}
}
inline void output(LL x, int flag=1){
    if(x<0){
        *opos++ = '-'; x *= -1;
    }
	int dig=0; LL y;
	while(x || !dig){
        y=x/10; DIG[dig++] = x-((y<<3)+(y<<1))+'0'; x=y;
    }
	while(dig--) *opos++=DIG[dig];
	*opos++ = flag?'\n':' ';
}
inline void InitFastIO(){
	ipos=InFile; opos=OutFile;
	fread(InFile,90000000,1,stdin);
}
inline void FlushFastIO() {
	fwrite(OutFile,opos-OutFile,1,stdout);
}
/****************************************************/


int N;
int main(){
    int a,b,c,ch;
   //InitFastIO();
    N=input();

    output(N,1);
   // FlushFastIO();
    return 0;
}
