// 1. Write a program to find the Nth term of the Fibonnaci series.
/*
  #include <stdio.h>
int main()
{
    int ft = 0, st = 1, nt = ft + st;
    int pos, term;
    printf("enter the position no in fibonnaci series");
    scanf("%d", &pos);
    if (pos == 1)
    {
        printf("%d", ft);
    }
    if (pos == 2)
    {
        printf("%d", st);
    }

    for (term = 3; term <= pos; term++)
    {
        if (pos != term)
        {
            ft = st;
            st = nt;
            nt = ft + st;
        }
    }
    printf("%d", nt);
    return 0;
}
 */

// 2. Write a program to print first N terms of Fibonacci series
 /* #include<stdio.h>
   int main(){
       int ft=0, st=1, nt=ft+st;
       int number, term;
       printf("how many number of fibonnaci series you want");
       scanf("%d",&number);
       printf("%d %d",ft,st);
       for(term=3; term<=number; term++)
       {
           ft=st;
           st=nt;
           nt=ft+st;

           printf(" %d",nt);
       }

       return 0;
   } */

// 3. Write a program to check whether a given number is there in the Fibonacc series or not.
          /*  #include<stdio.h>
            int main()
            {
                int number;
                int fn=0 , sn=1, nt = fn+sn ,term ;
                printf("Enter a number");
                scanf("%d",&number);

                if(number == fn || number == sn)
                  printf("%d is there in fibonacci series",number);

                  for(term = 3 ; term <= number + 1 ; term++ )
                  {
                       fn = sn;
                       sn = nt;
                       nt = fn + sn;

                if(number == nt)
                 {
                  printf("%d is there in fibonacciseries",nt);
                   break;
                 }
                  }
                printf("%d is not in fibonacci series", number);
            return 0;
            } */

// 4. Write a program to calculate HCF of two numbers
   /*
        #include<stdio.h>
        int main()
        {
            int f1, f2, hcf;
            printf("enter two numbers");
            scanf("%d %d",&f1,&f2);
            for(hcf = f1 > f2 ? f1 : f2; hcf != 0; hcf--)
            {
                if(f1 % hcf ==0 && f2 % hcf == 0)
                 break;
            }
            printf("the H.C.F of %d and %d is %d",f1,f2,hcf);
            return 0;
        }
    */

//    5. Write a program to check whether two given numbers are co-prime
// numbers or not

         /*   #include<stdio.h>
            int main()
            {
                int fn,sn,max , loop;
                printf("enter two numbers");
                scanf("%d%d",&fn,&sn);

                max = fn > sn ? fn : sn;
                 // for checking divisible or not
                 for(loop = 2 ; loop <= max ; loop ++)
                 {
                    if(fn % loop == 0 && sn % loop == 0 )
                        break;
                 }
                if(loop == max + 1)
                  printf("%d and %d are co prime no", fn,sn);
                else
                  printf("%d and %d are not co prime no", fn, sn);
            return 0;
            } */

// 6. Write a program to print all Prime numbers under 100
          /*  #include<stdio.h>
            int main()
            {
                int num,loop;
                printf("the prime numbers are\n");
                for(num=2; num<=100; num++)
                {
                    for (loop = 2; loop <= num ; loop++)
                    {
                        if (num%loop==0)
                        {
                            break;
                        }

                    }
                  if(num==loop)
                  printf(" %d\t", num);
                }
                return 0;
            } */

// 7. Write a program to print all Prime numbers between two given numbers
      /*  #include<stdio.h>
        int main()
        {
            int n1,n2,number, loop;
            printf("enter two numbers");
            scanf("%d%d",&n1,&n2);
            for(loop=n1+1; loop<=n2; loop++)
            {
                for(number=2; number<=n2 ; number++)
                {
                    if(loop % number  == 0)
                    {
                        break;
                    }
                }
                if(number == loop)
                printf("%d ",loop);
            }
            return 0;
        } */

// 8. Write a program to find next Prime number of a given number
      /*  #include<stdio.h>
         int main()
        {
            int first_number , next_number;
            printf("enter number");
            scanf("%d",&first_number);

            for(next_number= first_number+1;  ; next_number++)
            {
                for(first_number=2; first_number<=next_number; first_number++)
                {
                    if(next_number % first_number == 0)
                    break;
                }
                if(first_number==next_number)
                {
                printf("next prime number is %d",next_number);
                break;
                }
            }
             return 0;
        } */ 

// 9. Write a program to check whether a given number is an Armstrong number
// or not
     /*   #include<stdio.h>
        int main()
        {
            int number , count =0 , temp,pow, reminder, mul=1, result=0, input;
            printf("enter a number");
            scanf("%d",&number);
            temp = number;
            input = number;
            // to find total number of digit
              while(number != 0)
              {
                number = number/ 10;
                count ++;
              }
                // to separate the digit
                 while(temp != 0)
                 {
                    reminder = temp % 10;
                     
                     // to the power of digit
                     pow = count;
                      while (pow != 0)
                      {
                        mul = mul*reminder;
                        pow--;
                      }
                      result= result + mul;
                      temp = temp/10;
                      mul =1;
                 }
            if(input==result)
            printf("armstrong number");
            else
             printf("not an armstrong number");
             
            return 0;
        } */

// 10. Write a program to print all Armstrong numbers under 1000
            #include<stdio.h>
            int main()
            {
                int number,temp, reminder, sum;
                temp=number;
                printf("armstrong numbers are \n");
                for(number=1; number<=1000; number++)
                {         temp=number;
                          sum =0;
                        while(temp != 0)
                        {
                            reminder = temp % 10;
                            sum = sum + reminder * reminder * reminder;
                            temp = temp /10;
                        }
                    if(number==sum)
                    printf("%d \n",number);
                }
                return 0;
            }
