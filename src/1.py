from decimal import getcontext, Decimal
import sys

getcontext().prec = 29
number = Decimal(sys.argv[1]) / Decimal(sys.argv[2])
#number = number.quantize(Decimal(".00000000000000000000000000000"))
print('{:.{}f}'.format(number, sys.argv[3]))
