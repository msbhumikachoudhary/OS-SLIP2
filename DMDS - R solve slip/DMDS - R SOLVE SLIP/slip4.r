# Q1. Write a R program to calculate the sum of two matrices of given size

# Create two example matrices
matrix1 <- matrix(c(1,2,3,4,5,6), nrow = 2)
matrix2 <- matrix(c(7,8,9,10,11,12), nrow = 2)

# Calculate the sum of the matrices
result <- matrix1 + matrix2

# Print the original matrices and their sum
cat("Matrix 1:\n")
print(matrix1)

cat("Matrix 2:\n")
print(matrix2)

cat("Sum of the matrices:\n")
print(result)