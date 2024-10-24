# Q1. Write a R program to find all elements of a given list that are not in another given list.
# = list("x", "y", "z")
# = list("X", "Y", "Z", "x", "y", "z") 

# Create the first list with elements "x", "y", "z"
list1 = list("x", "y", "z")

# Create the second list with elements "X", "Y", "Z", "x", "y", "z"
list2 = list("X", "Y", "Z", "x", "y", "z")

# Print a message indicating the original lists
print("Original lists:")

# Print the contents of the first list
print(list1)

# Print the contents of the second list
print(list2)

# Print a message indicating the result of finding elements in l2 that are not in l1
print("All elements of list2 that are not in list1:")

# Find and print elements of l2 that are not present in l1 using setdiff
setdiff(list2, list1)