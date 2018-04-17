from clock import clock
from calender import calender

class calenderclock(clock,calender):

	def __init__(self,day,month,year,hour,minute,second):
		clock.__init__(self,hour,minute,second)
		calender.__init__(self,day,month,year)

		def tick(self):
			previous_hour = self._hours
			clcok.tick(self)
			if(self._hours < previous_hour):
				self.advance()

		def __str__(self):
			return calender.__str__(self) + "," + clock.__str__(self)

if __name__ == '__main__':
	x = calenderclock(31,12,2013,23,59,59)
	print("One tick from",x,end=" ")
	x.tick()
	print("to ", x)