
def gcd(m,n):
	while m%n != o:
		oldm = m
		oldn = n

		m = oldn
		n = oldm%oldn
	return n


class Fraction:

	def __init__(self,top,bottom):# this is known as constructor

		self.num = top
		self.den = bottom

	def __str__(self):# function that print the exact value without printing the address like 0x40bc...
		return str(self.num) + "/" + str(self.den)

	def __add__(self, otherfraction):

# a/b + c/d can be written as (ad+bc)/bd hence newnum=(ad+bc) and newden is(bd) respectively
		newnum = self.num*otherfraction.den + self.den*otherfraction.num
		newden = self.den*otherfraction.den

		return Fraction(newnum,newden)

	def __eq__(self,other):
		firstnum = self.num*other.den
		secondnum = self.den*other.num

		return firstnum == secondnum

x = Fraction(1,2)
y = Fraction(2,3)
print(x+y)
print(x == y)