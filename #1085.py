x,y,w,h = map(int, input().split())
if (x>(w/2)):
    if (y>(h/2)):
        if (w-x>h-y):
            print(h-y)
        else:
            print(w-x)
    else:
        if (w-x>y):
            print(y)
        else:
            print(w-x)
else:
    if (y>(h/2)):
        if (x>h-y):
            print(h-y)
        else:
            print(x)
    else:
        if(x>y):
            print(y)
        else:
            print(x)