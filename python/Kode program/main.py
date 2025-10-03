from FurnitureItem import FurnitureItem
from ApplianceItem import ApplianceItem
from MaterialInfo import MaterialInfo
from PowerTypeInfo import PowerTypeInfo
from WarrantyInfo import WarrantyInfo
from RoomInfo import RoomInfo

def main():
    # Furniture
    sofa = FurnitureItem()
    sofa.setItem("Sofa")
    sofa.setPrice(2500000)
    sofa.setRoom("Living Room")
    sofa.setBrandName("IKEA")
    sofa.setOriginCountry("Sweden")
    sofa.setEstablishedYear(1943)
    sofa.setMaterial("Wood")
    sofa.setDurability("10 years")

    mat = MaterialInfo()
    mat.setType("Leather")
    mat.setQualityGrade("Premium")
    sofa.setMaterialInfo(mat)

    # Appliance
    wm = ApplianceItem()
    wm.setItem("Washing Machine")
    wm.setPrice(5000000)
    wm.setRoom("Laundry Room")
    wm.setBrandName("LG")
    wm.setOriginCountry("South Korea")
    wm.setEstablishedYear(1958)
    wm.setPowerType("Electricity")
    wm.setWarranty("3 years")

    pi = PowerTypeInfo()
    pi.setSourceType("Solar")
    pi.setWattage(1500)
    wm.setPowerTypeInfo(pi)

    wi = WarrantyInfo()
    wi.setDuration("5 thn")
    wi.setCoverageDetails("Full service and replacement")
    wm.setWarrantyInfo(wi)

    # Room
    ri = RoomInfo()
    ri.setRoomName("Kitchen")
    ri.setFloorLevel(1)

    # Menampilkan Informasi Furniture
    print("========================================")
    print("          FURNITURE DETAILS")
    print("========================================")
    sofa.printFurniture()
    print()  # Menambah spasi
    sofa.getMaterialInfo().printMaterial()
    print("========================================\n")

    # Menampilkan Informasi Appliance
    print("========================================")
    print("           APPLIANCE DETAILS")
    print("========================================")
    wm.printAppliance()
    print()  # Menambah spasi
    wm.getPowerTypeInfo().printPowerSource()
    print()  # Menambah spasi
    wm.getWarrantyInfo().printWarranty()
    print("========================================\n")

    # Menampilkan Informasi Ruangan
    print("========================================")
    print("               ROOM INFO")
    print("========================================")
    ri.printRoom()
    print("========================================\n")

if __name__ == "__main__":
    main()