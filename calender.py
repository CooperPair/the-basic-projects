class calender(object):
	months = (31,28,31,30,31,30,31,31,30,31,30,31)
	date_style = "British"
	@staticmethod
#A staticmethod is a method that knows nothing about the class or instance it was called on. 
#It just gets the arguments that were passed,
# no implicit first argument. It is basically useless in Python
# -- you can just use a module function instead of a staticmethod.

	def leapyear(year):
		if year%4 == 0 and year%100 != 0:
			return False
		elif year%100 == 0 and year%400 == 0:
			return False
		elif year%400 == 0:
			return True
		else:
			return False

	def __init__(self,d,m,y):
		self.set_calender(d,m,y)

	def set_calender(self,d,m,y):
		if type(d) == int and type(m) == int and type(y) == int:
			self._days = d
			self._months = m
			self._years = y
		else:
			raise TypeError("All need to be integer only")

	def __str__(self):
		if calender.date_style == "British":
			return "{0:02d}/{1:02d}/{2:4d}".format(self._days,self._months,self._years)

	def advance(self):
		max_days = calender.months[self._months-1]
		if self._months == 2 and calender.leapyear(self._years):
			max_days += 1
		if self._days == max_days:
			self._days = 1
			if self._months == 12:
				self._months = 1
				self._years += 1
			else:
				self._months += 1
		else:
			self._days += 1

if __name__ == '__main__':
	x = calender(31,12,2018)
	print(x, end=" ")
	x.advance()
	print("After applying advance: ",x)