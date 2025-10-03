class BrandInfo:
    def __init__(self):
        self.brandName = ""
        self.originCountry = ""
        self.establishedYear = 0

    def setBrandName(self, bn):
        self.brandName = bn

    def getBrandName(self):
        return self.brandName

    def setOriginCountry(self, oc):
        self.originCountry = oc

    def getOriginCountry(self):
        return self.originCountry

    def setEstablishedYear(self, ey):
        self.establishedYear = ey

    def getEstablishedYear(self):
        return self.establishedYear

    def printBrand(self):
        print(f"Brand: {self.brandName}")
        print(f"Origin Country: {self.originCountry}")
        print(f"Established Year: {self.establishedYear}")
