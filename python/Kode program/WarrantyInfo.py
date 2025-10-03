class WarrantyInfo:
    def __init__(self):
        self.duration = ""
        self.coverageDetails = ""

    def setDuration(self, d):
        self.duration = d

    def getDuration(self):
        return self.duration

    def setCoverageDetails(self, c):
        self.coverageDetails = c

    def getCoverageDetails(self):
        return self.coverageDetails

    def printWarranty(self):
        print("--- Warranty Info ---")
        print(f"Duration: {self.duration}")
        print(f"Coverage Details: {self.coverageDetails}")
