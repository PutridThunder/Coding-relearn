name = "Sahib" #string variable
print("Hi, my name is " + name)
x=2 # int variable?
y=4 
sum = x+y #does the math variable is answer
print("the sum of",x,"and",y,"is",sum) #commas to seperate types of data

a = True
print(a)
b = False
# basic types of data (i think its right to call it data) in python

#int → whole numbers (e.g. 5, 42)
#float → decimals (e.g. 3.14, 2.0)
#str → strings (text in quotes, e.g. "hello")
#bool → booleans (True or False)

print("math works")

print("x + y = ", x + y)# addition
print("x - y = ", x-y)# subtraction 
print("x * y = ", x*y)# multiplication 
print("x / y = ", x/y)# division
print("x // y = ", x//y)# integer division (rounds to nearest integer)
print("x % y = ",x % y )# remainder (how many times you can divide x by y)
print("x ** y = ",x ** y )# exponent (x^y)

print("true false gates")

print( x == y) # are they equal
print( x != y) # are they not equal
print( x > y) # x greater than y
print( x < y) # x less than y
print( x >= 2) # x greater or equal to 2
print( x <= y) # x less or equal to y

print("logic operators")

print(a and b)# true if both are true
print(a or b)# true if one is true
print(not a)#flips whatever a is

print("practice")
num1 = 12
num2 = 5
print(num1 + num2)
print(num1-num2)
print(num1*num2)
print(num1/num2)
print(num1 % num2)

print("statements a desicion makings")

age = 18
if age > 18:
    print("you are old!")
elif age< 18:
    print("young ahh feller")
else:
    print("hm")

print("loops")
print("for loops")# for loops repeat over a sequence
for(i) in range(5): #i is the variable within the loop, range generates a sequence of numbers, when i reaches 5 it stops (starts at 0 if undefined)
    print(i) #prints i until i is 5

fruits = ["apple","banana" ,"cherry" ] #fruits is a list, lists hold structured and ordered items
for fruit in fruits:
    print("i like", fruit) #loops until everything in the list is said, lists start at 0( apple is 0)

print("while loops")# continues while a condition is true, if never true, it will loop forever

print("loops")
count = 0
while count < 5: #loops until count is bigger than 5
    print(count)
    count += 1 #increases count by 1 for each loop
print("loops")
for (i) in range(10): #loops until i = 5, break encd the loop early
    if i == 5: 
        print("BREAK")
        break
    else:
        print(i)

print("loops")
for (i) in range(5):#skips a portion of the code in a loop if a condition is met
    if i ==2:#skips 2
        continue
    else:
        print(i)

print("nested loops")

for (i) in range(5):
    for (z) in range(5):
        print("I:", i, "Z:", z) #prints based off of a grid, z is the y axis and i is the x axis

#   0   0   0   0   0  once all of z is printed, i moves by one
#   0   0   0   0   0  continues until 5:5 is reached (will read 4 because it reads 0 as a number)
#   0   0   0   0   0
#   0   0   0   0   0
#   0   0   0   0   0

print("practice segment") # im going to make a loop that only prints the even numbers from 1 to 20

for (i) in range(20):
    if i//2 == i/2:
        print(i)
    else:
        print("ODD")

print("Functions") #allows us to turn lines of code into building blocks, instead of writing all the code we just put the function name

def greet():# def is used to start a function, variables can be given roles in the (), will be used within the blocks 
    print("hello world")

greet()#variables can be plugged into the ()
greet()

def greetname(name): #variable in the function is called name
    print("Greetings,", name)

greetname("Steve")

def add(a, b):
    return a + b #sends value back to whoevers asking

result = add(5, 3) #variable that calls on the function with specific function inputs, return adds the 2 numbers, result variable becomes the answer to a+b
print("result:", result)

def greet2(name="friend"): # sets variable name to "friend"
    print("hello, ", name)

greet2()
greet2("sahib") # overwrites the variable for name and replaces it with the inputted variable

def divide(a, b):
    if b==0:
        return None, "error: divide by zero"
    return a/b, "success"
result, message = divide(10, 0)
print(result, message)

#I don't remember ever doing multiple returns, but from what i found from a quick google search is the return sends the values back to the caller, as it should
#the return has 2 commands, controlled by an if statement, if b is 0 you are trying to divide 10 by zero, so it returns none, which is connected to the result variable. it dosent even try to divide the numbers
#then the comma in both the variables and functions seperate whats being called, so the next after none is connected to message, and when you pring them seperately, it prints only what is connected

#bad wording of whats going on but here's a test of what I mean

test1, test2, test3 = "a", "b", "c" #test 1 connects to a, test2 connects to b, ans do on
print(test1, test2, test3) 

print("test")

def sqrnum(num):
    return num*num

print(sqrnum(4))

def intr(name, age):
    print("hello", name, "you are", age)

intr("sahib", 18)