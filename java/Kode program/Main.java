public class Main {
    public static void main(String[] args) {
        // Furniture
        FurnitureItem sofa = new FurnitureItem();
        sofa.setItem("Sofa");
        sofa.setPrice(2500000);
        sofa.setRoom("Living Room");

        BrandInfo sofaBrand = new BrandInfo();
        sofaBrand.setBrandName("IKEA");
        sofaBrand.setOriginCountry("Sweden");
        sofaBrand.setEstablishedYear(1943);
        sofa.setBrandInfo(sofaBrand);

        sofa.setMaterial("Leather");
        sofa.setDurability("10 years");

        MaterialInfo mat = new MaterialInfo();
        mat.setType("Wood");
        mat.setQualityGrade("Premium");
        sofa.setMaterialInfo(mat);

        // Appliance
        ApplianceItem wm = new ApplianceItem();
        wm.setItem("Washing Machine");
        wm.setPrice(5000000);
        wm.setRoom("Laundry Room");

        BrandInfo wmBrand = new BrandInfo();
        wmBrand.setBrandName("LG");
        wmBrand.setOriginCountry("South Korea");
        wmBrand.setEstablishedYear(1958);
        wm.setBrandInfo(wmBrand);

        wm.setPowerType("Electric");
        wm.setWarranty("3 years");

        PowerTypeInfo pi = new PowerTypeInfo();
        pi.setSourceType("Solar");
        pi.setWattage(1500);
        wm.setPowerInfo(pi);

        WarrantyInfo wi = new WarrantyInfo();
        wi.setDuration("5 years");
        wi.setCoverageDetails("Full service and replacement");
        wm.setWarrantyInfo(wi);

        // Room
        RoomInfo ri = new RoomInfo();
        ri.setRoomName("Kitchen");
        ri.setFloorLevel(1);

        // Menampilkan Informasi Furniture
        System.out.println("========================================");
        System.out.println("          FURNITURE DETAILS");
        System.out.println("========================================");
        sofa.printFurniture();
        System.out.println(); // Menambah spasi
        sofa.getMaterialInfo().printMaterial();
        System.out.println("========================================");
        System.out.println();

        // Menampilkan Informasi Appliance
        System.out.println("========================================");
        System.out.println("           APPLIANCE DETAILS");
        System.out.println("========================================");
        wm.printAppliance();
        System.out.println(); // Menambah spasi
        wm.getPowerInfo().printPowerSource();
        System.out.println(); // Menambah spasi
        wm.getWarrantyInfo().printWarranty();
        System.out.println("========================================");
        System.out.println();

        // Menampilkan Informasi Ruangan
        System.out.println("========================================");
        System.out.println("               ROOM INFO");
        System.out.println("========================================");
        ri.printRoom();
        System.out.println("========================================");
        System.out.println();
    }
}