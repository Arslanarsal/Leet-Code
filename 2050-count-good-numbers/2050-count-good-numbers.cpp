class Solution {
public:
long long mod = 1e9 + 7;
    long long powe(long long x, long long n)
{
    if (!n)
    {
        return 1;
    }
    long long temp = powe(x, n / 2);
    if (n % 2 != 0)
    {
        return (x * temp * temp) % mod;
    }
    return (temp * temp) % mod;
}

int countGoodNumbers(long long n)
{

   long  even = (n + 1) / 2;
   long  odd = n / 2;

    long long first = (powe(5, even));
    long long second = (powe(4, odd));

    return (int)((first * second) % mod);
}
};