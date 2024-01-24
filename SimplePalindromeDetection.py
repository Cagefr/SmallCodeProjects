

print("Please enter a string, I will guess if it is a palindrome")
inp = (input())



print("")
print("your word is: ", inp)

charc = 0
for i in inp:
    charc+=1

print ("your word is ", charc, " characters long.")

end = charc - 1

iWord = inp

length = len(inp)

itera = range(length//2)

another = list(inp)

for i in itera:
    if inp[0 + i] == inp[-1-i]:
        print("Index: ", i," and Index: ", -1-i, "characters have been verified\n")
        ver = True
    else:
        print("\nError in comparison, not a palindrome")
        ver = False

if ver == True:
    print("\n Your string is a palindrome!!")
print("")

print ("reversed version of word: ", inp[::-1])