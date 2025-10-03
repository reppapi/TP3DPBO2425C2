class PowerTypeInfo:
    def __init__(self):
        self.sourceType = ""
        self.wattage = 0

    def setSourceType(self, st):
        self.sourceType = st

    def getSourceType(self):
        return self.sourceType

    def setWattage(self, w):
        self.wattage = w

    def getWattage(self):
        return self.wattage

    def printPowerSource(self):
        print("--- Power Type Info ---")
        print(f"Source Type: {self.sourceType}")
        print(f"Wattage: {self.wattage} W")
