def isValid(s: str) -> bool:
    stack = []
    closeToOpen = { ')':'(', '}':'{', ']':'['}
    for c in s:
        if c in closeToOpen:
            if stack and stack[-1] == closeToOpen[c]:
                stack.pop()
            else:
                return False
        else:
            stack.append(c)
    return True if not stack else False

if __name__ == '__main__':
    testParenthesis = "{[()]}[" # "(([[{}]])){}[()]{}" # 

    testResult = isValid(testParenthesis)
    print("The test parenthesis:\n", testParenthesis, "\nwas determined to be", "valid." if testResult else "invalid.")