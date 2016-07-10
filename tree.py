#stutest
import turtle
def tree(branchLen,t):
if branchLen > 3:
t.forward(branchLen)
t.right(40)
tree(branchLen-15,t)
t.left(50)
tree(branchLen-15,t)
t.right(40)
t.backward(branchLen)
def main():
t = turtle.Turtle()
myWin = turtle.Screen()
t.left(80)
t.up()
t.backward(100)
t.down()
t.color("brown")
tree(75,t)
myWin.exitonclick()
main()

   

