// 1. Write a program to check whether a given number is positive or non-positive.
     #include<stdio.h>
     int main(){
         int number;
         printf("enter a number");
         scanf("%d",&number);
         if(number>=0){
             printf("\n positive number ");
         }
         else{
             printf("\n non positve number");
         }
         return 0;
     }

// 2. Write a program to check whether a given number is divisible by 5 or not
             #include<stdio.h>
             int main(){
                     int number;
                     printf("enter a number");
                     scanf("%d",&number);
                         if( number % 5 == 0){
                            printf("the number is divisible by 5");
                         }
                         else{
                             printf("not divisible by 5");
                         }
                 return 0;
             }

// 3. Write a program to check whether a given number is an even number or an odd number.
             #include<stdio.h>
             int main(){
                 int number;
                 printf("Enter a number");
                 scanf("%d",&number);
                     if(number % 2 == 0){
                         printf("\n even number");
                     }
                     else{
                         printf("\n odd number");
                     }
              return 0;
             }

// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
                 #include<stdio.h>
                 int main(){
                     int number;
                     printf("enter a number");
                     scanf("%d",&number);
                       number = number & 1;
                       if(number==1){
                         printf("\n odd number");
                       }
                       else{
                         printf("\n even number");
                       }
                     return 0;
                 }

// 5. Write a program to check whether a given number is a three-digit number or not.
             #include<stdio.h>
             int main(){
                 int number;
                 printf("enter a number");
                 scanf("%d",&number);
                 if( (number>=100) && (number <=999)){
                     printf("three digit number");
                 }
                 else{
                     printf("not a three digit number");
                }
                 return 0;
             }

// 6. Write a program to print greater between two numbers. Print one number of both are the same.
                    #include<stdio.h>
                    int main(){
                        int first , second ;
                        printf("enter two numbers");
                        scanf("%d%d",&first,&second);
                        if(first>second){
                            printf("\n first number is grater =%d",first);
                        }
                        if(second>first){
                            printf("\nsecond number is greater =%d",second);
                        }
                        if(first==second){
                            printf("\nthe first and second number both are same number = %d",first);
                        }
                        return 0;
                    } 

// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
   #include<stdio.h>
   #include<math.h>
   int main(){
    int a,b,c , dis;
    float root_1 , root_2;
    printf("enter the value of x^2 x and constant");
    scanf("%d %d %d",&a,&b,&c);
    dis= b*b*-4*a*c;  // to calculate discriminent

    if(dis>0){
        printf("the roots are real or distinct");
        root_1 = (-b + sqrt(dis))/(2*a);
        root_2 = (-b - sqrt(dis))/(2*a);
        printf("\n the roots are : %f %f", root_1 ,root_2);
    }
    if(dis==0){
        printf("the roots are equal or real");
        root_1 = -b/2.0*a;
        printf("the equal root is %f",root_1);
    }
    if(dis<0){
        printf("the roots are imaginary ");
    }

    return 0;
   } 

   //8. Write a program to check whether a given year is a leap year or not.
            #include<stdio.h>
            int main(){
                int year;
                printf("Enter a year");
                scanf("%d",&year);
                if(( year % 4 == 0) || ( year % 400 == 0) ){
                    printf("leap year");
                }
                else {
                    printf(" not a leap year");
                }
                 return 0;
            } 

//  9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
                #include<stdio.h>
                int main(){
                    int first, second, third;
                    printf("enter three numbers");
                    scanf("%d %d %d",&first,&second,&third);
                    printf("\n first number is =%d \n second number is = %d \n third number is = %d",first,second,third);
                    if((first>second) && (first>third)){
                        printf("\n first number is grater %d ",first);
                    }
                    else if((second>first) && (second>third)){
                        printf(" \n second number is grater %d ",second);
                    }
                    else if( (third > first) && (third>second)){
                        printf("\n third number is greater %d",third);
                    }

                    else if((first == second)|| (first==second)){
                        printf("\n the greater number is %d",first);
                    }
                    else if( (second == first) || (second == third)){
                        printf("\n the greater number is %d",second);
                    }
                    else if( (third == first) || (third== second)){
                        printf(" \n the greater number is %d",third);
                    }
                    return 0;
                }  

// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
                    #include<stdio.h>
                    int main(){
                        float cost_price, selling_price, Loss, Profit;
                        float presentage;
                        printf("Enter the cost price of a product");
                        scanf("%f",&cost_price);
                        printf("\n Enter the selling price of a product");
                        scanf("%f",&selling_price);

                        if(cost_price > selling_price){
                            Loss = cost_price - selling_price;
                            presentage = (Loss/cost_price) * 100;
                            printf("\n loss presentage is %f",presentage);
                        }

                        else  if(cost_price < selling_price){
                            Profit = selling_price - cost_price;
                            presentage = (Profit/cost_price) * 100;
                            printf("\n profit presentage is %f",presentage);
                        }

                    return 0;
                    } 

// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
                    #include<stdio.h>
                    int main(){
                        int sub1, sub2, sub3, sub4, sub5;
                        printf("enter marks of 5 subjects");
                        scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
                        if((sub1>=33 && sub1<=100) && (sub2>=33 && sub2<=100) && (sub3>=33 && sub3<=100) && (sub4>=33 && sub4<=100) && (sub5>=33 && sub5<=100) ){
                            printf("you are pass");
                        }
                        else 
                        printf("you are fail");
                        return 0;
                    } 

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
            #include<stdio.h>
            int main(){
                char alphabet;
                printf("Enter an anphabet");
                scanf("%c",&alphabet);
                if((alphabet >= 'A') && (alphabet <= 'Z')){
                    printf("upper case");
                }
                else if((alphabet >= 'a') && (alphabet < 'z')){
                    printf("lower case ");
                }
                return 0;
            } 

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
               #include<stdio.h>
                int main(){
                    int number;
                    printf("enter a number");
                    scanf("%d",&number);
                     if((number % 3 ==0) && (number % 2== 0)){
                        printf("the number is divisible by 3 and 2 ");
                     }
                    return 0;
                } 

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
                #include<stdio.h>
                int main(){
                    int number;
                    printf("enter a number");
                    scanf("%d",&number);
                      if((number %7 == 0) || (number % 3 == 0)){
                        printf("the number is divisible by 3 or 7");
                      }
                      return 0;
                } 

// 15. Write a program to check whether a given number is positive, negative or zero.
                    #include<stdio.h>
                    int main(){
                        int number;
                        printf("enter a number");
                        scanf("%d",&number);
                        if(number>0)
                        printf("positve number");
                        else if(number < 0)
                        printf("negative number");
                        else if(number == 0)
                        printf("the number is Zero");
                        return 0;
                    } 

// 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
               #include<stdio.h>
               int main(){
                char character;
                printf("enter a character");
                scanf("%c",&character);
                 if((character >= 'A') && (character <= 'Z')){
                    printf("upper case letter");
                 }
                 else  if((character >= 'a') && (character <= 'z'))
                   printf("lower case letter");
                else if((character >= '0') && (character <= '9'))
                   printf("entered character is a digit");
                else {
                    printf(" entered character is a special character");
                }
                return 0;
               }  

// 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
                #include<stdio.h>
                int main(){
                    int first, second, third , angle;
                    printf("Enter three sides of an angles");
                    scanf("%d%d%d",&first,&second,&third);
                        if(first > (second + third)){
                            printf(" valid triangle");
                        }
                        else if( second > (first + third))
                          printf(" valid triangle");
                        else if( third > (first + second))
                        printf("valid triangle");
                        else 
                        { 
                            printf(" invalid triangle ");
                        }
                    return 0;
                } 

// 18. Write a program which takes the month number as an input and display number of days in that month
                    #include<stdio.h>
                    int main(){
                        int number;
                        printf("enter a month number");
                        scanf("%d",&number);
                        if(number == 1){
                            printf("in the 1 month total number of days are 31");
                        }
                            else if(number == 2)
                            printf("in the 2 month total number of days are 28");
                            else if(number == 3)
                            printf("in the 3 month total number of days are 31");
                            else if(number == 4)
                            printf("in the 4 month total number of days are 30");
                            else if(number == 5)
                            printf("in the 5 month total number of days are 31");
                            else if(number == 6)
                            printf("in the 6 month total number of days are 30");
                            else if(number == 7)
                            printf("in the 7 month total number of days are 31");
                            else if(number == 8)
                            printf("in the 8 month total number of days are 31");
                            else if(number == 9)
                            printf("in the 9 month total number of days are 30");
                            else if(number == 10)
                            printf("in the 10 month total number of days are 31");
                            else if(number == 11)
                            printf("in the 11 month total number of days are 30");
                            else if(number == 12)
                            printf("in the 12 month total number of days are 31");
                            else{ 
                                printf("invalid number");
                            }
                        
                        return 0;
                    }

