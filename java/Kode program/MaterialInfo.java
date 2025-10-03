public class MaterialInfo {
    private String type;
    private String qualityGrade;

    public void setType(String t) { type = t; }
    public String getType() { return type; }

    public void setQualityGrade(String q) { qualityGrade = q; }
    public String getQualityGrade() { return qualityGrade; }

    public void printMaterial() {
        System.out.println("--- Material Info ---");
        System.out.println("Type: " + type);
        System.out.println("Quality Grade: " + qualityGrade);
    }
}
