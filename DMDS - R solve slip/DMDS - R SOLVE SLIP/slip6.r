# Q1. Write a R program to create a data frame using two given vectors and display the duplicate elements.

# Create two vectors
vector1 <- c("Apple", "Banana", "Cherry", "Apple", "Banana")
vector2 <- c(1, 2, 3, 1, 2)

# Create a data frame
df <- data.frame(Fruits = vector1, Quantity = vector2)

cat("Original data Frame: \n")
print(df)

cat("\n")

# Display the duplicate elements
duplicates <- df[duplicated(df),]
cat("Duplicate Elements:\n")
print(duplicates)