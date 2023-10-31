import inline as inline
import matplotlib
import sctokenizer
from sctokenizer import TokenType
import os
import seaborn as sns
import matplotlib.pyplot as plt
from colorama import Fore, Back, Style
import tkinter as tk
def lcs_algo(S1, S2, m, n):
    L = [[0 for x in range(n + 1)] for x in range(m + 1)]

    # Building the mtrix in bottom-up way
    for i in range(m + 1):
        for j in range(n + 1):
            if i == 0 or j == 0:
                L[i][j] = 0
            elif S1[i - 1] == S2[j - 1]:
                L[i][j] = L[i - 1][j - 1] + 1
            else:
                L[i][j] = max(L[i - 1][j], L[i][j - 1])

    index = L[m][n]

    lcs_algo = [""] * (index + 1)
    lcs_algo[index] = ""

    i = m
    j = n
    while i > 0 and j > 0:

        if S1[i - 1] == S2[j - 1]:
            lcs_algo[index - 1] = S1[i - 1]
            i -= 1
            j -= 1
            index -= 1

        elif L[i - 1][j] > L[i][j - 1]:
            i -= 1
        else:
            j -= 1

    # Printing the sub sequences
    print("S1 : " + S1 + "\nS2 : " + S2)
    print("LCS: " + "".join(lcs_algo))
    return "".join(lcs_algo)

def ReadTokens(path):
    tokens = sctokenizer.tokenize_file(filepath=path, lang='c')
    tokenss = []
    for token in tokens:
        tokenss.append(token.token_type)
    codeString = ""
    for tt in tokenss:
        if (tt == TokenType.SPECIAL_SYMBOL):
            codeString = codeString + "1"
        elif (tt == TokenType.KEYWORD):
            codeString = codeString + "2"
        elif (tt == TokenType.OPERATOR):
            codeString = codeString + "3"
        elif (tt == TokenType.IDENTIFIER):
            codeString = codeString + "4"
        elif (tt == TokenType.CONSTANT):
            codeString = codeString + "5"

    return codeString
def typeEncoder(tt):
    if (tt == TokenType.SPECIAL_SYMBOL):
        return "1"
    elif (tt == TokenType.KEYWORD):
        return "2"
    elif (tt == TokenType.OPERATOR):
        return "3"
    elif (tt == TokenType.IDENTIFIER):
        return "4"
    elif (tt == TokenType.CONSTANT):
        return "5"
def findSimilarity(path,LC):
    tokens = sctokenizer.tokenize_file(filepath=path, lang='c')
    x = rec(tokens,LC,0,0,1,"")

    return x

def rec(tokenss,LC,i,j,lastLine,x):
    if (i >= len(tokenss)):
        return x
    if (tokenss[i].line != lastLine):
        lastLine = tokenss[i].line
        x += "\n"
    if (i < len(tokenss)):
        if (typeEncoder(tokenss[i].token_type) == LC[j]):
            x+=Fore.RED + tokenss[i].token_value + " "
            j += 1
        else:
            x+=Fore.GREEN + tokenss[i].token_value + " "
    else:
        x+=Fore.GREEN + tokenss[i].token_value + " "

    return rec(tokenss, LC, i + 1, j,lastLine,x)
path = "Test"
dir_list = os.listdir(path)
print(dir_list)
codeStrings = []
for str in dir_list:
    codeStrings.append(ReadTokens('Test/'+str))
print(codeStrings)
dict = {}

for i in range(0,len(codeStrings)):
    for j in range(i,len(codeStrings)):
        if(i!=j):
            m = len(codeStrings[i])
            n = len(codeStrings[j])
            x = dir_list[i]+" " +dir_list[j]
            temp = m
            if(n<temp):
                temp = n
            s=lcs_algo(codeStrings[i], codeStrings[j], m, n)
            dict[x] = len(s)/temp
            f=findSimilarity('Test/'+dir_list[i],s)
            print(Fore.RESET+dir_list[i])
            print(f)
            f = findSimilarity('Test/' + dir_list[j], s)
            print(Fore.RESET+dir_list[j])
            print(f)

#print(dict)
plt.hist(dict.values())
plt.show()