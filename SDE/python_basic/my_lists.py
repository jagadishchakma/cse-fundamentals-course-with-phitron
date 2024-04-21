# python list data type out of four set,tuple,dict,list
friends = ["a","b","c","d","e","f"]
print(friends)
print(friends[3])
for friend in friends:
    print(friend,end=" ")

print(len(friends))

# a list can contain different data type
pajon = ["alu","kosu",23,4.3]
for item in pajon:
    print(item)
print(type(pajon))

# list constructor
houses = list(("house1","House2","House3","House4","House5"))

houses[3] = "Bangladesh"
print(houses)
houses.insert(3,"Kajola")
print(houses)