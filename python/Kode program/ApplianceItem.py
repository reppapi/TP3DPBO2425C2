from HouseOldItem import HouseOldItem
from BrandInfo import BrandInfo
from PowerTypeInfo import PowerTypeInfo
from WarrantyInfo import WarrantyInfo

class ApplianceItem(HouseOldItem, BrandInfo):
    def __init__(self):
        HouseOldItem.__init__(self)
        BrandInfo.__init__(self)
        self.powerType = ""
        self.warranty = ""
        self.powerInfo = PowerTypeInfo()
        self.warrantyInfo = WarrantyInfo()

    def setPowerType(self, pt):
        self.powerType = pt

    def getPowerType(self):
        return self.powerType

    def setWarranty(self, w):
        self.warranty = w

    def getWarranty(self):
        return self.warranty

    def setPowerTypeInfo(self, pi):
        self.powerInfo = pi

    def getPowerTypeInfo(self):
        return self.powerInfo

    def setWarrantyInfo(self, wi):
        self.warrantyInfo = wi

    def getWarrantyInfo(self):
        return self.warrantyInfo

    def printAppliance(self):
        print("=== Appliance Item ===")
        self.printItem()
        self.printBrand()
        print(f"Power Type: {self.powerType}")
        print(f"Warranty: {self.warranty}")
