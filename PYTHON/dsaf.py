import turtle

turtle.title("My Turtle")
turtle.setup(500, 500, 0, 0)
def draw_square():
    ritu = turtle.Screen()
    #h=raw_input();
    ritu.bgcolor("blue")
    jony = turtle.Turtle()
    jony.shape("turtle")
    jony.color("yellow")
    jony.speed(100000)
    cnt = 0
    while cnt <36:
        jony.forward(100)
        jony.right(90)
        jony.forward(100)
        jony.right(90)
        jony.forward(100)
        jony.right(90)
        jony.forward(100)
        jony.right(100)
        cnt += 1
    x = jony.getscreen()
    x.getcanvas().postscript(file = "output.eps")
    ritu.exitonclick()

if __name__ == "__main__":
    draw_square()
    #help(turtle)
