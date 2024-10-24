# Q1. Write an R program to calculate the multiplication table using afunction

table <- function(n) {
    a = vector ("numeric")
    for (i in 1:10) {
        a[i] = n*i
    }
    return (a)
}
number = 5
result <- table(number)
cat("Multiplication of",number,": \n")
for(i in 1:10){
    cat(number," * ",i," = ",result[i],"\n")
}