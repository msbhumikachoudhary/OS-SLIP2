# Q1. Write a R program to reverse a number and also calculate the sum of digits of that
# number.(i don't know how to run this r program)

Reverse_and_Sum <- function(n) {
    DigiSum <- 0 
    sum <- 0
    ori = n
 
    while(n>0) {
        k = n%%10 
        DigiSum = DigiSum + k 
        sum = sum * 10 + k 
        n = n %/% 10  # %/% is used for integer division 
    }
    cat("Original number: ",ori,"\n")
    cat("Reversed number: ",sum,"\n")
    cat("Sum of digits: ",DigiSum,"\n")
}

number <- 123
Reverse_and_Sum(number) 
