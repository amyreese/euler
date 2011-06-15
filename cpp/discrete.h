
#define uint unsigned int
#define ulong unsigned long long

ulong factorial(ulong n)
{
    ulong result = 1;

    while (n > 1)
    {
        result *= n--;
    }

    return result;
}

ulong combinations(ulong n, ulong r)
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}
