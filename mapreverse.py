N = 4000
given = [range(N * i + 1, N * (i + 1) + 1) for i in range(N)]
print([elem[::-1] for elem in given][-1][-1])
