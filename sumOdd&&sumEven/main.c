//This is a 'C' program to find sum of even and odd number in given range using recursion.

/*
    Welcome, this program calculates the sum of even numbers and sum of odd numbers in the range you define.
    Enter the lower limit : 1
    Enter the upper limit : 7
 ----------------------------------
    Sum of even numbers = 12
    Sum of odd numbers = 16
 
 ! ! ! THE PROGRAM ENDS ! ! !
 
 */

#include <stdio.h>

//funciton prototypes
int sumEven(int, int);
int sumOdd(int,int);

int main(void){
    
    //Variable decleration(s).
    int upperLimit, lowerLimit;
    int temp=0;
    int sumEvens,sumOdds;
    
    //executable statement(s).
    
    printf("Welcome, this program calculates the sum of even numbers and sum of odd numbers in the range you define\n");
    
    //getting inputs
    printf("Enter the lower limit for the range : \n");
        scanf("%d",&lowerLimit);
    printf("Enter the upper limit for the range : \n");
        scanf("%d", &upperLimit);
    
    printf("----------------------\n");
    
    //changing operation for false entering.
    
    if(lowerLimit>upperLimit){
        temp=lowerLimit;
        lowerLimit = upperLimit;
        upperLimit = temp;
    }
    
    //function calls:
    
    sumEvens = sumEven(lowerLimit, upperLimit);
    sumOdds = sumOdd(lowerLimit,upperLimit);
    
    //printing the answers:
    printf("Sum of even numbers : %d \n", sumEvens);
    printf("Sum of odd numbers : %d \n", sumOdds);
    
    printf("! ! ! THE PROGRAM ENDS ! ! !");

    return 0;
}

//function definition for sumEven.
int sumEven(int lowerInput, int upperInput){
    
    if(lowerInput>upperInput)
        return 0;
    if(lowerInput % 2 == 0)
        return lowerInput + sumEven(lowerInput+1, upperInput);
    else
        return sumEven(lowerInput+1, upperInput);
}//end of the definition.

//function definition for the sumOdd
int sumOdd(int lowerInput, int upperInput){
       
    if(lowerInput>upperInput)
        return 0;
    if(lowerInput % 2 != 0)
        return lowerInput + sumOdd(lowerInput+1,upperInput);
    else
        return sumOdd( lowerInput+1, upperInput);
    
}//end of the definition.
