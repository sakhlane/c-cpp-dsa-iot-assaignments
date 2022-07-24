//  1. Write a program to print unit digit of a given number
             #include<stdio.h>
              int main(){
                 int number;
                 printf("enter a number");
                 scanf("%d",&number);
                 number = number%10;
                 printf("the unit digit is = %d",number);
                 return 0;
             }

// 2. Write a program to print a given number without its last digit.
             #include<stdio.h>
             int main(){
                 int number;
                 printf("enter a number");
                 scanf("%d",&number);
                 number = number/10;
                 printf("the result is %d",number);
                 return 0;
            }

// 3. Write a program to swap values of two int variables
             #include<stdio.h>
             int main(){
                 int first , second , temp;
                 printf("enter two numbers");
                 scanf("%d%d",&first,&second);
                 printf("\n the first number is = %d and second number is = %d ",first,second);
                         temp=first;
                         first=second;
                         second=temp;
                 printf("\n after swapping first number = %d and second number = %d", first,second);
                 return 0;
             }

// 4. Write a program to swap values of two int variables without using a third variable.
                 #include<stdio.h>
                 int main(){
                     int first , second ;
                     printf("enter two numbers");
                     scanf("%d%d",&first,&second);
                     printf("\n the first number is = %d and second number is = %d ",first,second);
                          first=first+second;
                          second = first - second;
                          first = first - second;
                     printf("\n after swapping first number = %d and second number = %d ",first ,second);
                     return 0;
                 }

// 5. Write a program to input a three-digit number and display the sum of the digits.
                 #include<stdio.h>
                 int main(){
                     int number , reminder , sum = 0;
                     printf("enter a three digit number");
                     scanf("%d",&number);
                         reminder = number % 10; // to get last digit
                         number = number / 10;
                          // to remove the last digit
                          sum = sum + reminder;
                          reminder = number % 10; // to get last digit
                         number = number / 10;
                          // to remove the last digit
                          sum = sum + reminder;
                          reminder = number % 10; // to get last digit
                         number = number / 10;
                          // to remove the last digit
                          sum = sum + reminder;
                     printf("the sum of three digit is = %d",sum);

                     return 0;
                 }

// 6. Write a program which takes a character as an input and displays its ASCII code.
             #include<stdio.h>
             int main(){
                 char ch;
                 printf("enter a character");
                 scanf("%c",&ch);
                 printf("the ASCII Code of %c is %d", ch, ch);
                 return 0;
             }

// 7. Write a program to find the position of first 1 in LSB.

                #include<stdio.h>
                int main(){
                    int number , position=0;
                     printf("enter a number");
                     scanf("%d",&number);
                      number = number & 1;
                      position++;
                        if(number==1){
                            printf("the position of 1 in LSB is %d",position);
                        }

                         number = number>>1;

                         return 0;
                }

// 8. Write a program to check whether the given number is even or odd using a bitwise operator.
             #include<stdio.h>
             int main(){
                 int number;
                 printf("enter a number");
                 scanf("%d",&number);
                   number = number & 1;
                   if(number==1){
                     printf("\n odd number");
                   }
                   else
                     printf("\n even number");
                 return 0;
             }



// 9> wap to print size of an int, float, char and double

             #include<stdio.h>
             int main(){
                 int i ;
                 float f;
                 char ch;
                 double d;
                 printf("%d",sizeof(i));
                 printf("%d",sizeof(ch));
                 printf("%d",sizeof(d));
                 printf("%d",sizeof(f));
                 return 0;
             }

// 10>  Write a program to make the last digit of a number stored in a variable as   zero. (Example - if x=2345 then make it x=2340)

                 #include<stdio.h>
                 int main(){
                    int user_input , result;
                     printf("enter a number");
                   scanf("%d",&user_input);
                       user_input = user_input/10;
                       result = user_input*10;
                     printf("\n the result is %d",result);
                      return 0;
                }

// 11> Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
                     #include<stdio.h>
                     int main(){
                         int number,digit,result;
                         printf("enter a number");
                         scanf("%d",&number);

                        printf("\n enter a digit");
                         scanf("%d",&digit);
                          number=number*10;
                          result=number+digit;
                         printf("\n result is =%d",result);
                         return 0;
                     }

//  12>Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
                     #include<stdio.h>
                     int main(){
                         float usd = 76.23 , user_number , amount;
                        printf("enter the amount in INR rupees");
                         scanf("%f",&user_number);
                         amount = usd * user_number;
                        printf(" the INR rupees = %f is in usd = %f",user_number,amount);
                         return 0;
                     }

// 13> Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
                     #include<stdio.h>
                     int main(){
                         int number, l_digit;
                         printf("enter a number");
                         scanf("%d",&number);
                             l_digit=number%10;
                             number=number/10;
                            number = l_digit * 100 + number;
                            printf("%d",number);
                         return 0;
                     }



