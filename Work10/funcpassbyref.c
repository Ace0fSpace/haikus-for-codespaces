void passbyVal(int a)
{
    a=6;
}
void passbyref(int*a)
{
    *a=7;
}

void main()
{
    int a=5, b=6,*c;

    passbyVal(a);
    printf("The size of a = %d\n",sizeof(a));
    printf("a = %d\n",a);
    passbyref(&b);
    printf("b = %d\n",b);
    printf("The size of c = %d\n",sizeof(*c));
}