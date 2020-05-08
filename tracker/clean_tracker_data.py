inFile = open("tracker.txt","r")
content = inFile.readlines()

content = [x.strip() for x in content]
print(content)

# outFile = open("tracker_clean.csv","w")

