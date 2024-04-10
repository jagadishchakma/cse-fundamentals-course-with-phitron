# while loop in python

i = 0
while i <= 10:
    print(i)
    i += 1


for i in range(10):
    if(i == 8):
        break
    print(i)


for i in range(10):
    if(i == 5):
        continue
    print(i)


init = 0
while init <= 10:
   if(init == 4): 
      init += 1
      continue
   print(init)
   init += 1