import turtle
import random

turtle.title("Program X")
turtle.setup(500, 500, 0, 0)

def polygon(sides, length):

    for x in range(sides):
        turtle.forward(length)
        turtle.right(360/sides)

# hide the turtle
turtle.hideturtle()

# tell python to no longer update the graphics
turtle.tracer(0)

for x in range(1000):
    # choose a random spot
    xpos = random.randint(-200,200)
    ypos = random.randint(-200,200)

    # goto this spot
    turtle.penup()
    turtle.goto(xpos, ypos)
    turtle.pendown()

    # generate a random color
    red = random.random() # returns a number between 0 and 1
    green = random.random()
    blue = random.random()

    # fill in our shape
    turtle.fillcolor(red, green, blue)

    # draw the shape
    turtle.begin_fill()
    polygon(4, 50)
    turtle.end_fill()

# update the screen with our drawing
turtle.update()

turtle.exitonclick()
