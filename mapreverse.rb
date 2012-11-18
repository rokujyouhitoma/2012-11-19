N = 4000
given = Range.new(0, N - 1).collect{|i| Range.new(N * i + 1, N * (i + 1)).to_a}
print given.map{|elem| elem.reverse}[-1][-1]
