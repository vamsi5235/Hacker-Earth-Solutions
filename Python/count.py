T = int(input())

for _ in range(T):

    def nextOccurrence(M, n, start, ch1, ch2):

        for i in range(start, n):

# Return the index of the first

# occurrence of ch

            if (M[i] == ch1 or M[i] == ch2):

                return i

# No occurrence found

        return -1

    def countSubStr(M, n, ch1, ch2):

# To store the count of valid substrrings

        cnt = 0

# Index of the first occurrence of ch in strr

        j = nextOccurrence(M, n, 0, ch1, ch2)

        for i in range(n):

            while (j != -1 and j < i):

                j = nextOccurrence(M, n, j + 1, ch1, ch2)

# No occurrence of ch after index i in strr

            if (j == -1):

                break

# Substrrings starting at index i

# and ending at indices j, j+1, ..., n-1

# are all valid substrring

            cnt += (n - j)

        return cnt

 

# Driver code

    M = str(input())

    n = len(M)

    ch1 = "a"

    ch2 = "z"

    print(countSubStr(M, n, ch1, ch2))

 

 

 

 