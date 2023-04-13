-- https://codeforces.com/contest/4/problem/A
f :: Int -> String
f k = if (k == 2 || odd k) then "NO" else "YES"

main :: IO ()
main = do
    n <- getLine
    let x = (read n :: Int)
    let b = f x
    print b