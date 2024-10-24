# Q1. Draw a pie chart using R programming for the following data distribution:
# Digits on
# Dice
# 1 2 3 4 5 6
# Frequency of
# getting each
# number
# 7 2 6 3 4 8


# create data for the graph
dice <- c(7, 2, 6, 3, 4, 8)
labels <- c("1", "2", "3", "4", "5", "6")

#  plot the chart
pie(dice,labels)
