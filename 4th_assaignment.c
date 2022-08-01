// 1. Write a program to print MySirG 5 times on the screen
            #include<stdio.h>
            int main(){
                int loop = 1;
                while(loop <= 5){
                    printf("MySirG\n");
                    loop++;
                } 
                return 0;
            } 

// 2. Write a program to print the first 10 natural numbers.
            #include<stdio.h>
            int main(){
                int loop = 1 , number = 1;
                 while(loop <= 10){
                    printf("%d\n",number);
                    number = number + 1;
                    loop++;
                 }

                return 0;
            } 

// 3. Write a program to print the first 10 natural numbers in reverse order
                #include<stdio.h>
                int main(){
                    int loop =1 , number = 10;
                    while(loop <=10){
                        printf("%d\n",number);
                        number = number-1;
                        loop++;
                    }
                    return 0;
                } 

// 4. Write a program to print the first 10 odd natural numbers
                 #include<stdio.h>
                int main(){
                    int loop=1, number =1;
                    while(loop<=10){
                        if(number %2 !=0){
                            printf("%d\n",number);
                            number = number+2;
                            loop++;
                        }
                    }
                    return 0;
                } 

// 5. Write a program to print the first 10 odd natural numbers in reverse order.
                #include<stdio.h>
                int main(){
                    int loop =1 , number = 19;
                     while(loop <=10){
                        if(number %2 !=0){
                        printf("%d\n",number);
                        number = number - 2 ;
                        }
                        loop++;
                     }
                    return 0;
                } 

// 6. Write a program to print the first 10 even natural numbers
                #include<stdio.h>
                int main(){
                    int loop =1, number = 2;
                    while(loop <= 10){
                        if(number%2==0){
                            printf("%d\n",number);
                            number = number + 2;
                        }
                        loop++;
                    }
                    return 0;
                } 

// 7. Write a program to print the first 10 even natural numbers in reverse order
                #include<stdio.h>
                int main(){
                    int loop =1 , number = 20;
                    while(loop<=10){
                        if(number%2==0){
                            printf("%d\n",number);
                            number = number -2;
                        }
                        loop++;
                    }
                    return 0;
                } 

// 8. Write a program to print squares of the first 10 natural numbers
                #include<stdio.h>
                int main(){
                    int loop =1, number =1 , square;
                    while(loop<=10){
                        square = number*number;
                        printf("%d\n",square);
                        number = number + 1;
                         loop++;
                    }
                    return 0;
                } 

// 9. Write a program to print cubes of the first 10 natural numbers
                #include<stdio.h>
                int main(){
                    int loop =1 , number =1 , cube;
                    while(loop <= 10){
                        cube = number*number*number;
                        printf("%d\n",cube);
                        number = number +1;
                        loop++;
                    }
                    return 0;
                } 

// 10. Write a program to print a table of 5.
                #include<stdio.h>
                int main(){
                    int loop =1 , number = 5 , result;
                     while (loop<=10)
                     {
                        result = number * loop;
                        printf("%d X %d = %d\n",number, loop , result);
                        loop++;
                     }
                     
                    return 0;
                }
