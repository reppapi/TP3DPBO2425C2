public class FurnitureItem extends HouseOldItem {
    private String material;
    private String durability;
    private MaterialInfo materialInfo = new MaterialInfo();
    private BrandInfo brandInfo = new BrandInfo();

    public void setMaterial(String m) { material = m; }
    public String getMaterial() { return material; }

    public void setDurability(String d) { durability = d; }
    public String getDurability() { return durability; }

    public void setMaterialInfo(MaterialInfo mi) { materialInfo = mi; }
    public MaterialInfo getMaterialInfo() { return materialInfo; }

    public void setBrandInfo(BrandInfo bi) { brandInfo = bi; }
    public BrandInfo getBrandInfo() { return brandInfo; }

    public void printFurniture() {
        System.out.println("=== Furniture Item ===");
        printItem();
        brandInfo.printBrand();
        System.out.println("Material: " + material);
        System.out.println("Durability: " + durability);
    }
}
