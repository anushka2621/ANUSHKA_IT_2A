
def singleDigit(self, N):
        if N<10:
            return N
        else:
            return self.singleDigit(self.digitAdd(N))
        
