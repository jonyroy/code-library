import turtle
import random

# our generic polygon function
def polygon(sides, length):

    for x in range(sides):
        turtle.forward(length)
        turtle.right(360/sides)

# create a drawing variable
is_drawing = True

# bound to the "q" key - will draw a random polygon
def draw_poly():
    polygon(random.randint(4,10), 50)

# bound to the "up" key - turtle up
def go_up():
    turtle.setheading(90)
    turtle.forward(10)

# bound to the "right" key - turtle right
def go_right():
    turtle.setheading(0)
    turtle.forward(10)

# bound to the "left" key - turtle left
def go_left():
    turtle.setheading(180)
    turtle.forward(10)

# bound to the "down" key - turtle down
def go_down():
    turtle.setheading(270)
    turtle.forward(10)

# bound to the "p" key - toggles pen up/down
def toggle_pen():
    global is_drawing

    # if we are currently drawing then pull
    # up the pen
    if is_drawing == True:
        turtle.penup()
        is_drawing = False
    else:
        turtle.pendown()
        change_pen()
        is_drawing = True

# change the pen color - called whenever we put the pen down
def change_pen():
    turtle.pensize(random.randint(1,10))

    # generate random colors
    red = random.randint(1,100) / 100
    green = random.random()
    blue = random.random()

    # assign color
    turtle.pencolor(red, green, blue)

# main program
turtle.title("My Turtle")
turtle.setup(500,500, 0,0)

# bind keys to our functions
turtle.onkey(go_up, "Up")
turtle.onkey(go_down, "Down")
turtle.onkey(go_left, "Left")
turtle.onkey(go_right, "Right")
turtle.onkey(toggle_pen, "p")
turtle.onkey(draw_poly, "q")

# listen for key presses
turtle.listen()
turtle.exitonclick()
