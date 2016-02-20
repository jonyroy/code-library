import turtle
import random

# input:  takes a side and a length as integers
# processing:  draws a figure based on the inputs
# output:  nothing, dones't return any value
def polygon(sides, length):

    for x in range(sides):

        turtle.forward(length)
        turtle.right(360/sides)

turtle.title("My Turtle")
turtle.setup(500, 500, 0, 0)

# start off on the left side of the screen
xpos = -200

# get 7 days worth of weight values from the user
for days in range(7):

    # get this days weight
    weight = float(turtle.textinput("Weight", "Weight for today: "))

    # draw a rectangle on the screen
    turtle.penup()
    turtle.goto(xpos, 0)
    turtle.setheading(90)
    turtle.pendown()
    turtle.forward(weight)
    turtle.right(90)
    turtle.forward(50)
    turtle.right(90)
    turtle.forward(weight)
    turtle.right(90)
    turtle.forward(50)

    # move to the right
    xpos += 60

turtle.exitonclick()
