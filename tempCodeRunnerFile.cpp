 for (int d1 = firstDigit; d1 <= 9; firstDigit++)
        for (int d2 = 0; d2 <= 9; d2++)     
            for (int d3 = 0; d3 <= 9; d3++)
                for (int d4 = 0; d4 <= 9; d4++) {
                    temp = num (firstDigit, d2, d3, d4);
                    if (
                        (firstDigit != d2)
                        && (firstDigit != d3)
                        && (firstDigit != d4)
                        && (d2 != d3)
                        && (d2 != d4)
                        && (d3 != d4)
                        && (temp > n)
                    ) 
                    {
                        cout << temp;
                        break;
                    }
                } 