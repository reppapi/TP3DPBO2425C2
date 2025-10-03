public class BrandInfo {
    private String brandName;
    private String originCountry;
    private int establishedYear;

    public void setBrandName(String b) { brandName = b; }
    public String getBrandName() { return brandName; }

    public void setOriginCountry(String c) { originCountry = c; }
    public String getOriginCountry() { return originCountry; }

    public void setEstablishedYear(int y) { establishedYear = y; }
    public int getEstablishedYear() { return establishedYear; }

    public void printBrand() {
        System.out.println("Brand: " + brandName);
        System.out.println("Origin Country: " + originCountry);
        System.out.println("Established Year: " + establishedYear);
    }
}
