# Calcul une estimation  de nombre π (Pi) using random numbers and Monte Carlo Simulation

take a random point P at coordinate X, Y such that 0 <= x <= 1 and 0 <= y <= 1. 
If x2 + y2 <= 1, then the point is inside the quarter disk of radius 1, otherwise the point is outside.

![stackoverflow](https://i.stack.imgur.com/c9Qhr.png)


We know that the probability that the point is inside the quarter disk is equal to π/4, so from the data that we have of the random numbers, we need to determine the number of points that satisfy the condition x2 + y2 <= 1.

Pi is going to be equals to 4 multiplied by the quotient of the division between the number of points that satisfy the condition and the number of points of the dataset, providing an approximate value of PI, for example with 8 of the 10 points, we will obtain a value close to PI:

π = 4 * (number of points that satisfy x2 + y2 <= 1 /toatl number of points generated )