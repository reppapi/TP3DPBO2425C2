from HouseOldItem import HouseOldItem
from BrandInfo import BrandInfo
from MaterialInfo import MaterialInfo

class FurnitureItem(HouseOldItem, BrandInfo):
    def __init__(self):
        HouseOldItem.__init__(self)
        BrandInfo.__init__(self)
        self.material = ""
        self.durability = ""
        self.materialInfo = MaterialInfo()

    def setMaterial(self, m):
        self.material = m

    def getMaterial(self):
        return self.material

    def setDurability(self, d):
        self.durability = d

    def getDurability(self):
        return self.durability

    def setMaterialInfo(self, mi):
        self.materialInfo = mi

    def getMaterialInfo(self):
        return self.materialInfo

    def printFurniture(self):
        print("=== Furniture Item ===")
        self.printItem()
        self.printBrand()
        print(f"Material: {self.material}")
        print(f"Durability: {self.durability}")
