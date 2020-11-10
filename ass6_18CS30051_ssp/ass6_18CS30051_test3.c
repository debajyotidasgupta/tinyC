//This test file extensively checks the expressions both boolean and algebraic
//and also the funciton calling and returning process in detail

int printStr(char *c);
int printInt(int i);
int readInt(int *eP);

// golbal variables
int a;
int b = 1;
char c;
char d = 'a';

// add function
int add (int a, int b) {
  // local 
  int ans;
  int c = 2, d, arr[10];
  int*p;

  // invoking the defined printStr()
  printStr("got into function\n");
  ans = a+b;
  d = 2;
  if (a>=d) {
    a++;
  }
  else {
    c = a+b;
  }
  printStr("returning from function\n");
  return ans;
}

// main function
int main () {
  int c = 2, d, arr[10];
  int*p;
  int x, y, z;
  int eP;
  printStr("Enter two numbers :\n");
  x = readInt(&eP);
  y = readInt(&eP);

  // call the user-defined function
  z = add(x,y);
  printStr("Sum is equal to ");
  // call pre-defined printInt()
  printInt(z);
  printStr("\n");
  return c;
}
