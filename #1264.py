string = []
n = 0
while True:
    temporary = input()
    if (temporary != "#"):
        string.append(temporary)
    else:
        break
for s in string:
    for c in s:
        if(c.lower() in "aeiou"):
            n += 1
    print(n)
    n = 0