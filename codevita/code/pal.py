def merapalindrome(s):
    n = len(s)
    if n==1:
        return True
    for i in range(n//2):
        if s[i] != s[-i-1]:
            return False
    return True
s = input()
def f(s):
    for a in range(1,len(s)-2):
        if merapalindrome(s[:a]):
            for b in range(a+1,len(s)):
                if merapalindrome(s[a:b]) and merapalindrome(s[b:]):
                    print(s[:a])
                    print(s[a:b])
                    print(s[b:])
                    return
    print("not possible")

f(s)