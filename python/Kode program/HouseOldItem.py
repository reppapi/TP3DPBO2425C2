class HouseOldItem:
    def __init__(self):
        self.item = ""
        self.price = 0.0
        self.room = ""

    def setItem(self, i):
        self.item = i

    def getItem(self):
        return self.item

    def setPrice(self, p):
        self.price = p

    def getPrice(self):
        return self.price

    def setRoom(self, r):
        self.room = r

    def getRoom(self):
        return self.room

    def printItem(self):
        print(f"Item: {self.item}")
        print(f"Price: {self.price}")
        print(f"Room: {self.room}")
