public class ApplianceItem extends HouseOldItem {
    private String powerType;
    private String warranty;
    private PowerTypeInfo powerInfo = new PowerTypeInfo();
    private WarrantyInfo warrantyInfo = new WarrantyInfo();
    private BrandInfo brandInfo = new BrandInfo();

    public void setPowerType(String pt) { powerType = pt; }
    public String getPowerType() { return powerType; }

    public void setWarranty(String w) { warranty = w; }
    public String getWarranty() { return warranty; }

    public void setPowerInfo(PowerTypeInfo pi) { powerInfo = pi; }
    public PowerTypeInfo getPowerInfo() { return powerInfo; }

    public void setWarrantyInfo(WarrantyInfo wi) { warrantyInfo = wi; }
    public WarrantyInfo getWarrantyInfo() { return warrantyInfo; }

    public void setBrandInfo(BrandInfo bi) { brandInfo = bi; }
    public BrandInfo getBrandInfo() { return brandInfo; }

    public void printAppliance() {
        System.out.println("=== Appliance Item ===");
        printItem();
        brandInfo.printBrand();
        System.out.println("Power Type: " + powerType);
        System.out.println("Warranty: " + warranty);
    }
}
