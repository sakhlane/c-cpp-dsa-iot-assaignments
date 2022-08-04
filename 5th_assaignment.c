// 1. Write a program to print MySirG N times on the screen
           /* #include<stdio.h>
            int main(){
                int number, loop=1;
                printf("how many times  print MySirG ? \n");
                scanf("%d",&number);
                while( loop <= number){
                    printf("MySirG\n");
                    loop++;
                }
                return 0;
            } */

// 2. Write a program to print the first N natural numbers.
          /* #include<stdio.h>
           int main(){
            int number=0,loop;
            printf("enter a number");
            scanf("%d ",&loop);
            while (loop)
            {
                number=number+1;
                printf("%d ",number);
                loop--;
            }

            return 0;
            } */

// 3. Write a program to print the first N natural numbers in reverse order
          /*  #include<stdio.h>
             int main(){
                int number;
                printf("enter a number");
                scanf("%d",&number);
                while (number)
                {
                    printf("%d ",number);
                    number--;
                }
               return 0;
            } */

// 4. Write a program to print the first N odd natural numbers
          /*  #include<stdio.h>
            int main(){
                int loop, number=1;
                printf("enter a number");
                scanf("%d",&loop);
                while (loop)
                {
                    printf("%d ",number);
                    number= number+2;
                    loop--;
                }
                return 0;
            } */

//5. Write a program to print the first N odd natural numbers in reverse order.
            /*   #include<stdio.h>
                int main(){
                    int number;
                    printf("enter a number");
                    scanf("%d",&number);
                    while (number)
                    {
                        printf("%d ",(number*2)-1);
                        number--;
                    }

                    return 0;
                } */

//6. Write a program to print the first N even natural numbers
        /*   #include<stdio.h>
           int main(){
            int loop, number=0;
            printf("enter a number");
            scanf("%d",&loop);
            while (loop)
            {
                number = number + 2;
                printf("%d ",number );
                loop--;
            }
            return 0;
           } */


// 7. Write a program to print the first N even natural numbers in reverse order
              /*  #include<stdio.h>
                int main(){
                    int number,loop;
                    printf("enter a number");
                    scanf("%d",&number);
                    while (number)
                    {
                        printf("%d ",(number*2));
                         number--;
                    }
                     return 0;
                } */

// 8. Write a program to print squares of the first N natural numbers
              /*  #include<stdio.h>
                int main(){
                    int number=0 , loop, square;
                    printf("enter a number");
                    scanf("%d",&loop);
                    while (loop)
                    {
                        number = number + 1;
                         square = number*number;
                        printf("%d ",square);
                        loop--;
                    }
                      return 0;
                } */

// 9. Write a program to print cubes of the first N natural numbers
               /*       #include<stdio.h>
                int main(){
                    int number=0 , loop, cube;
                    printf("enter a number");
                    scanf("%d",&loop);
                    while (loop)
                    {
                        number = number + 1;
                         cube = number*number*number;
                        printf("%d ",cube);
                        loop--;
                    }
                      return 0;
                } */

// 10. Write a program to print a table of N.
           /* #include<stdio.h>
            int main(){
                int number , loop=1 , result = 0 ;
                printf("enter a table number");
                scanf("%d",&number);
                while (loop<=10)
                {
                    result = number * loop;
                    printf("%d X %d = %d\n", number , loop , result);
                    loop++;
                }
                return 0;
            } */



