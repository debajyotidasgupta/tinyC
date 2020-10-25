int a = (1+2)*3;
inline int func(char* c){
	double fl = 4.555;
	return 'bar';
}
static int stat;
extern float flty;
int main () {
	int x, i=1;
	long *longptr;
	float flt = 1e+5;
	char string[5] = "Hello";
	for ( i = 1 ; i <= 10; ++i ) {
		if(flt<=20.48e-13) {
			printf ("%s", string);
		}
		switch(a){
			case 1: a = 1? x:i;
			default: break;
		}
	}
	int i=0;
	while(i<50) i++;
	goto label;
	int a = 100, b = 500;
	{   if(a==1)a++;
		else b--;
	}
	b=++a;
	do{ a++; }while(a>1);
    label: a=!a;
}
// single line comment
/**
 * This comment will be ignored
 */
"this is a error string for testing"