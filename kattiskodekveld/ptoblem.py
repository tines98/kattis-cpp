from sys import stdin

for line in stdin:
    if "problem" in line:
        print("yes")
    else:
        print("no")