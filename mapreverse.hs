m = 4000
main = print.last.last.(map reverse) $ map (\n -> let base = (n - 1) * m in [1 + base .. m+ base]) [1 .. m]