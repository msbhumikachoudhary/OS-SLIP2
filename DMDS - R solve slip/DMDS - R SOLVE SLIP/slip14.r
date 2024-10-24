# Q1. Write a script in R to create a list of employees (name) and perform the following:
# a. Display names of employees in the list.
# b. Add an employee at the end of the list
# c. Remove the third element of the list.

# Create a list of employees' names
employees <- list("saurabh", "pranav", "hrushali", "yogesh")

# a. Display names of employees in the list
cat("\nEmployee list:\n")
print(employees)
e1 <- "kevin rio"

# b. Add an employee at the end of the list
employees <- append(employees, e1)
cat("\nAppending employee at end:\n")
print(employees)

# c. Remove the third element of the list
employees <- employees[-3]
cat("\n3rd element from list removed:\n")
print(employees)
