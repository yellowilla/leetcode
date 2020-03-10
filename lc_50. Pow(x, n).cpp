 double myPow(double x, int n1) {
        long long n = n1;//针对出现n1是最小负值时的情况
        double res = 1;
        
        if (n < 0)
        {
            n = -n;                                                                                            
            x = 1 / x;
        }

         while (n > 0)
         {
             if (n % 2 == 1)
             {
                 res *= x;
             }
             
             x = x * x;
             n = n / 2;
         }

        return res;
    }
