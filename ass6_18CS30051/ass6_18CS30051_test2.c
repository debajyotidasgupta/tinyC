//This testfile checks the functioning of the library functions printInt, readInt and printStr

int printInt(int num);
int printStr(char * c);
int readInt(int *eP);

int f(int *a)
{
    int b;
    b = *a;
    b = b + 2;
    return b;
}
int main()
{
    int a,b;
    int *e;
    
    printStr("***********************Some random outputs!!*************************\n");
    
    b = 3;
    e = &b;

    {
        int a = 1;
    }

    printStr("Passing pointers to function f!\n");
    printStr("Value passed to function: ");
    printInt(b);
    printStr("\n");
    
    printStr("Value returned from function s is: ");
    printInt(a);
    printStr("\n");
    
    printStr("Read an integer!!");
    printStr("\n");
    b = readInt(e);
    printStr("The integer that was read is:");
    printInt(b);
    printStr("\n");
    

    return 0;
}