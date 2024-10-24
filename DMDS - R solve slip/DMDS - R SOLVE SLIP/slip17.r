# Q1. Write a R program to get the first 20 Fibonacci numbers.

# Function to generate the first 20 Fibonacci numbers
fibo <- function(n) {
  a <- 0
  b <- 1
  cat(a, "\t")
  cat(b, "\t")
  
  for(i in 3:n)
  {
     c <- a + b
     cat(c,"\t")
     a <- b
     b <- c
  }
 }
 
 # Get and print the first 20 Fibonacci numbers
 fibo(20)