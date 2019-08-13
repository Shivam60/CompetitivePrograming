using System;
using System.Numerics;

namespace SmallFactorial
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            var[] dp = new System.Numerics.BigInteger[1001];
            dp[1] = 1;
            for (int i = 2; i <= 1000; ++i)
            {
                dp[i] = dp[i - 1] * i;
            }
            while (n != 0)
            {
                var t = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine(dp[t]);
                n--;
            }
        }
    }
}
