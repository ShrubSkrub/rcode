t = int(input("Enter a maximum number: ")) + 1  #Input the maximum number you want this code to check for prime
i = 0                                           #Counter Number
j = 0                                           #Counter Number
x = 0                                           #Total number of divisors
for i in range(1, t):                           #Get all of the numbers you want ot check for prime
    x = 0                                       #Reset the counter "total number of divisors"
    for j in range(1, t):                       #Get all the posible divisors for the number i
        if (i % j == 0):                        #Check how many times the number i is divisible
            x = x + 1                           #Add to the total number of divisors of the number
    if (x <= 2):                                #If the number of divisors is just 1 and itself
        print(i)                                #Print The Number
