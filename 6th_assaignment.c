// 1. Write a program to calculate sum of first N natural numbers
 #include<stdio.h>
int main(){
   int number,loop=1, sum=0;
   printf("Enter a number");
   scanf("%d",&number);
    while (loop<=number)
    {
       sum=sum+loop;
       loop ++;
    }
    printf("\n %d",sum);
} 

//  Write a program to calculate sum of first N even natural numbers
  #include<stdio.h>
  int main(){
      int number, sum=0, loop=1, even=0;
      printf("enter a number");
      scanf("%d",&number);
          while (loop<=number)
          {
              if(loop%2==0){
                  even = loop;
                  sum=sum+even;
              }
              loop++;
          }
      printf("the sum of all even numbers is %d",sum);

      return 0;
  } 

// 3. Write a program to calculate sum of first N odd natural numbers
   #include<stdio.h>
   int main(){
       int input, loop, sum=0, odd=0;
       printf("enter a number");
       scanf("%d",&input);
       for(loop=1; loop<=input; loop++)
       {
           if(loop%2 !=0 ){
               odd = loop;
               sum = sum + odd;
           }
       }
       printf("the sum of odd number is %d",sum);
       return 0;
   } 

// 4. Write a program to calculate sum of squares of first N natural numbers
 #include<stdio.h>
 int main(){
     int sum =0, square =0, loop, input;
     printf("enter a number");
     scanf("%d",&input);
         for (loop =1 ; loop<=input; loop++)
         {
             square = loop*loop;
             sum = sum + square;
         }
     printf("the sum of square number is %d",sum);
     return 0;
 } 

// 5. Write a program to calculate sum of cubes of first N natural numbers
   #include<stdio.h>
   int main(){
       int cube=0, sum=0, input, loop;
       printf("enter a number");
       scanf("%d",&input);
       for(loop=1; loop<=input; loop++){
            cube = loop*loop*loop;
            sum= sum+cube;
       }
       printf("cube of number is %d",sum);
       return 0;
   } 

// 6. Write a program to calculate factorial of a number
  #include<stdio.h>
  int main(){
      int input, fact=1, loop;
      printf("enter a number");
      scanf("%d",&input);
      for(loop=1; loop<=input; loop++){

            fact=fact*loop;
      }
      printf("factorial of number is %d",fact);
      return 0;
  } 

// 7. Write a program to count digits in a given number
  #include<stdio.h>
  int main(){
      int  count=0, l_digit, number;
      printf("enter a number");
      scanf("%d",&number);
      while(number>=1){
              count ++;
          l_digit = number%10;
          number =  number/10;

      }
      printf("the given number is %d digit number",count);
      return 0;
  } 

// 8. Write a program to check whether a given number is a Prime number or not
  #include<stdio.h>
  int main(){
      int number,loop=2;
      printf("enter a number");
      scanf("%d",&number);
          for(loop=2; loop<=number-1; loop++){
              if(number%loop == 0){
                  break;
              }
          }
              if(number==loop){
                  printf("%d is prime number",number);
              }
              else
                  printf("%d is not a prime number",number);
      return 0;
  } 

// 9. Write a program to calculate LCM of two numbers
            #include<stdio.h>
            int main()
            {
                int first_no, second_no, lcm;
                printf("Enter two numbers\n");
                scanf("%d%d",&first_no,&second_no);
                lcm = first_no < second_no ? first_no : second_no;
                    for(lcm=2; lcm <= first_no * second_no; lcm++)
                    {
                        if(lcm % first_no == 0 && lcm % second_no == 0 )
                            break;
                    }
                printf("the lcm of %d and %d is %d ",first_no,second_no,lcm);
            }



// 10. Write a program to reverse a given number
  #include<stdio.h>
  int main(){
      int number ,rem=0, rev=0;
      printf("enter a number");
      scanf("%d",&number);
      while(number !=0 ){
      rem=number%10;
      rev =rev*10 + rem;
      number=number/10;
      }
      printf("the reverse number is %d",rev);
     return 0;
  } 
