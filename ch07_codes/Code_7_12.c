#include    <stdio.h>
#include    <math.h>

int main(void)
{
    char  oper[5]={0,}, ch;
    double num[20] = {0.0,}, dleft = 0.0, dright = 0.0;
    int dot = 0, iNum = 0, iOper = 0;

    printf("Enter an experession: ");
    while((ch = getchar()) != '\n')
    {
        switch(ch)
        {
            case ' ':
                break;
            case '+': case '-': case '*': case '/':
                oper[iOper] = ch;
                ++iOper;
                dot = 0;
                break;
            case '.':
                dot++;
                break;
            case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                {
                    if (ch >= '0' && ch <= '9')
                    {
                        if (dot > 0)
                        {
                            double power = 1.0;
                            for (int j = 0; j < dot; j ++)
                                power *= 10.0;
                            num[iNum-1] += (double)(ch - '0')/power;
                            printf("dot comput: %f:%f\n", power, num[iNum-1]);
                            dot++;

                        }
                        else
                        {
                            num[iNum] = (ch - '0');
                            ++iNum;
                        }

                    }
                }
                break;
            default:
                break;
        }
    }
    printf("compute, iNum = %d, iOper = %d\n", iNum, iOper);
    num[iNum] = 0;
    oper[iOper] = 0;
    iNum = 0;    
    iOper = 0;
    while (oper[iOper] != 0)
    {
        printf("%f ", num[iNum]);
        dleft = num[iNum];
        iNum++;
        dright = num[iNum];
        if (oper[iOper] == '+')
            num[iNum] = dleft + dright;
        else if (oper[iOper] == '-')
            num[iNum] = dleft - dright;
        else if (oper[iOper] == '*')
            num[iNum] = dleft * dright;
        else if (oper[iOper] == '/')
            num[iNum] = dleft / dright;
        
        dleft = num[iNum];
        iOper++;
    }
    printf("\n");
    iNum = 0;
    iOper = 0;

    printf("Value of expression: %f\n", dleft);

    return 0;

}
