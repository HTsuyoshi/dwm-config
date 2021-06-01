import sys, math

# Functions
def printColor(RGBInit):
    print("\t{ col_gray4, \"#", end="")
    for j in range(3):
        print(str(hex(RGBInit[j]))[2:].zfill(2), end="")
    print("\" },", end="")
    print()

def printColor1(RGBInit):
    print("\t\"", end="")
    for j in range(3):
        print(str(hex(RGBInit[j]))[2:].zfill(2), end="")
    print("\",", end="")
    print()

def diff(cor1, cor2, divisor):
    return 0 - int((cor1 - cor2) / divisor)

# Args
if len(sys.argv) != 4 and len(sys.argv) != 3:
    print("usage: degradeColors.py color1 color2 times")
    print("color1 and color2 in hexadecimal")
    exit(1)

if len(sys.argv) == 3:
    divisor = 13
else:
    divisor = int(sys.argv[3])

# Calc color
color1 = sys.argv[1].replace('#', '')
color2 = sys.argv[2].replace('#', '')

RGBInit = []
RGBFinal = []
RGBDiff = []

for x in range(3):
    RGBInit.append(int(color1[x*2:x*2+2], 16))
    RGBFinal.append(int(color2[x*2:x*2+2], 16))
    cor1 = int(color1[x*2:x*2+2], 16)
    cor2 = int(color2[x*2:x*2+2], 16)
    RGBDiff.append(diff(cor1, cor2, divisor))

# Print
print('static const char *degrade[][2] = {')

for x in range(divisor - 4):
    printColor(RGBInit)
    for i in range(3):
        RGBInit[i] += RGBDiff[i]

print("};")
print()

print('static const char degrade1[4][8] = {')
for x in range(divisor - 4, divisor - 1):
    printColor1(RGBInit)
    for i in range(3):
        RGBInit[i] += RGBDiff[i]
printColor1(RGBFinal)
print('};')
print()
