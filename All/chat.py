## py🐍🐍
#print("hello from arjun")

size = 100
stack  = [0] * size
top = -1

def push(value):
    global top
    if top == size - 1:
        print("Stack is full.")
        return 
    top += 1
    stack[top] = value
    print(f"BOOK ID {value} pushed in the shelf.")

def pop():
    global top
    if top == -1:
        print("Stack underflow.")
        return
    element = stack[top]
    top -= 1
    print(f"bookid {element} removed from the shelf.")

def displayStack():
    if top == -1:
        print("Empty shelf.")
        return
    
    for item in reversed(stack):
        print(item,end=" ")
    print()



def main():
    while True:
        try:
            nums = input().strip().split()
            if not nums:
                continue
            choice = int(input[0]);
            if choice == 1:
                value = int(input[1])
                push(value)
            elif choice == 2:
                pop()
            elif choice == 3:
                displayStack()
            elif choice == 4:
                print("exiting the program.")
                break
            else:
                print("invalid choice")
        except:
            continue
          
    
main()